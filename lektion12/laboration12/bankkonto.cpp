#include <string>
#include <iostream>

class Bankkonto {
    private:
        std::string agare;
        double saldo;
    
    public:
        Bankkonto(std::string kontoagare, double startsaldo):agare(kontoagare), saldo(startsaldo){
            if(startsaldo < 0){
                std::cout << "Ogiltigt startsaldo, satter 0";
                this->saldo = 0.0;
            }
        }

        const std::string getAgare(){ return agare;};
        const double getSaldo(){return saldo;};

        void satt_in(double belopp){
            if(belopp > 0){
                this->saldo += belopp;
            } else {
                std::cout << "Belopp kan inte vara negativt, forsok igen";
            }
        }

        bool ta_ut(double belopp){
            if(belopp > 0 && belopp < saldo){
                this->saldo -= belopp;
                return true;
            } else {
                std::cout << "Belopp ar storre an saldo, forsok igen";
                return false;
            }
        }


};

int main(){

    Bankkonto b1 = {"Luke", 13.4};
    Bankkonto b2 = {"Sebbe", 40};
    std::cout << b1.getSaldo() << "\n";
    std::cout << b2.getSaldo() << "\n";
    b1.ta_ut(10);
    std::cout << b1.getSaldo() << "\n";
    return 0;
}