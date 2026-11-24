#include <iostream>
#include <vector>
#include <algorithm>

class TemperatureSensor {

public:
    std::string namn;
    double varde;

    TemperatureSensor(std::string startNamn, double startVarde) : namn(startNamn), varde(startVarde) {}

    std::string const getNamn() const { return namn; };
    double const getVarde() const { return varde; }

};

bool jamforVarde(const TemperatureSensor& a, const TemperatureSensor& b) {

    return a.getVarde() < b.getVarde();
}

int main() {

    std::vector<double> matvarden;
    matvarden.push_back(3);
    matvarden.push_back(-2);
    matvarden.push_back(20);
    matvarden.push_back(11);
    matvarden.push_back(-50);
    matvarden.push_back(1);
    for (double value : matvarden) {
        std::cout << value << "\n";
    }
    std::sort(matvarden.begin(), matvarden.end());
    for (double value : matvarden) {
        std::cout << value << "\n";
    }
    std::vector<TemperatureSensor> sensors;
    sensors.push_back({ "Hi", 20 });
    sensors.push_back({ "hey", 40 });
    sensors.push_back({ "thirdo", 4 });
    sensors.push_back({ "fourtho", 90 });
    std::sort(sensors.begin(), sensors.end(), jamforVarde);
    for (auto it = sensors.begin(); it != sensors.end(); it++) {
        std::cout << it->getNamn() << ": " << it->getVarde() << "\n";
    }
}