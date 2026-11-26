// #include <iostream>

// int hittaIndex(int arr[], int storlek, int sokt) {
//     for (int i = 0; i < storlek; i++) {
//         if (arr[i] == sokt) {
//             return i;

//         }

//     }
//     return -1;

// }

// int main() {
//     int tal[5] = { 12, 45, 7, 89, 23 };
//     int index = hittaIndex(tal, 5, 45);
//     std::cout << index << "\n";

//     return 0;

// }

#include <iostream>
#include <vector>
#include <algorithm>



int main() {
    std::vector<int> nums = { 12,45,7,89,23 };
    auto it = std::find(nums.begin(), nums.end(), 45);
    if (it != nums.end()) {
        std::cout << "Index is " << it - nums.begin();
    }
    else {
        std::cout << "Index is " << -1;
    }

    return 0;
}