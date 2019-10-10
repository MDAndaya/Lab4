//
// Created by MDand on 2019-10-10.
//

//
// Created by MDand on 2019-10-09.
//

#include <iostream>
#include "bird.hpp"

long Bird::idcounter = 'A';
Bird::Bird(): Animal()
        : age(0), id(idcounter++), alive(true), locationx(0), locationy(0)  {}

Bird::Bird(int age, double xcoord, double ycoord)
        : age(age), id(idcounter++), alive(true), locationx(xcoord), locationy(ycoord){}

void Bird::move(double xcoord, double ycoord) {
    locationx = xcoord;
    locationy = ycoord;
}

Bird::Bird(const Bird& a)
        : age(a.age), id(a.id), alive(a.alive), locationx(a.locationx), locationy(a.locationy) {}

Bird::~Bird() {
    cout << "Animal deleted" << endl;
}

void Bird::sleep() {
    cout << "Animal: zzzZZZzzzZZZzzzZZZ" << endl;
}

void Bird::eat() {
    cout << "Animal: nom nom nom" << endl;
}

void Bird::setAlive(bool alive) {
    this->alive = alive;
}

ostream& operator<<(ostream& os, const Bird& a) {
    cout << "Age: " << a.age << endl;
    cout << "ID: " << a.id << endl;
    cout << "Alive: " << a.alive << endl;
    cout << "Location: " << a.locationx << ", " << a.locationy << endl;
}



