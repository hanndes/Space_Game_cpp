//
// Created by hande on 2.02.2025.
//
#include <iostream>
#include <ctime>
#include "Galaxy.h"
#include "Blackhole.h"
using namespace std;

int planetCounter = 0;
int blackholeCounter = 0;
char *planetName;

void Galaxy::createPlanet(SpaceShuttle *ss) {
    //5x5 matrix
    //creat
    srand(time(NULL));
    int planetAmount = 4 + (rand() % (8 - 4 + 1));
    int blackholeAmount = 2 + (rand() % (5 - 2 + 1));
    planetName = (char *) malloc(planetAmount * sizeof(char));
    bool isShuttlePlaced = false;
    char randomName = 'A';
    while (planetCounter < planetAmount + 1) {
        int randomPlanetType = rand() % 3;
        int x = rand() % 5;
        int y = rand() % 5;
        if (gameScene[x][y] == NULL) {
            switch (randomPlanetType) {
                case 0: gameScene[x][y] = new HabitablePlanet(randomName, x, y);
                    planetName[planetCounter++] = randomName;
                    planetAmount--;
                    break;
                case 1: gameScene[x][y] = new GasGiantPlanet(randomName, x, y);
                    planetName[planetCounter++] = randomName;
                    planetAmount--;
                    break;
                case 2: gameScene[x][y] = new DwarfPlanet(randomName, x, y);
                    planetName[planetCounter++] = randomName;
                    planetAmount--;
                    break;
            }
        }
        randomName++;
    }
    while (blackholeCounter < (blackholeAmount + 1)) {
        int x = rand() % 5;
        int y = rand() % 5;
        if (gameScene[x][y] == NULL) {
            gameScene[x][y] = new Blackhole(x, y);
            blackholeCounter++;
        }
    }
    while (!isShuttlePlaced) {
        int x = rand() % 5; // 0-4 arasında rastgele bir satır
        int y = rand() % 5; // 0-4 arasında rastgele bir sütun
        if (gameScene[x][y] == NULL) {
            gameScene[x][y] = ss;
            ss->setX(x);
            ss->setY(y);
            isShuttlePlaced = true;
        }
    }
}

void Galaxy::startingScene() {
    cout << "=== SPACE GAME ===" << endl;
    cout << "There are " << planetCounter << " planets in the galaxy. Choose your destination and start exploring!" <<
            endl;
    cout << "Galaxy Map:" << endl;
    for (int i = 0; i < planetCounter; i++) {
        cout << "[" << planetName[i] << "] -> Planet " << planetName[i] << endl;
    }
    cout<<"[O] -> Blackhole "<<endl;
    cout<<"Which planet would you like to travel to?";
    cout<<"(";
    for (int i = 0; i < planetCounter; i++) {
        cout << planetName[i] << ", ";
    }
    cout<<")"<<endl;
}


void Galaxy::showGalaxy() {
    cout << "Galaxy Map:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (gameScene[i][j] == nullptr) {
                cout << "[ ] ";
            } else {
                cout << "[" << gameScene[i][j]->getName() << "] ";
            }
        }
        cout << endl;
    }
}

Object* (*Galaxy::getGameScene())[5] {
    return gameScene;
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
