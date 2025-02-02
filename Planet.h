//
// Created by hande on 2.02.2025.
//

#ifndef PLANET_H
#define PLANET_H

#include <iostream>
#include "Object.h"
#include "Source.h"
using namespace std;

// Abstract class
class Planet : public Object {
    protected:
    string states[3] ={"Habitable","Posion","Dense"};
    string atmosphereState;
    Source* srcs;
    float gravity;

public:
    // Constructors
    Planet();

    Planet(string name, int x, int y);

    // Pure virtual function
    virtual double calculateLandingCost() const = 0;

    // Virtual function
    virtual void showSources() const;

    // Virtual destructor
    virtual ~Planet();
};

#endif //PLANET_H
