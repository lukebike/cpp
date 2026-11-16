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

int main() {

    FuktighetsSensor f1("Test", 30.0);
    FuktighetsSensor f2("Torrt", 10.0);
    FuktighetsSensor f3("Fuktigt", 80.0);
    if (f1.larmar()) {
        std::cout << f1.getNamn() << " larmade \n";
    };
    if (f2.larmar()) {
        std::cout << f2.getNamn() << " larmade \n";
    };
    if (f3.larmar()) {
        std::cout << f3.getNamn() << " larmade \n";
    };
}