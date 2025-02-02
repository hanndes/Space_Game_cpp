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

Planet::Planet(string name, int x, int y, string atmosphereState, Source srcs, float gravity):name(name),x(x),y(y),atmosphereState(atmosphereState),srcs(srcs),gravity(gravity) {

}


Planet::~Planet() {

}
