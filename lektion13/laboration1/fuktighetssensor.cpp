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
            std::cout << "Namnet på sensorn är " << getNamn() << " och värdet är " << getVarde() << "\n";
        };

};

class FuktighetsSensor : public Sensor{

    public:
        FuktighetsSensor(std::string namn, double startFuktighet):Sensor(namn, 0.0){
            if(startFuktighet > 0.0 && startFuktighet < 100.0){
                varde = startFuktighet;
            } else {
                std::cout << "Ogiltig fuktighet, sätter 0 \n";
                varde = 0.0;
            }
        };

};

int main(void){

    FuktighetsSensor f1 = {"Faulty", 250.0};
    f1.skrivUt();
    FuktighetsSensor f2 = {"Normal", 90.0};
    f2.skrivUt();
}