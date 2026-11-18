#include <iostream>

// Den originala. 
// enum class Typ { Temperatur, Rorelse };

// class SensorC {
// public:
//     std::string namn;
//     double varde;
//     Typ typ;

//     SensorC(std::string n, double v, Typ t) : namn(n), varde(v), typ(t) {

//     }

// };

// void skrivUtC(const SensorC& s) {
//     if (s.typ == Typ::Temperatur) {

//         std::cout << s.namn << ": " << s.varde << " grader\n";

//     }
//     else if (s.typ == Typ::Rorelse) {
//         std::cout << s.namn << ": rorelse = " << s.varde << "\n";

//     }

// }



class Sensor {
public:
    std::string namn;
    double varde;


    Sensor(std::string n, double v) : namn(n), varde(v) {

    }
    virtual void skrivUt() const = 0;
};





class TemperatureSensor : public Sensor {

public:
    TemperatureSensor(std::string namn, double startVarde) :Sensor(namn, startVarde) {};
    void skrivUt() const override { std::cout << this->namn << ": " << this->varde << " grader\n"; };
};

class RorelseSensor : public Sensor {
public:
    RorelseSensor(std::string namn, double startVarde) :Sensor(namn, startVarde) {};
    void skrivUt() const override { std::cout << this->namn << ": rorelse = " << this->varde << " \n"; };
};

int main() {
    TemperatureSensor t("TemperatureSensor", 30.4);
    RorelseSensor r("RorelseSensor", 5.4);
    t.skrivUt();
    r.skrivUt();
}