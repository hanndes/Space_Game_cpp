//
// Created by hande on 2.02.2025.
//

#include "Planet.h"
#include "HabitablePlanet.h"
#include "Source.h"
#include "HabitablePlanet.h"

HabitablePlanet::HabitablePlanet(char name, int x, int y)
    : Planet(name, x, y){
  cout << "HabitablePlanet constructed." << endl;

}
void HabitablePlanet::goToPlanet(SpaceShuttle* spaceShuttle)const{}

float HabitablePlanet::calculateLandingCost() const {
    const float baseCost = 2.0f;
    const float fuelCostPerGravity = 0.5f;
    float cost = baseCost + ( fuelCostPerGravity * this->getGravity());
    cout << "Landing cost for HabitablePlanet calculated: " << cost << endl;
    return cost;
}

HabitablePlanet::~HabitablePlanet() {
    cout << "HabitablePlanet destroyed." << endl;
}
