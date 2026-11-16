#include <iostream>

class Sensor {

protected:
    std::string namn;
    double varde;

public:
    Sensor(std::string startNamn, double startVarde) :namn(startNamn), varde(startVarde) {};
    virtual ~Sensor() {
        std::cout << "Sensor-destruktor for " << this->namn << "\n";
    };

    std::string getNamn() const {
        return this->namn;
    }

    double getVarde() const {
        return this->varde;
    };

    virtual void skrivUt() const {
        std::cout << "My name is " << this->getNamn()
            << " and my value is "
            << this->getVarde()
            << "\n";
    }

    virtual bool larmar() const = 0;
};

class RorelseSensor : public Sensor {
private:
    bool rorelseDetekterad;

public:
    RorelseSensor(std::string namn) : Sensor(namn, 0.0) {
        this->rorelseDetekterad = false;
    };

    void trigger() {
        this->rorelseDetekterad = true;
        varde = 1.0;
    }

    void reset() {
        this->rorelseDetekterad = false;
        varde = 0.0;
    }

    bool larmar() const override {
        return this->rorelseDetekterad;
    }
};

int main() {

    RorelseSensor r1("Test");
    r1.skrivUt();
    r1.larmar();
    r1.skrivUt();
    r1.trigger();
    r1.skrivUt();
    r1.reset();
    r1.skrivUt();
    // Sensor s1("Test", 1.0);
};