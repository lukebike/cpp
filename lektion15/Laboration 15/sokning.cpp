#include <iostream>
#include <vector>
#include <algorithm>

int egenSok(const std::vector<double>& varden, double sokt) {
    for (int i = 0; i < varden.size(); i++) {
        if (varden[i] == sokt) {
            return i;
        }
    }
    return -1;
};

double egenStorsta(const std::vector<double>& varden) {
    double first = varden.at(0);
    for (int i = 0; i < varden.size(); i++) {
        if (varden[i] > first) {
            first = varden[i];
        }
    }
    return first;
}

int main() {

    std::vector<double> values = { 1,4,60,34,20,3 };
    auto num = std::find(values.begin(), values.end(), 34);
    std::cout << *num << "\n";
    std::cout << egenSok(values, 34) << "\n";
    std::cout << "The biggest num is " << egenStorsta(values) << "\n";
    std::cout << "The biggest num " << *std::max_element(values.begin(), values.end());
    return 0;
}