//
// Created by hande on 2.02.2025.
//

#include "SpaceShuttle.h"


SpaceShuttle::SpaceShuttle( int x, int y)
    : Object("U", x, y), fuel(100), sourceCapacity(50), state("On Trip"), srcs(nullptr) {
}

SpaceShuttle::~SpaceShuttle() {
    cout << "Destroying SpaceShuttle" << endl;
}
