//
// Created by Javier Zarate on 10/17/17.
//

#include "distance.h"

Distance::Distance(): feet(0), inches(0.0) {}
Distance::Distance(int feet, float inches) : feet(feet), inches(inches){}

int Distance::getFeet() const
{
    return feet;
}

void Distance::setFeet(int feet)
{
    Distance::feet = feet;
}

float Distance::getInches() const
{
    return inches;
}

void Distance::setInches(float inches)
{
    Distance::inches = inches;
}

bool Distance::operator==(const Distance &rhs) const
{
    return feet == rhs.feet &&
           inches == rhs.inches;
}

bool Distance::operator!=(const Distance &rhs) const
{
    return !(rhs == *this);
}

std::ostream &operator<<(std::ostream &os, const Distance &distance)
{
    os << "feet: " << distance.feet << " inches: " << distance.inches;
    return os;
}


Distsign::Distsign()
{
    sign = pos;
}

Distsign::Distsign(int feet, float inches, posneg sign) : Distance(feet, inches), sign(sign) {}

posneg Distsign::getSign() const
{
    return sign;
}

void Distsign::setSign(posneg sign)
{
    Distsign::sign = sign;
}

std::ostream &operator<<(std::ostream &os, const Distsign &distsign) {
    os << static_cast<const Distance &>(distsign) << " sign: " << distsign.sign;
    return os;
}
