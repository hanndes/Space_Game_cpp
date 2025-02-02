//
// Created by hande on 2.02.2025.
//

#include "Planet.h"
#include "GasGiantPlanet.h"

GasGiantPlanet::GasGiantPlanet() {

}
GasGiantPlanet::GasGiantPlanet(string name,int x,int y,string atmosphereState,Source srcs,float gravity):Planet(name,x,y,atmosphereState,srcs,gravity) {

}
GasGiantPlanet::~GasGiantPlanet() {
cout<<"Destroying GasGiantPlanet"<<endl;
}
