//
// Created by hande on 2.02.2025.
//

#include "SpaceShuttle.h"
#include "Blackhole.h"
#include "DwarfPlanet.h"
#include "GasGiantPlanet.h"
#include "HabitablePlanet.h"
#include "Planet.h"


SpaceShuttle::SpaceShuttle(int x, int y)
    : Object('U', x, y), fuel(100), sourceCapacity(50), state("On Trip"), srcs(nullptr) {
}

float SpaceShuttle::getFuel() {
    return fuel;
}

void SpaceShuttle::setFuel(float fuel) {
    this->fuel = fuel;
}

Source *SpaceShuttle::getSource() {
    return srcs;
}

void SpaceShuttle::setSource(Source *srcs) {
    this->srcs = srcs;
}

string SpaceShuttle::getState() {
    return state;
}

void SpaceShuttle::setState(string state) {
    this->state = state;
}

void SpaceShuttle::print() {
    cout << "Name" << this->getName();
    cout << "X:" << this->getX();
    cout << "Y:" << this->getY();
    cout << "Fuel: " << this->getFuel();
    cout << "Source Capacity" << this->sourceCapacity;
    cout << "State " << this->getState();
}

bool SpaceShuttle::goToPlanet(Object *gameScene[5][5], int loc[]) {
    cout << "Going to planet..." << endl;
    this->setX(loc[0]);
    this->setY(loc[1]);
    cout << "in Go To Planet" << endl;
    Object *planet = gameScene[loc[0]][loc[1]];
    if (Planet *p = dynamic_cast<Planet *>(planet)) {
        if (HabitablePlanet *habitable = dynamic_cast<HabitablePlanet *>(p)) {
            cout << "HabitablePlanet detected!" << endl;
            this->setFuel(this->getFuel() - habitable->calculateLandingCost());
        } else if (DwarfPlanet *dwarf = dynamic_cast<DwarfPlanet *>(p)) {
            cout << "DwarfPlanet detected!" << endl;
            this->setFuel(this->getFuel() - dwarf->calculateLandingCost());
        } else if (GasGiantPlanet *gasGiant = dynamic_cast<GasGiantPlanet *>(p)) {
            cout << "GasGiantPlanet detected!" << endl;
            this->setFuel(this->getFuel() - gasGiant->calculateLandingCost());
        } else {
            cout << "Unknown Planet type!" << endl;
        }
    } else if (Blackhole *blackhole = dynamic_cast<Blackhole *>(planet)) {
        cout << "Blackhole detected!" << endl;
    } else {
        cout << "Unknown Object type!" << endl;
    }
    gameScene[this->getX()][this->getY()];
    gameScene[(loc[0])][(loc[1])] = this;
    return true;
}

SpaceShuttle::~SpaceShuttle() {
    cout << "Destroying SpaceShuttle" << endl;
}
