#include <iostream>

class Sensor
{

protected:
    std::string namn;
    double varde;

public:
    Sensor(std::string startNamn, double startVarde) : namn(startNamn), varde(startVarde) {};
    virtual ~Sensor()
    {
        std::cout << "Sensor-destruktor for " << this->namn << "\n";
    };

    std::string getNamn() const
    {
        return this->namn;
    }

    double getVarde() const
    {
        return this->varde;
    };

    virtual void skrivUt() const
    {
        std::cout << "My name is " << this->getNamn()
                  << " and my value is "
                  << this->getVarde()
                  << "\n";
    }

    virtual bool larmar() const = 0;
};

class LjusSensor : public Sensor
{

private:
    double maxLux;

public:
    LjusSensor(std::string namn, double varde, double startMaxLux): Sensor(namn, varde), maxLux(startMaxLux){};

    void skrivUt() const override{
        std::cout << "My name is " << this->getNamn() << " and my value is " << this->getVarde() << " lux \n";
    }

    bool larmar() const override {
        return this->getVarde() > maxLux;
    }
};

int main()
{
    LjusSensor l1("Normal", 3.0, 5.0);
    LjusSensor l2("Faulty", 100, 2.5);
    l1.skrivUt();
    l2.skrivUt();
    if(l1.larmar()){
        std::cout << l1.getNamn() << " is faulty \n";
    }
    if(l2.larmar()){
        std::cout << l2.getNamn() << " is faulty \n";
    }
    // Sensor s1("Test", 1.0);
}