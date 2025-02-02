//
// Created by hande on 2.02.2025.
//

#include "Planet.h"
#include "HabitablePlanet.h"


HabitablePlanet::HabitablePlanet(string name,int x,int y,string atmosphereState,Source srcs,float gravity):Planet(name,x,y,atmosphereState,srcs,gravity) {
    cout<<"Parametized constructor HabitablePlanet"<<endl;
}

HabitablePlanet::~HabitablePlanet() {
    cout<<"Destroying HabitablePlanet"<<endl;
}