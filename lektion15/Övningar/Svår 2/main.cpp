#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    std::map<std::string, std::vector<double>> matningar;
    matningar["Ugn"] = { 220.0, 195.0, 210.0 };

    for (auto& par : matningar) {
        std::sort(par.second.begin(), par.second.end());

    }

    for (double v : matningar["Ugn"]) {
        std::cout << v << " ";

    }
    std::cout << "\n";

    return 0;

}