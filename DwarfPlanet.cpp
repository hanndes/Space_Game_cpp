//
// Created by hande on 2.02.2025.
//

#include "DwarfPlanet.h"

DwarfPlanet::DwarfPlanet(char name, int x, int y): Planet(name, x, y) {
}

void DwarfPlanet::goToPlanet(SpaceShuttle *ss) const {

}

float DwarfPlanet::calculateLandingCost() const {
    const float baseCost = 2.0f;
    const float fuelCostPerGravity = 0.2f;
    float cost = baseCost + (fuelCostPerGravity * this->getGravity());
    cout << "Landing cost for HabitablePlanet calculated: " << cost << endl;
    return cost;
}

DwarfPlanet::~DwarfPlanet() {
}
