#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine() : horsepower(0), displacement(0.0) {}

    Engine(int hp, double disp) : horsepower(hp), displacement(disp) {}

    void setHorsepower(int hp) {
        horsepower = hp;
    }

    int getHorsepower() const {
        return horsepower;
    }

    void setDisplacement(double disp) {
        displacement = disp;
    }

    double getDisplacement() const {
        return displacement;
    }
};

#endif
