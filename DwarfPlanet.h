//
// Created by hande on 2.02.2025.
//

#ifndef DWARFPLANET_H
#define DWARFPLANET_H
#include "Planet.h"


class DwarfPlanet : public Planet {
public:
    DwarfPlanet(char name, int x, int y);

    float calculateLandingCost() const override;

    void goToPlanet(SpaceShuttle *ss) const override;

    ~DwarfPlanet();
};


#endif //DWARFPLANET_H
