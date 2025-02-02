//
// Created by hande on 2.02.2025.
//

#include "Source.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Source::Source() {
    srand(time(NULL));
    this->water = 5 + rand() % 11;
    this->energy = 10 + rand() % 21;
    this->mine = 1 + rand() % 6;

    cout << "Source created - Water: " << water << ", Energy: " << energy << ", Mine: " << mine << endl;
}


Source::~Source() {
    cout << "Source destroyed." << endl;
}

