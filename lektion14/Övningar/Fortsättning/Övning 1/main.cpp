#include <iostream>

class Sensor {
protected:
    std::string namn;
    double varde;

public:
    Sensor(std::string startNamn, double startVarde)
        : namn(startNamn), varde(startVarde) {
    }

    virtual ~Sensor() {
    }

    std::string getNamn() const {
        return namn;
    }

    virtual bool larmar() const = 0;
};

class TemperaturSensor : public Sensor {

private:
    double larmgrans;

public:
    TemperaturSensor(std::string namn, double startVarde, double startLarmgrans) :Sensor(namn, startVarde), larmgrans(startLarmgrans) {}

    bool larmar() const override {
        return varde > larmgrans;
    };



};

class RorelseSensor : public Sensor {

private:
    bool rorelseDetekterad;

public:
    RorelseSensor(std::string namn) :Sensor(namn, 0.0) {
        rorelseDetekterad = false;
    }

    bool larmar() const override {
        return rorelseDetekterad;
    };
};

class LjusSensor : public Sensor {

private:
    double maxLux;

public:
    LjusSensor(std::string namn, double startVarde, double startMaxLux) :Sensor(namn, startVarde), maxLux(startMaxLux) {}

    bool larmar() const override {
        return varde > maxLux;
    };
};

class LuftfuktighetsSensor : public Sensor {
private:
    double maxFuktighet;

public:
    LuftfuktighetsSensor(std::string namn, double startVarde, double startMaxLuftFuktighet) : Sensor(namn, startVarde), maxFuktighet(startMaxLuftFuktighet) {};

    bool larmar() const override {
        return varde > maxFuktighet;
    }
};

int main() {

    Sensor* sensorer[4] = {
        new TemperaturSensor("Hello", 3.4, 2.0),
        new RorelseSensor("Rorelse"),
        new LjusSensor("Light", 50, 3.5),
        new LuftfuktighetsSensor("LuftFuktigHet", 10.3, 4.2)
    };
    for (int i = 0; i < 4; i++) {
        std::cout << sensorer[i]->getNamn() << " and the result of my alarm is " << std::boolalpha << sensorer[i]->larmar() << "\n";
    }
    for (int i = 0; i < 4; i++) {
        delete sensorer[i];
    }
};
