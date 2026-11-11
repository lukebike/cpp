#include <iostream>

class Sensor{
    public: 
        double id;
        double value;
        Sensor(double id, double value) {
            value = value;
            id = id;
        };
        Sensor() {id = 0.0; value = 0.0;};
        ~Sensor() {std::cout << "Sensor med id: " << id << " borttagen\n";};
        

    void skriv_ut() { std::cout << value << " - " << id << "\n";};
    };

int main(){

    Sensor s1;
    s1.id = 3;
    s1.value = 4;
    Sensor s2 = {34, 55};
    s1.skriv_ut();
    s2.skriv_ut();

}