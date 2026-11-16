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

    virtual bool larmar() const = 0;
};

class FuktighetsSensor : public Sensor {

public:
    FuktighetsSensor(std::string namn, double startFuktighet) : Sensor(namn, startFuktighet) {};

    bool larmar() const override {
        if (varde < 20.0 || varde > 70.0) {
            return true;
        } return false;
    }
};

int main() {

    FuktighetsSensor f1("Torrt", 10.0);
    FuktighetsSensor f2("Fuktigt", 80.0);
    FuktighetsSensor f3("Normal", 30.0);
    if (f1.larmar()) {
        std::cout << "Torrt larmar\n";
    }
    if (f2.larmar()) {
        std::cout << "Fuktigt larmar\n";
    }
    if (f3.larmar()) {
        std::cout << "Normal larmar\n";
    }

};