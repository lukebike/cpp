#include <iostream>

class Anslutning {

    public:
        int id;

        Anslutning(int startId){
            this->id = startId;
            std::cout << "Anslutning " << this->id << " oppnad";
        }

        ~Anslutning(){
            std::cout << "Anslutning " << this->id << " stangd";
        }
};

int main(){

    Anslutning anslutning1 = {1};
    
}