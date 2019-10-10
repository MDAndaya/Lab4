//
// Created by MDand on 2019-10-10.
//

#include "animal.hpp"

#ifndef LAB4_CANINE_HPP
#define LAB4_CANINE_HPP

#endif //LAB4_CANINE_HPP


using namespace std;

class Canine: public Animal {

private:

public:
    // {}Constructors
    Canine();
    Canine(int age = 0, double xcoord = 0, double ycoord = 0);

    // Move
    virtual void move(double xcoord, double ycoord);

    // Copy constructor
    Canine(const Canine& canine);

    // Virtual Destructor
    virtual ~Canine();

    // Sleep and eat and hunt
    virtual void sleep();
    virtual void eat();
    void hunt();

    void setAlive(bool alive);

    // Overloaded insertion operator
    friend ostream& operator<<(ostream& os, const Canine& a);
};
