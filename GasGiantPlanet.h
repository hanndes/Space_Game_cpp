//
// Created by hande on 2.02.2025.
//

#ifndef GASGIANTPLANET_H
#define GASGIANTPLANET_H
#include "Planet.h"


class GasGiantPlanet:public Planet {

public:
    GasGiantPlanet();
    GasGiantPlanet(string name, int x, int y, string atmosphereState,Source srcs,float gravity);
    ~GasGiantPlanet();
};



#endif //GASGIANTPLANET_H
