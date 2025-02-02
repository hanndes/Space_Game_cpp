//
// Created by hande on 2.02.2025.
//

#include "Blackhole.h"

Blackhole::Blackhole(int x,int y):Object('O',x,y) {
    cout<<"Blackhole constructed"<<endl;

}
void Blackhole::print() {
    cout<<"Name:"<<this->getName()<<endl;
    cout<<"X:"<<this->getX()<<endl;
    cout<<"Y:"<<this->getY()<<endl;
}

Blackhole::~Blackhole() {

}
