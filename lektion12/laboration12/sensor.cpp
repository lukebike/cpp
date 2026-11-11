#include <string>
#include <iostream>

class Temperatursensor{
    private:
        std::string namn;
        double temperatur;

    public:
        Temperatursensor(std::string sensornamn, double starttemperatur):namn(sensornamn),temperatur(starttemperatur){}

        const std::string getNamn(){return namn;};
        const double getTemperatur(){return temperatur;};

        bool uppdatera(double nyTemperatur){
            if(nyTemperatur >= -50.0 && nyTemperatur <= 150.0){
                this->temperatur = nyTemperatur;
                return true;
            } else {
                std::cout << "Orimligt värde, ignoreras.\n";
                return false;
            }
        }

        bool larm(){
            if(temperatur >= 100.0){
                return true;
            } else return false;
        }
};

int main(){

    Temperatursensor s1 = {"Sensor 1", 150.0};
    Temperatursensor s2 = {"Sensor 2", -51.0};
    Temperatursensor s3 = {"Sensor 3", 120};
    std::cout << "Temperature of Sensor " << s1.getNamn() << " is " << s1.getTemperatur() << "and alarm is " << s1.larm() << "\n";
    std::cout << "Temperature of Sensor " << s2.getNamn() << " is " << s2.getTemperatur() << "and alarm is " << s2.larm() << "\n";
    std::cout << "Temperature of Sensor " << s3.getNamn() << " is " << s3.getTemperatur() << "and alarm is " << s3.larm() << "\n";
}