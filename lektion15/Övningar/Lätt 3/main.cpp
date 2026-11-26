#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> tal = { 5,2,8,1,9 };
    std::sort(tal.begin(), tal.end());
    for (int t : tal) {
        std::cout << t << " ";
    }
    std::cout << "\n";

    return 0;
}