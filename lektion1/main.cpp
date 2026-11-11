#include <iostream>

int storst(int tal1, int tal2){
    if(tal1 > tal2){
        return tal1;
    } else {
        return tal2;
    }
}

double storst(double tal1, double tal2){
    if(tal1 > tal2){
        return tal1;
    } else {
        return tal2;
    }
}

int main() {
    // int alder = 25;
    // std::cout << "Hej!\n";
    // std::cout << "Aldern ar " << alder << "\n";
    // int tal;
    // std::cout << "Ange ett tal: ";
    // std::cin >> tal;
    // std::cout << "Du skrev " << tal << "\n";
    int tal1 = 1;
    int tal2 = 3;
    double tal3 = 5;
    double tal4 = 2;
    std::cout << "Storst tal i int ar " << storst(tal1, tal2) << "\n";
    std::cout << "Storst tal i double ar " << storst(tal3, tal4) << "\n";
     
    return 0;
}