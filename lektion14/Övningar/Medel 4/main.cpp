#include <iostream>

class Sensor {
protected:
    std::string namn;

public:
    Sensor(std::string startNamn) : namn(startNamn) {

    }

    virtual std::string typnamn() const {
        return "Sensor";

    }

};

class TemperaturSensor : public Sensor {
public:
    TemperaturSensor(std::string namn) : Sensor(namn) {

    }

    std::string typnamn() const override {
        return "TemperaturSensor";

    }

};

void skrivTyp(const Sensor* s) {
    std::cout << s->typnamn() << "\n";

}

enum class Sensortyp { Allman, Temperatur };

class SensorB {
protected:
    std::string namn;
    Sensortyp typ;

public:
    SensorB(std::string startNamn, Sensortyp startTyp)



        : namn(startNamn), typ(startTyp) {
    }

    Sensortyp getTyp() const {
        return typ;

    }

};

void skrivTypB(const SensorB* s) {
    if (s->getTyp() == Sensortyp::Temperatur) {
        std::cout << "TemperaturSensor\n";

    }
    else {
        std::cout << "Sensor\n";

    }

}

int main() {
    TemperaturSensor t1("Hi");
    std::cout << t1.typnamn();
    Sensor* pekare = &t1;
    skrivTyp(pekare);
    // skrivTypB(pekare);
}