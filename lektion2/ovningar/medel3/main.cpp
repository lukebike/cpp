#include <iostream>

    class Sensor {
        public:
        int id;

        Sensor(int startId) : id(startId) {
        std::cout << "Sensor " << id << " skapas\n";
 }      

        ~Sensor(){
            std::cout << "Sensor " << id << " forstors\n";
        }

};

int main(){
    Sensor* s = new Sensor(1);
    std::cout << "Sensor " << s->id << " anvands\n";
    delete s;
    return 0;
}