//
// Created by hande on 2.02.2025.
//

#ifndef GALAXY_H
#define GALAXY_H
#include "Planet.h"
#include "HabitablePlanet.h"
#include "GasGiantPlanet.h"
#include "DwarfPlanet.h"


class Galaxy {
Object * gameScene[5][5];
Planet *planets[3]={new HabitablePlanet(),new GasGiantPlanet(),new DwarfPlanet()};
public:
    void createPlanet();
    void showGalaxy();
    ~Galaxy();
};




#endif //GALAXY_H
