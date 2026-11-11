#include <iostream>

double fordubbla(double tal){
    return tal = tal * 2;
}

int main(void){
    double bredd, hojd;
    double& tal = hojd;
    std::cout << "Ange bredd: \n";
    std::cin >> bredd;
    std::cout << "Ange hojd: \n";
    std::cin >> hojd;

    std::cout << "Arean ar " << fordubbla(tal);

}