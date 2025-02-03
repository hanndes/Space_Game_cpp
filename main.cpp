//
// Created by hande on 2.02.2025.
//
#include <iostream>
#include "Galaxy.h"
#include "SpaceShuttle.h"
#include <ctime>
#include <cstdlib>
using namespace std;

extern int planetCounter;
extern char *planetName;

int main() {
    srand(time(NULL));
    int loc[2];
    SpaceShuttle *ss = new SpaceShuttle(0, 0);
    Galaxy *galaxy = new Galaxy();
    galaxy->createPlanet(ss);
    galaxy->startingScene();
    while (ss->getFuel() > 0) {
        galaxy->showGalaxy();
        cout << ss->getFuel() << endl;
        cout << "Enter two numbers (X and Y coordinates): ";
        cin >> loc[0] >> loc[1];
        ss->goToPlanet(galaxy->getGameScene(), loc);
    }
    delete ss;
    delete galaxy;
    return 0;
}
