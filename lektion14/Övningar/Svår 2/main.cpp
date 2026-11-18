#include <iostream>

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
    // TemperaturSensor t("Hello", 30);
    // Sensor* p = &t;

    // p->skrivUt();

    TemperaturSensor t("Test", 40);
    Sensor kopia = t;
    kopia.skrivUt();
}