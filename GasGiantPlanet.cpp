//
// Created by hande on 2.02.2025.
//

#include "Planet.h"
#include "GasGiantPlanet.h"

GasGiantPlanet::GasGiantPlanet() {

}
GasGiantPlanet::GasGiantPlanet(string name,int x,int y):Planet(name,x,y) {

}
GasGiantPlanet::~GasGiantPlanet() {
cout<<"Destroying GasGiantPlanet"<<endl;
}
