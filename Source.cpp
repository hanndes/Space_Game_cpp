//
// Created by hande on 2.02.2025.
//

#include "Source.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Source::Source() {
    this->water = 5 + rand() % 11;
    this->energy = 10 + rand() % 21;
    this->mine = 1 + rand() % 6;

    cout << "Source created - Water: " << water << ", Energy: " << energy << ", Mine: " << mine << endl;
}

float Source::getWater() {
    cout << "Source getWater - Water: " << water << endl;
    return water;
}

float Source::getEnergy() {
    cout << "Source getEnergy()" << energy << endl;
    return energy;
}

float Source::getMine() {
    cout << "Source getMine(): " << mine << endl;
    return mine;
}

void Source::setWater(float water) {
    this->water = water;
}

void Source::setEnergy(float energy) {
    this->energy = energy;
}

void Source::setMine(float mine) {
    this->mine = mine;
}


Source::~Source() {
    cout << "Source destroyed." << endl;
}
