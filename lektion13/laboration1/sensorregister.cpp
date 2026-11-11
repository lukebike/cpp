#include <iostream>

class Sensor{

    protected:
        std::string namn;
        double varde;

    public:
        Sensor(std::string startNamn, double startVarde):namn(startNamn), varde(startVarde){};

        std::string const getNamn(){return namn;};

        double const getVarde(){return varde;};

        void skrivUt(){
            std::cout << "Namnet på sensorn är " << getNamn() << " och värdet är " << getVarde();
        };

};

class TemperaturSensor : public Sensor{

    private:
        double larmgrans;

    public:
        TemperaturSensor(std::string namn, double varde, double startLarmgrans):Sensor(namn, varde), larmgrans(startLarmgrans){};

        double const getLarmgrans(){return larmgrans;};
        
        bool larm()
        {
            return varde > larmgrans;
        };

        void skrivUt(){
            std::cout << "Namnet på sensorn är " << getNamn() << " och värdet är " << getVarde() << " och larmvärdet är " << larm() << "\n";
        }
};

int hittaHogstaVarde(TemperaturSensor* sensors, int antalSensorer){

    int highestValue = 0;
    for(int i = 0; i < antalSensorer; i++){
        if(sensors[i].getVarde() > sensors[highestValue].getVarde()){
            highestValue = i;
        }
    }
    return highestValue;
}

int main(){
    int overstigerLarmVarde = 0;
    TemperaturSensor sensors[] = {{"Sensor1", 2.0, 10}, {"Sensor2", 50.0, 10}, {"Sensor3", 1.0, 10}, {"Sensor4", 20.0, 10}};
    int antalSensorer = sizeof(sensors) / sizeof(sensors[0]);
    for(int i = 0; i < antalSensorer; i++){
        sensors[i].skrivUt();
        if(sensors[i].larm() == 0){
            overstigerLarmVarde++;
        }
    }
    std::cout << "The index with the highest value is " << hittaHogstaVarde(sensors, antalSensorer) << "\n";
    std::cout << "The amount of sensors with an alarm is " << overstigerLarmVarde << "\n";
}