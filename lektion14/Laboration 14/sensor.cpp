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

int main() {

    // Sensor s1("Test", 1.0);
}