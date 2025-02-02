//
// Created by hande on 2.02.2025.
//

#include "SpaceShuttle.h"


SpaceShuttle::SpaceShuttle(int x, int y)
    : Object('U', x, y), fuel(100), sourceCapacity(50), state("On Trip"), srcs(nullptr) {
}

float SpaceShuttle::getFuel() {
    return fuel;
}

void SpaceShuttle::setFuel(float fuel) {
    this->fuel = fuel;
}

Source *SpaceShuttle::getSource() {
    return srcs;
}

void SpaceShuttle::setSource(Source *srcs) {
    this->srcs = srcs;
}

string SpaceShuttle::getState() {
    return state;
}

void SpaceShuttle::setState(string state) {
    this->state = state;
}

void SpaceShuttle::print() {
    cout << "Name" << this->getName();
    cout << "X:" << this->getX();
    cout << "Y:" << this->getY();
    cout << "Fuel: " << this->getFuel();
    cout << "Source Capacity" << this->sourceCapacity;
    cout << "State " << this->getState();
}

bool SpaceShuttle::goToPlanet(Object *gameScene[5][5], int loc[]) {
    cout << "Going to planet..." << endl;
    this->setX(loc[0]);
    this->setY(loc[1]);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (gameScene[i][j] != nullptr) {
                cout << "Object exists at [" << i << "][" << j << "]" << endl;
                cout << "Name: " << gameScene[i][j]->getName() << endl;
            } else {
                cout << "Null object at [" << i << "][" << j << "]" << endl;
            }
        }
    }
    (gameScene[loc[0]][loc[1]])->setName(this->getName());
    return true;
}

SpaceShuttle::~SpaceShuttle() {
    cout << "Destroying SpaceShuttle" << endl;
}
