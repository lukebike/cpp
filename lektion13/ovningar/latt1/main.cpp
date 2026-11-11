#include <iostream>

class Sensor {
protected:
std::string namn;
double varde;

public:
Sensor(std::string startNamn, double startVarde)
: namn(startNamn), varde(startVarde) {
}

std::string getNamn() const {
return namn;
}

double getVarde() const {
return varde;
}
};

class TemperaturSensor : public Sensor{

    public:
    TemperaturSensor(std::string namn, double varde):Sensor(namn, varde){}
};

int main(void){
    TemperaturSensor t1 = {"Hello", 12.3};
    std::cout << "My name is " << t1.getNamn() << " and my value is " << t1.getVarde();
};