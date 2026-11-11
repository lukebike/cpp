#include <iostream>

class Sensor
{
protected:
    std::string namn;
    double varde;

public:
    Sensor(std::string startNamn, double startVarde)
        : namn(startNamn), varde(startVarde)
    {
    }

    std::string getNamn() const
    {
        return namn;
    }

    double getVarde() const
    {
        return varde;
    }
};

class TemperaturSensor : public Sensor
{

private:
    double larmgrans;

public:
    TemperaturSensor(std::string namn, double varde, double gransvarde) : Sensor(namn, varde), larmgrans(gransvarde) {}

    double const getLarmgrans() { return this->larmgrans; };

    bool const larm() { return varde > larmgrans; };
};

int main(void)
{
    TemperaturSensor t1 = {"Hello", 12.3, 100};
    TemperaturSensor t2 = {"Faulty", 5, 3};
    std::cout << "My name is " << t1.getNamn() << " and my value is " << t1.getVarde() << " and my alarm value is " << t1.larm() << "\n";
    std::cout << "My name is " << t2.getNamn() << " and my value is " << t2.getVarde() << " and my alarm value is " << t2.larm() << "\n";
};