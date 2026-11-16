#include <iostream>

class Sensor {
protected:
    std::string namn;

public:
    Sensor(std::string startNamn) : namn(startNamn) {

    }

    virtual ~Sensor() {
        std::cout << "Sensor-destruktor for " << namn << "\n";

    }

};

class TemperaturSensor : public Sensor {
public:
    TemperaturSensor(std::string namn) : Sensor(namn) {

    }

    ~TemperaturSensor() {
        std::cout << "TemperaturSensor-destruktor for " << namn << "\n";

    }

};

int main() {

    Sensor* pekare = new TemperaturSensor("Ugn");
    delete pekare;
}

// Det som ändras är att vi anropar temperatursensorns destruktor också