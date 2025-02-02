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

float HabitablePlanet::calculateLandingCost() const {
//   const float fuelCostPerGravity = 5.0f;
    return 0;

}

HabitablePlanet::~HabitablePlanet() {
    cout << "HabitablePlanet destroyed." << endl;
}
