//
// Created by hande on 2.02.2025.
//

#ifndef PLANET_H
#define PLANET_H

#include <iostream>
#include "Object.h"
#include "Source.h"
#include "SpaceShuttle.h"
using namespace std;

// Abstract class
class Planet : public Object {
    string states[3] = {"Habitable", "Posion", "Dense"};
    string atmosphereState;
    Source *srcs;
    float gravity;

public:
    Planet();

    Planet(char name, int x, int y);

    string getAtmosphereState() const;

    void setAtmosphereState(string state);

    float getGravity() const;

    void setGravity(float gravity);

    Source *getSrcs() const;

    void setSrcs(Source *srcs);

    void print() override;

    virtual float calculateLandingCost() const = 0;

    virtual void goToPlanet(SpaceShuttle * ss) const =0;

    //  virtual void showSources() const;
    virtual ~Planet();
};

#endif //PLANET_H
