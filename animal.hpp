//
// Created by MDand on 2019-10-09.
//

#include <ostream>

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#endif //LAB4_ANIMAL_HPP

using namespace std;

class Animal {

private:
    int age;
    int long id;

    static long idcounter;

    bool alive;
    double locationx;
    double locationy;
    double alt = 0;

public:
    // Constructors
    Animal();
    Animal(int age = 0, double xcoord = 0, double ycoord = 0);

    // Move
    virtual void move(double xcoord, double ycoord);

    // Copy constructor
    Animal(const Animal& animal);

    // Virtual Destructor
    virtual ~Animal();

    // Sleep and eat
    virtual void sleep();
    virtual void eat();

    void setAlive(bool alive);

    // Overloaded insertion operator
    friend ostream& operator<<(ostream& os, const Animal& a);

    int getAge() const;

    long getID() const;

    bool isAlive() const;

    double getLocationX() const;

    double getLocationY() const;
};
