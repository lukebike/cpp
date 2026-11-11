#include <iostream>

class Rektangel {
    public:
        double bredd = 0.0;
        double hojd = 0.0;

        Rektangel(double bredd, double hojd){
            this->bredd = bredd;
            this->hojd = hojd;
        }


        double area() const {
        return bredd * hojd;
    }
};

int main(){
    Rektangel rektangel1 = {20, 5};
    Rektangel rektangel2 = {30, 40};

    std::cout << "Rektangel 1 area är " << rektangel1.area() << "\n";
    std::cout << "Rektangel 2 area är " << rektangel2.area() << "\n";

    
}