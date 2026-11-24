#include <iostream>
#include <vector>
#include <algorithm>

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

}