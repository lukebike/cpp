#include <iostream>
#include <string>

class Sensor {
protected:
    std::string namn;
    double varde;

public:
    Sensor(std::string startNamn, double startVarde)
        : namn(startNamn), varde(startVarde) {
    }

    virtual void skrivUt() const {
        std::cout << namn << ": " << varde << " (Sensor)\n";

    }

};

class TemperaturSensor : public Sensor {
public:
    TemperaturSensor(std::string namn, double varde)
        : Sensor(namn, varde) {

    }

    void skrivUt() const override {
        std::cout << namn << ": " << varde << " grader\n";

    }

};

int main() {
    TemperaturSensor ugn("Ugn", 220.0);
    Sensor* pekare = &ugn;
    pekare->skrivUt();

    return 0;

}

// Problemet är att c++ är case sensitive, och vi skrev SkrivUt med stort S istället för skrivUt