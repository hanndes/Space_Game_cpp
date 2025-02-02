//
// Created by hande on 2.02.2025.
//

#include "Planet.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Planet::Planet() {
}

Planet::Planet(char name, int x, int y): Object(name, x, y) {
    this->atmosphereState = states[rand() % 4];
    this->srcs = new Source();
    cout << "Planet constructed." << endl;
}

void Planet::setSrcs(Source *srcs) {
    this->srcs = srcs;
}

Source *Planet::getSrcs() {
    return this->srcs;
}

void Planet::setGravity(float gravity) {
    this->gravity = gravity;
}

float Planet::getGravity() {
    return this->gravity;
}

void Planet::setAtmosphereState(string state) {
    atmosphereState = state;
}

string Planet::getAtmosphereState() {
    return atmosphereState;
}

void Planet::print() {
    cout << "Planet name: " << this->getName() << endl;
    cout << "X: " << this->getX() << endl;
    cout << "Y: " << this->getY() << endl;
    cout << "AtmosphereState: " << this->getAtmosphereState() << endl;
    cout << "Sources; Water: " << this->getSrcs()->getWater()
            << ", Energy: " << this->getSrcs()->getEnergy()
            << ", Mine: " << this->getSrcs()->getMine() << endl;
}

Planet::~Planet() {
}
