#include <iostream>

class Bil{
    public: 
        int modellAr;
        int matarstallning;
    
    Bil(int modellAr, int matarstallning){
        modellAr = modellAr;
        matarstallning = matarstallning;
        std::cout << "Bilen fran " << modellAr << " skapad\n";
    };

    Bil(){
        modellAr = 0;
        matarstallning = 0;
    }

    ~Bil(){
        std::cout << "Bilen fran " << modellAr << " skrotas\n";
    }

    void kor(int km){
        matarstallning = matarstallning + km;
    }

    void skrivUt() const {
        std::cout << "Bilen ar fran " << modellAr << " och har kort " << matarstallning << "km.\n";
    }

};

int main(){
    Bil b1;
    b1.modellAr = 2002;
    b1.matarstallning = 30;
    Bil b2;
    b2.modellAr = 2016;
    b2.matarstallning = 50;
    b1.skrivUt();
    b2.skrivUt();
    b1.kor(40);
    b2.kor(50);
    b1.skrivUt();
    b2.skrivUt();
}