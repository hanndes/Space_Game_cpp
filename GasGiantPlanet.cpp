//
// Created by hande on 2.02.2025.
//

#include "Planet.h"
#include "GasGiantPlanet.h"

GasGiantPlanet::GasGiantPlanet() {
}

GasGiantPlanet::GasGiantPlanet(char name, int x, int y): Planet(name, x, y) {
    cout << "GasGiantPlanet constructed" << endl;
}
void GasGiantPlanet::goToPlanet(SpaceShuttle* spaceShuttle)const{}
float GasGiantPlanet::calculateLandingCost() const {
    const float baseCost = 3.0f;
    const float fuelCostPerGravity = 1.5f;
    float cost = baseCost + (fuelCostPerGravity * this->getGravity());
    cout << "Landing cost for HabitablePlanet calculated: " << cost << endl;
    return cost;
}

GasGiantPlanet::~GasGiantPlanet() {
    cout << "Destroying GasGiantPlanet" << endl;
}
