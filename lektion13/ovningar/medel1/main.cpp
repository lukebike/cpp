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

class RorelseSensor : public Sensor {
private:
    bool rorelseDetekterad;

public:
    RorelseSensor(std::string namn, double varde) :Sensor(namn, varde) {
        this->rorelseDetekterad = false;
    }

    void trigger() { this->rorelseDetekterad = true; };

    bool const arRorelseDetekterad() { return this->rorelseDetekterad; };
};

int main() {

    RorelseSensor r1 = { "Hello", 23 };

    std::cout << "My name is " << r1.getNamn() << " and my value is " << r1.getVarde() << " and my movement detected is = " << std::boolalpha << r1.arRorelseDetekterad();
    r1.trigger();
    std::cout << "My name is " << r1.getNamn() << " and my value is " << r1.getVarde() << " and my movement detected is = " << std::boolalpha << r1.arRorelseDetekterad();
}