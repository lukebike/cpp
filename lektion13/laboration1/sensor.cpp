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

int main(void){

    Sensor s1 = {"Hello", 13.5};
    s1.skrivUt();
}