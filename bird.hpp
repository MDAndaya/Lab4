//
// Created by MDand on 2019-10-10.
//
#include <iostream>
#include "animal.hpp"

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP

#endif //LAB4_BIRD_HPP


using namespace std;

class Bird: public Animal {

private:
    int age;
    int long id;

public:

    static long idcounter;

    bool alive;
    double locationx;
    double locationy;
    double alt;

    // {}Constructors
    Bird();
    Bird(int age = 0, double xcoord = 0, double ycoord = 0, double alt = 0);

    // Move
    virtual void move(double xcoord, double ycoord, double alt);

    // Copy constructor
    Bird(const Bird& bird);

    // Virtual Destructor
    virtual ~Bird();

    // Sleep and eat
    virtual void sleep();
    virtual void eat();

    void setAlive(bool alive);

    // Overloaded insertion operator
    friend ostream& operator<<(ostream& os, const Bird& a);
};
