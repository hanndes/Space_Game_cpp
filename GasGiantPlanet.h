//
// Created by hande on 2.02.2025.
//

#ifndef GASGIANTPLANET_H
#define GASGIANTPLANET_H
#include "Planet.h"


class GasGiantPlanet : public Planet {
public:
    GasGiantPlanet();
    GasGiantPlanet(char name, int x, int y);
    float calculateLandingCost() const override;
    ~GasGiantPlanet();
};


#endif //GASGIANTPLANET_H
