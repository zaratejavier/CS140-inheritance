//
// Created by Javier Zarate on 10/19/17.
//

#ifndef INHERITANCE_SCIENTIST_H
#define INHERITANCE_SCIENTIST_H


#include "cmake-build-debug/Employee.h"

class Scientist: public Employee
{
private:
    int pubs;   //publications
public:
    void setData();
    void getData();

};


#endif //INHERITANCE_SCIENTIST_H
