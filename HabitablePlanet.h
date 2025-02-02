//
// Created by hande on 2.02.2025.
//

#ifndef HABITABLEPLANET_H
#define HABITABLEPLANET_H

#include <iostream>
#include "Object.h"
#include "Planet.h"
using namespace std;

class HabitablePlanet : public Planet {
public:
    // Default constructor
    HabitablePlanet();

    // Parameterized constructor
    HabitablePlanet(string name, int x, int y, string atmosphereState, Source srcs, float gravity);

    // Destructor
    ~HabitablePlanet();
};



#endif //HABITABLEPLANET_H
