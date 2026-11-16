#include <iostream>

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

int main() {

    TemperaturSensor t1("Test", 1.0, 10);
    TemperaturSensor t2("Faulty", 50.0, 3);
    t1.skrivUt();
    t2.skrivUt();
    if (t1.larmar()) {
        std::cout << t1.getNamn() << " larmade";
    };
    if (t2.larmar()) {
        std::cout << t2.getNamn() << " larmade";
    };
}