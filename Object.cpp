//
// Created by hande on 2.02.2025.
//

#include "Object.h"


Object::Object() {
}

Object::Object(char name, int x, int y): name(name), x(x), y(y) {
    cout << "Object constructed." << endl;
}

void Object::setName(char name) {
    this->name = name;
}

char Object::getName() {
    return name;
}

void Object::setX(int x) {
    this->x = x;
}

int Object::getX() {
    return x;
}

void Object::setY(int y) {
    this->y = y;
}

int Object::getY() {
    return y;
}

Object::~Object() {
    cout << "Object destructed." << endl;
}
