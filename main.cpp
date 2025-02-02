//
// Created by hande on 2.02.2025.
//
#include <iostream>
#include "Galaxy.h"
using namespace std;


int main(){
  Galaxy *galaxy = new Galaxy();
  galaxy->createPlanet();

  delete galaxy;
  return 0;
}