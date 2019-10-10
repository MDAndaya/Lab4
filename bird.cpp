//
// Created by MDand on 2019-10-10.
//

//
// Created by MDand on 2019-10-09.
//

#include <iostream>
#include "bird.hpp"

Bird::Bird(): Animal(0, 0, 0) {
    cout << "bird constructed" << endl;
}

Bird::Bird(int age, double xcoord, double ycoord, double alt)
:Animal(age, xcoord, ycoord), alt(alt) {
    cout << "bird constructed" << endl;
}

void Bird::move(double xcoord, double ycoord, double alt) {
    Animal::move(xcoord, ycoord);
    this->alt = alt;
    cout << "bird moving" << endl;
}

Bird::Bird(const Bird& a)
:Animal(a), alt(alt) {
    cout << "bird constructed" << endl;
}

Bird::~Bird() {
    cout << "Bird deleted" << endl;
}

void Bird::sleep() {
    cout << "Bird: zzzZZZzzzZZZzzzZZZ chirp chirp" << endl;
}

void Bird::eat() {
    cout << "Bird: nom nom nom kaka" << endl;
}

void Bird::setAlive(bool alive) {
    Animal::setAlive(alive);
}

ostream& operator<<(ostream& os, const Bird& a) {
    os << "Age: " << a.getAge() << endl;
    os << "ID: " << a.getID() << endl;
    os << "Alive: " << a.isAlive() << endl;
    os << "Location: " << a.getLocationX() << ", " << a.getLocationY() << ", " << a.getAlt() << endl;
    return os;
}

double Bird::getAlt() const {
    return alt;
}
