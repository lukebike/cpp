#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main() {
    std::map<std::string, std::vector<int>> studentGrades;
    studentGrades["Michael"].push_back(30);
    studentGrades["Michael"].push_back(23);
    studentGrades["Michael"].push_back(78);
    studentGrades["Joanna"].push_back(34);
    studentGrades["Joanna"].push_back(14);
    studentGrades["Joanna"].push_back(95);
    for (auto& student : studentGrades) {
        int studentSum = 0;
        std::cout << student.first << " is the name " << "and the grades are: ";
        for (auto grade : student.second) {
            studentSum += grade;
            std::cout << grade << " - ";
        }
        std::cout << "\n";
        std::cout << "The average of the grades is " << studentSum / student.second.size() << "\n";
        std::cout << "The highest grade is " << *std::max_element(student.second.begin(), student.second.end());
        studentSum = 0;

        std::cout << "\n";
    }
}