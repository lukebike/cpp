// #include <iostream>

// class LjusSensor {
// private:
//     std::string namn;
//     double varde;
//     double maxLux;

// public:
//     LjusSensor(std::string startNamn, double startVarde,
//         double startMax)
//         : namn(startNamn), varde(startVarde), maxLux(startMax) {



//     }

//     std::string getNamn() const {
//         return namn;

//     }

//     double getVarde() const {
//         return varde;

//     }

//     double getMaxLux() const {
//         return maxLux;

//     }

// };

// class LjudSensor {
// private:
//     std::string namn;
//     double varde;
//     double maxDecibel;

// public:
//     LjudSensor(std::string startNamn, double startVarde,
//         double startMax)
//         : namn(startNamn), varde(startVarde),
//         maxDecibel(startMax) {

//     }

//     std::string getNamn() const {
//         return namn;

//     }

//     double getVarde() const {
//         return varde;

//     }

//     double getMaxDecibel() const {
//         return maxDecibel;

//     }

// };

#include <iostream>

class Sensor {

protected:
    std::string namn;
    double varde;

public:


    Sensor(std::string n, double v) : namn(n), varde(v) {}

    std::string getNamn() const {
        return namn;

    }

    double getVarde() const {
        return varde;

    }
};

class LjusSensor : public Sensor {
private:
    double maxLux;

public:
    LjusSensor(std::string startNamn, double startVarde,
        double startMax)
        : Sensor(startNamn, startVarde), maxLux(startMax) {



    }



    double getMaxLux() const {
        return maxLux;

    }

};

class LjudSensor : public Sensor {
private:
    double maxDecibel;

public:
    LjudSensor(std::string startNamn, double startVarde,
        double startMax)
        : Sensor(startNamn, startVarde),
        maxDecibel(startMax) {

    }


    double getMaxDecibel() const {
        return maxDecibel;

    }

};