#include <iostream>
#include <algorithm>
#include <vector>

class Sensor {

protected:
    std::string namn;
    double varde;

public:
    Sensor(std::string startNamn, double startVarde) :namn(startNamn), varde(startVarde) {};
    virtual ~Sensor() {
        std::cout << "Sensor-destruktor for " << this->namn << "\n";
    };

    std::string getNamn() const {
        return this->namn;
    }

    double getVarde() const {
        return this->varde;
    };

    virtual void skrivUt() const {
        std::cout << "My name is " << this->getNamn()
            << " and my value is "
            << this->getVarde()
            << "\n";
    }

    virtual bool larmar() const = 0;
};

class TemperaturSensor : public Sensor {

private:
    double larmgrans;

public:
    TemperaturSensor(std::string namn, double varde, double startLarmgrans) :Sensor(namn, varde), larmgrans(startLarmgrans) {};
    ~TemperaturSensor() {
        std::cout << "TemperaturSensor-destruktor for" << this->getNamn() << "\n";
    }

    void skrivUt() const override {
        std::cout << "My name is " << this->getNamn() << " and my value is " << this->getVarde() << " grader \n";
    };

    bool larmar() const override {
        return this->getVarde() > larmgrans;
    };
};

class RorelseSensor : public Sensor {
private:
    bool rorelseDetekterad;

public:
    RorelseSensor(std::string namn) : Sensor(namn, 0.0) {
        this->rorelseDetekterad = false;
    };

    void trigger() {
        this->rorelseDetekterad = true;
        varde = 1.0;
    }

    void reset() {
        this->rorelseDetekterad = false;
        varde = 0.0;
    }

    bool larmar() const override {
        return this->rorelseDetekterad;
    }
};

class FuktighetsSensor : public Sensor {


public:
    FuktighetsSensor(std::string namn, double startFuktighet) : Sensor(namn, 0.0) {
        if (startFuktighet > 0.0 && startFuktighet < 100.0) {
            varde = startFuktighet;
        }
        else {
            std::cout << "Ogiltig fuktighet, sätter 0";
            varde = 0.0;
        };
    }

    virtual ~FuktighetsSensor() {
        std::cout << this->getNamn() << " destruktor \n";
    }

    bool larmar() const override {
        if (varde < 20.0 || varde > 70.0) {
            return true;
        }
        return false;
    }
};

class LjusSensor : public Sensor
{

private:
    double maxLux;

public:
    LjusSensor(std::string namn, double varde, double startMaxLux) : Sensor(namn, varde), maxLux(startMaxLux) {};

    void skrivUt() const override {
        std::cout << "My name is " << this->getNamn() << " and my value is " << this->getVarde() << " lux \n";
    }

    bool larmar() const override {
        return this->getVarde() > maxLux;
    }
};

int main() {
    int count;
    std::vector<Sensor*> sensorer;
    sensorer.push_back(new TemperaturSensor("Temperature Sensor", 14, 5));
    sensorer.push_back(new RorelseSensor("Rorelse Sensor"));
    sensorer.push_back(new FuktighetsSensor("Fuktighets Sensor", 40.5));
    sensorer.push_back(new FuktighetsSensor("Fuktighets Sensor", 100.5));
    sensorer.push_back(new LjusSensor("Ljus Sensor", 10, 2));
    for (Sensor* sensor : sensorer) {
        if (sensor->larmar()) {
            count++;
        }
        sensor->skrivUt();
    }
    std::cout << "The count of alarms is " << count << "\n";
    std::cout << "The amount of sensors is " << sensorer.size() << "\n";
    for (Sensor* sensor : sensorer) {
        delete sensor;
    }

    return 0;
}