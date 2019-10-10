//
// Created by MDand on 2019-10-10.
//


#include <iostream>
#include "canine.hpp"

Canine::Canine(): Animal(0, 0, 0) {
    cout << "canine constructed" << endl;
}

Canine::Canine(int age, double xcoord, double ycoord)
:Animal(age, xcoord, ycoord) {
    cout << "canine constructed" << endl;
}

void Canine::move(double xcoord, double ycoord) {
    Animal::move(xcoord, ycoord);
    cout << "canine moving" << endl;
}

Canine::Canine(const Canine& a)
        :Animal(a) {
    cout << "canine constructed" << endl;
}

Canine::~Canine() {
    cout << "Canine deleted" << endl;
}

void Canine::sleep() {
    cout << "Canine: zzzZZZzzzZZZzzzZZZ woof woof" << endl;
}

void Canine::eat() {
    cout << "Canine: nom nom nom bork" << endl;
}

void Canine::hunt() {
    cout << "Canine: nom nom + murder bork" << endl;
}

void Canine::setAlive(bool alive) {
    Animal::setAlive(alive);
}

ostream& operator<<(ostream& os, const Animal& a) {
    os << "Age: " << a.getAge() << endl;
    os << "ID: " << a.getID() << endl;
    os << "Alive: " << a.isAlive() << endl;
    os << "Location: " << a.getLocationX() << ", " << a.getLocationY() << endl;
    return os;
}



