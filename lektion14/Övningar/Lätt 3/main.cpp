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

class TestSensor : public Sensor {

public:
    TestSensor(std::string startNamn, double startVarde) : Sensor(startNamn, startVarde) {};

    bool larmar() const {
        return false;
    }

};

int main() {
    TestSensor s("Allman", 12.3);
    std::cout << s.larmar() << "\n";

    return 0;
}

// Felet är på grund av att vi inte har implementerat larmar funktionen, som gör att klassen blir abstrakt.