//
// Created by MDand on 2019-10-10.
//

//
// Created by MDand on 2019-10-09.
//

#include <iostream>
#include "bird.hpp"

Bird::Bird(): Animal(0, 0, 0), alt(0) {}

Bird::Bird(int age, double xcoord, double ycoord, double alt)
:Animal(age, xcoord, ycoord), alt(alt) {}

void Bird::move(double xcoord, double ycoord, double alt) {
    locationx = xcoord;
    locationy = ycoord;
    this->alt = alt;
}

Bird::Bird(const Bird& a)
:Animal(a), alt(alt) {}

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
    this->alive = alive;
}

ostream& operator<<(ostream& os, const Bird& a) {
    cout << "Age: " << a.age << endl;
    cout << "ID: " << a.id << endl;
    cout << "Alive: " << a.alive << endl;
    cout << "Location: " << a.locationx << ", " << a.locationy << ", " << a.alt << endl;
}



