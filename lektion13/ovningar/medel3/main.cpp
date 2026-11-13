#include <iostream>

class Sensor {
protected:
    std::string namn;
    double varde;

public:
    Sensor(std::string startNamn, double startVarde)
        : namn(startNamn), varde(startVarde) {
    }

    std::string getNamn() const {
        return namn;
    }

    double getVarde() const {
        return varde;
    }
};

class FuktighetsSensor : public Sensor {

public:
    FuktighetsSensor(std::string namn, double startFuktighet) : Sensor(namn, startFuktighet) {
        if (startFuktighet < 0.0 || startFuktighet > 100.0) {
            varde = 0.0;
        }
    }
};

int main() {

    FuktighetsSensor f1 = { "Hello", 3 };
    FuktighetsSensor f2 = { "Faulty", -2 };
    std::cout << "My name is " << f1.getNamn() << " and my value is " << f1.getVarde();
    std::cout << "My name is " << f2.getNamn() << " and my value is " << f2.getVarde();
}