//
// Created by hande on 2.02.2025.
//

#include "Planet.h"
#include "HabitablePlanet.h"
#include "Source.h"


#include "HabitablePlanet.h"

HabitablePlanet::HabitablePlanet(string name, int x, int y)
    : Planet(name, x, y) {
}

HabitablePlanet::~HabitablePlanet() {
    cout << "HabitablePlanet destroyed." << endl;
}


HabitablePlanet::~HabitablePlanet() {
    cout<<"Destroying HabitablePlanet"<<endl;
}