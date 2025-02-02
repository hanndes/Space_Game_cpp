//
// Created by hande on 2.02.2025.
//

#include "Planet.h"
#include "GasGiantPlanet.h"

GasGiantPlanet::GasGiantPlanet() {

}
GasGiantPlanet::GasGiantPlanet(char name,int x,int y):Planet(name,x,y) {
    cout<<"GasGiantPlanet constructed"<<endl;

}
float GasGiantPlanet::calculateLandingCost() const {
  //  const float fuelCostPerGravity = 5.0f;
   return 0;
}
GasGiantPlanet::~GasGiantPlanet() {
cout<<"Destroying GasGiantPlanet"<<endl;
}
