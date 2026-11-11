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
};

class TemperaturSensor : public Sensor
{
public:
    TemperaturSensor(std::string namn, double varde)
        : Sensor(namn, varde)
    {
    }

    void skrivUt() const
    {
        std::cout << namn << ": " << varde << "\n";
    }
};