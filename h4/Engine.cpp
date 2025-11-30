#include "Engine.h"

Engine::Engine() : horsepower(0), displacement(0.0) {}

Engine::Engine(int hp, double disp) : horsepower(hp), displacement(disp) {}

void Engine::setHorsepower(int hp) {
    horsepower = hp;
}

int Engine::getHorsepower() const {
    return horsepower;
}

void Engine::setDisplacement(double disp) {
    displacement = disp;
}

double Engine::getDisplacement() const {
    return displacement;
}
