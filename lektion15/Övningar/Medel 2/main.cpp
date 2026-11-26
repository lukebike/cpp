#include <iostream>
#include <algorithm>
#include <vector>

class TemperaturSensor {

protected:
    std::string namn;
    double varde;

public:
    TemperaturSensor(std::string startNamn, double startVarde) :namn(startNamn), varde(startVarde) {};
    virtual ~TemperaturSensor() {
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

};


bool jamforVarde(const TemperaturSensor& a, const TemperaturSensor& b) {
    return a.getVarde() < b.getVarde();
}

int main() {
    std::vector<TemperaturSensor> sensorer;
    sensorer.push_back(TemperaturSensor("Ugn", 220.0));
    sensorer.push_back(TemperaturSensor("Kylskap", 4.0));
    sensorer.push_back(TemperaturSensor("Frys", -18.0));

    std::sort(sensorer.begin(), sensorer.end(), jamforVarde);

    for (const auto& s : sensorer) {
        std::cout << s.getNamn() << ": " << s.getVarde() << "\n";
    }

    return 0;
}