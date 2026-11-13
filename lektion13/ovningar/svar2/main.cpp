#include <iostream>

class Person {
protected:
    std::string namn;
    int personnummer;

public:
    Person(std::string n, int pnr) : namn(n), personnummer(pnr) {
    }

    std::string getNamn() const {
        return namn;
    }
};

class Bankkonto {
private:
    Person agare;
    double saldo;

public:
    Bankkonto(Person agare,
        double startsaldo)
        : agare(agare), saldo(startsaldo) {
    }

    double getSaldo() const {
        return saldo;
    }

    std::string getAgare() const {
        return agare.getNamn();
    }
};

// Vi använder komposition då ett bankkonto är inte en person, ett bankkonto behöver ha en ägare, men inite ett personnummer och ett namn