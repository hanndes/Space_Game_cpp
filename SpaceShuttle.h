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
    SpaceShuttle(int,int);
    float getFuel();
    void setFuel(float);
    Source* getSource();
    void setSource(Source*);
    string getState();
    void setState(string);
    bool goToPlanet(Object*[5][5],int[]);
    void print() override;
    void collectSource();
    void improveVehicle();
    ~SpaceShuttle();

    //protected:
    //virtual void print();
};


#endif //SPACESHUTTLE_H
