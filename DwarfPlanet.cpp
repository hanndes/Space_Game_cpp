//
// Created by hande on 2.02.2025.
//

#include "DwarfPlanet.h"

DwarfPlanet::DwarfPlanet(char name, int x, int y):Planet(name,x,y) {
}


float DwarfPlanet::calculateLandingCost() const {
    return 0;
}

DwarfPlanet::~DwarfPlanet() {
}
