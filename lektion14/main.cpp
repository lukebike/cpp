#include <iostream>


class Sensor {
    public: virtual void skriv_ut() = 0;
};

class TemperaturSensor : public Sensor {
    public: void skriv_ut() override {std::cout << "Temp\n";}
};

void visa(Sensor& s) {s.skriv_ut();}
int main(){
    TemperaturSensor t1;
    visa(t1);
    return 0;
}