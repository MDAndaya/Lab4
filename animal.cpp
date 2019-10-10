//
// Created by MDand on 2019-10-09.
//

#include <iostream>
#include "animal.hpp"

long Animal::idcounter = 1.0;
Animal::Animal()
: age(0), id(idcounter++), alive(true), locationx(0), locationy(0)  {
    cout << "animal constructed" << endl;
}

Animal::Animal(int age, double xcoord, double ycoord)
: age(age), id(idcounter++), alive(true), locationx(xcoord), locationy(ycoord){
    cout << "animal constructed" << endl;
}

void Animal::move(double xcoord, double ycoord) {
    locationx = xcoord;
    locationy = ycoord;
    cout << "animal moving" << endl;
    cout << "moved to " << locationx << ", " << locationy << ", " << alt << endl;
}

Animal::Animal(const Animal& a)
: age(a.age), id(a.id), alive(a.alive), locationx(a.locationx), locationy(a.locationy) {
    cout << "animal constructed" << endl;
}

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
    os << "Age: " << a.getAge() << endl;
    os << "ID: " << a.getID() << endl;
    os << "Alive: " << a.isAlive() << endl;
    os << "Location: " << a.getLocationX() << ", " << a.getLocationY() << endl;
    return os;
}

int Animal::getAge() const {
    return age;
}

long Animal::getID() const {
    return id;
}

bool Animal::isAlive() const {
    return alive;
}

double Animal::getLocationX() const {
    return locationx;
}

double Animal::getLocationY() const {
    return locationy;
}




