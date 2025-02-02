//
// Created by hande on 2.02.2025.
//
#include <iostream>
#include <ctime>
#include "Galaxy.h"
#include "Blackhole.h"
#include "SpaceShuttle.h"
using namespace std;

void Galaxy::createPlanet() {
    //5x5 matrix
    //creat
    srand(time(NULL));
    int planetCounter = 4 + (rand() % (8 - 4 + 1));
    int blackholeCounter = 2 + (rand() % (5 - 2 + 1));
    bool isShuttlePlaced = false;
    //Creating planets
    while (planetCounter > 0) {
        int randomPlanetType = rand() % 3; // 0-2 arasında random value
        int x = rand() % 5; // 0-4 arasında rastgele bir satır
        int y = rand() % 5; // 0-4 arasında rastgele bir sütun
        if (gameScene[x][y] == NULL) {
            switch (randomPlanetType) {
                case 0: gameScene[x][y] = new HabitablePlanet();
                    planetCounter--;
                    break;
                case 1: gameScene[x][y] = new GasGiantPlanet();
                    planetCounter--;
                    break;
                case 2: gameScene[x][y] = new DwarfPlanet();
                    planetCounter--;
                    break;
            }
        }
    }
    while (blackholeCounter > 0) {
        int x = rand() % 5; // 0-4 arasında rastgele bir satır
        int y = rand() % 5; // 0-4 arasında rastgele bir sütun
        if (gameScene[x][y] == NULL) {
            gameScene[x][y] = new Blackhole();
            blackholeCounter--;
        }
    }
    while (!isShuttlePlaced) {
        int x = rand() % 5; // 0-4 arasında rastgele bir satır
        int y = rand() % 5; // 0-4 arasında rastgele bir sütun
        gameScene[x][y] = new SpaceShuttle();
    }
}

void Galaxy::showGalaxy() {
}

Galaxy::~Galaxy() {
    // Destructor
    cout << "Galaxy destroyed." << endl;
}


/*  while (planetCounter > 0) {
    int randomPlanetType = rand() % 3; // 0-2 arasında random value
    int x = rand() % 5; // 0-4 arasında rastgele bir satır
    int y = rand() % 5; // 0-4 arasında rastgele bir sütun

    if (gameScene[x][y] == nullptr) { // Hücre boşsa
      if (typeid(*planets[randomPlanetType]) == typeid(HabitablePlanet)) {
        cout << "Adding a HabitablePlanet at (" << x << ", " << y << ")" << endl;
        gameScene[x][y] = new HabitablePlanet();
      } else if (typeid(*planets[randomPlanetType]) == typeid(GasGiantPlanet)) {
        cout << "Adding a GasGiantPlanet at (" << x << ", " << y << ")" << endl;
        gameScene[x][y] = new GasGiantPlanet();
      } else {
        cout << "Adding a DwarfPlanet at (" << x << ", " << y << ")" << endl;
        gameScene[x][y] = new DwarfPlanet();
      }
      planetCounter--; // One planet placed decrease counter
    }
  }
  while (blackholeCounter > 0) {
  }*/
