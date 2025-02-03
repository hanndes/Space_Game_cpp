//
// Created by hande on 2.02.2025.
//

#ifndef HABITABLEPLANET_H
#define HABITABLEPLANET_H

#include <iostream>
#include "Planet.h"
using namespace std;

class HabitablePlanet : public Planet {
public:
    HabitablePlanet();
    HabitablePlanet(char name, int x, int y);
    ~HabitablePlanet();
    void goToPlanet(SpaceShuttle *ss) const override;
    float calculateLandingCost() const override;
};



#endif //HABITABLEPLANET_H
