#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

int main() {

    std::map<std::string, std::vector<double>> matningar;
    matningar["Hello"].push_back(30.4);
    matningar["Hello"].push_back(34.2);
    matningar["Hello"].push_back(12.12);
    matningar["Sensorita"].push_back(234.3);
    matningar["Sensorita"].push_back(644.3);
    matningar["Sensorita"].push_back(34.2);
    for (auto& sensor : matningar) {
        std::sort(sensor.second.begin(), sensor.second.end());
        double hogsta = *std::max_element(sensor.second.begin(), sensor.second.end());
        std::cout << sensor.first << ", antal matningar: " << sensor.second.size()
            << ", högsta värde: " << hogsta
            << ", sorterade värden: ";
        for (double varde : sensor.second) {
            std::cout << varde << " - ";
        }
        std::cout << "\n";

    };
    return 0;
}