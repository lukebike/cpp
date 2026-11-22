#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    // std::vector<int> varden;
    // varden.push_back(21);
    // varden.push_back(19);
    // std::cout << varden[1] << "\n";
    // return 0;
    // for (int i = 0; i < 5; i++) {
    //     varden.push_back(i * 10);
    // }
    // std::cout << "Storlek: " << varden.size() << "\n";
    // return 0;
    std::vector<double> values = { 20, 10, 40, 50, 5 };
    // for (int i = 0; i < 5; i++) {
    //     values.push_back(i * 2.5);
    // }
    // for (int i = 0; i < 5; i++) {
    //     std::cout << values.at(i) << "\n";
    // }
    // for (auto it = values.begin(); it != values.end(); it++) {
    //     std::cout << *it << "\n";
    // }
    int sum;
    for (int v : values) {
        std::cout << v << "\n";
        sum += v;
    };
    std::sort(values.begin(), values.end());
    std::cout << sum;

    // auto it = std::find(values.begin(), values.end(), 5);
    // if (it != values.end()) {
    //     std::cout << "Hittade: " << *it << "\n";
    // }
    auto it = std::max_element(values.begin(), values.end());
    std::cout << "Storst: " << *it << "\n";
    return 0;
}