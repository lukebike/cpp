#include <iostream>
#include <algorithm>
#include <string>
int main() {
    std::string namn = "RorelseSensor";
    std::cout << "The length of the name is " << namn.length() << "\n";
    std::cout << "The first 8 chars of the string are " << namn.substr(0, 7) << "\n";
    std::cout << "The position of is " << namn.find("Sensor") << "\n";
    return 0;
};