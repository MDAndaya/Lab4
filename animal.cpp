//
// Created by MDand on 2019-10-09.
//

#include <iostream>
#include "animal.hpp"

long Animal::idcounter = 'A';
Animal::Animal()
: age(0), id(idcounter++), alive(true), locationx(0), locationy(0)  {}

Animal::Animal(int age, double xcoord, double ycoord)
: age(age), id(idcounter++), alive(true), locationx(xcoord), locationy(ycoord){}

void Animal::move(double xcoord, double ycoord) {
    locationx = xcoord;
    locationy = ycoord;
}

Animal::Animal(const Animal& a)
: age(a.age), id(a.id), alive(a.alive), locationx(a.locationx), locationy(a.locationy) {}

Animal::~Animal() {
    cout << "Animal deleted" << endl;
}

void Animal::sleep() {
    cout << "Animal: zzzZZZzzzZZZzzzZZZ" << endl;
}

void Animal::eat() {
    cout << "Animal: nom nom nom" << endl;
}

void Animal::setAlive(bool alive) {
    this->alive = alive;
}

ostream& operator<<(ostream& os, const Animal& a) {
    cout << "Age: " << a.age << endl;
    cout << "ID: " << a.id << endl;
    cout << "Alive: " << a.alive << endl;
    cout << "Location: " << a.locationx << ", " << a.locationy << endl;
}



