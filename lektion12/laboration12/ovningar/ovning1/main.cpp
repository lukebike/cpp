#include <iostream>

class Larm {

    private:
    int code;
    bool isActivated;

    Larm(int startCode): code(startCode){
        if(startCode > 9999 || startCode < 1000){
            std::cout << "Invalid code, please enter a four digit code.";
            return;
        }
        this->isActivated = false;
    }

    bool aktivera(int angivenKod){
        if(angivenKod == code && !isActivated){
            this->isActivated = true;
            return true;
        }
        return false;
    }

    bool avaktivera(int angivenKod){
        if(angivenKod == code){
            this->isActivated = false;
            return true;
        } return false;
    }

    bool arAktiverat(){return this->isActivated;};
};