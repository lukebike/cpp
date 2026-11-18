#include <iostream>
#include <string>

class Sensor {
protected:
    std::string namn;
    double varde;

public:
    Sensor(std::string startNamn, double startVarde)
        : namn(startNamn), varde(startVarde) {
    }

    virtual ~Sensor() {
    }

    std::string getNamn() const {
        return namn;
    }

    virtual void skrivUt() const {
        std::cout << namn << ": " << varde << '\n';
    }

    virtual bool larmar() const { return true; }
};

class TemperaturSensor : public Sensor {



public:
    TemperaturSensor(std::string namn, double startVarde) :Sensor(namn, startVarde) {}


    void skrivUt() const override {
        std::cout << namn << ": " << varde << "grader \n";
    }


};

void a(Sensor s) {
    s.skrivUt();
}

void b(Sensor& s) {
    s.skrivUt();
}

void c(Sensor* s) {
    s->skrivUt();
}

int main() {
    TemperaturSensor ugn("Ugn", 220.0);


    a(ugn);
    b(ugn);
    c(&ugn);
}



