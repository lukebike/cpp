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

class RorelseSensor : public Sensor {
private:
    bool rorelseDetekterad;

public:
    RorelseSensor(std::string namn, double varde, bool detekterad) : Sensor(namn, varde), rorelseDetekterad(detekterad) {};

    bool larmar() const override {
        return this->rorelseDetekterad;
    };
};

int main() {

    RorelseSensor r1("Hello", 20, true);
    RorelseSensor r2("False", 40, false);
    std::cout << std::boolalpha << r1.larmar() << "\n";
    std::cout << std::boolalpha << r2.larmar() << "\n";
}