//
// Created by hande on 2.02.2025.
//

#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
using namespace std;

class Object {
    char name;
    int x;
    int y;

public:
    Object();
    Object(char name, int x, int y);
    char getName();
    void setName(char name);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    virtual void print()=0;
    virtual ~Object();
};


#endif //OBJECT_H
