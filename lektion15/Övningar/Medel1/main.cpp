#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    std::map<std::string, int> lager;
    lager["Skruv"] = 120;
    lager["Mutter"] = 80;
    lager["Bricka"] = 200;

    // TODO: skriv ut samtliga artiklar (namn och antal), en per
    // rad, i alfabetisk ordning

    for (auto& rad : lager) {

        std::cout << "Name is " << rad.first << " and the value is " << rad.second << "\n";
    };

    // TODO: kontrollera med find() om "Spik" finns i lagret, och
    // skriv ut "Spik finns inte i lagret" om den inte gor det
    auto it = lager.find("Spik");
    if (it != lager.end()) {
        std::cout << it->first << ": " << it->second << "\n";
    }
    else {
        std::cout << "Spik finns inte i lagret\n";
    }
}