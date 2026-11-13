#include <iostream>
#include <string>

class Sensor {
protected:
    std::string namn;
    double varde;

public:
    Sensor(std::string startNamn, double startVarde)
        : namn(startNamn), varde(startVarde) {
    }

    std::string getNamn() const {
        return namn;
    }
};




class FuktighetsSensor : public Sensor {
private:
    double luftfuktighet;

public:
    FuktighetsSensor(std::string namn, double varde,
        double startFuktighet) :Sensor(namn, varde) {
        luftfuktighet = startFuktighet;
    }

    double getLuftfuktighet() const {
        return luftfuktighet;
    }
};

int main() {}