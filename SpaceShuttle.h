//
// Created by hande on 2.02.2025.
//

#ifndef SPACESHUTTLE_H
#define SPACESHUTTLE_H
#include <iostream>
#include "Source.h"
#include "Object.h"
using namespace std;


class SpaceShuttle: public Object {
    float fuel;
    float sourceCapacity;
    string state;
    Source *srcs;

public:
    SpaceShuttle(int x,int y);
    void goToPlanet();
    void collectSource();
    void improveVehicle();
    ~SpaceShuttle();

    //protected:
    //virtual void print();
};


#endif //SPACESHUTTLE_H
