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

class RorelseSensor : public Sensor{

    private:
        bool rorelseDetekterad;
    
    public:
        RorelseSensor(std::string namn):Sensor(namn, 0.0)
        {
            this->rorelseDetekterad = false;
        };

    void trigger()
    {
        this->rorelseDetekterad = true;
        this->varde = 1.0;
    }

    void reset()
    {
        this->rorelseDetekterad = false;
        this->varde = 0.0;
    }

    bool const arRorelseDetekterad()
    {
        return this->rorelseDetekterad;
    }


};

int main(void){

    RorelseSensor r1 = {"Hi"};
    r1.skrivUt();
    r1.trigger();
    r1.skrivUt();
    r1.reset();
    r1.skrivUt();
}