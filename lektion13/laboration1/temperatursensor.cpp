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
            std::cout << "Namnet på sensorn är " << getNamn() << " och värdet är " << getVarde() << " och larmvärdet är " << larm();
        }
};

int main(){

    TemperaturSensor s1 = {"Normal", 13.5, 15};
    TemperaturSensor s2 = {"Alarming", 200, 100};
    s1.skrivUt();
    s2.skrivUt();
}