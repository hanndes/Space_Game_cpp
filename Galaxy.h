//
// Created by hande on 2.02.2025.
//

#ifndef GALAXY_H
#define GALAXY_H
#include "Planet.h"
#include "HabitablePlanet.h"
#include "SpaceShuttle.h"
#include "GasGiantPlanet.h"
#include "DwarfPlanet.h"


class Galaxy {
Object * gameScene[5][5];
//Planet *planets[3]={new HabitablePlanet(),new GasGiantPlanet(),new DwarfPlanet()};
public:
    void createPlanet(SpaceShuttle*);
    void startingScene();
    void showGalaxy();
    Object* (*getGameScene())[5];
    ~Galaxy();
};




#endif //GALAXY_H
