//
// Created by hande on 2.02.2025.
//

#include "Planet.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Planet::Planet() {

}

Planet::Planet(string name, int x, int y):Object(name,x,y) {
    srand(time(NULL));
    this->atmosphereState=states[rand()%4];
    this->srcs = new Source();

}


Planet::~Planet() {

}
