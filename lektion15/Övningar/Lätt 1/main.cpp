#include <iostream>
#include <vector>

int main() {

    std::vector<int> poang;
    poang.push_back(30);
    poang.push_back(20);
    poang.push_back(10);
    poang.push_back(13);
    poang.push_back(40);
    int sum = 0;
    std::cout << "The size of the array is " << poang.size() << "\n";
    for (int p : poang) {
        sum += p;
    }
    std::cout << "The sum of the numbers is " << sum;
}
