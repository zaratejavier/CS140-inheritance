//
// Created by Javier Zarate on 10/19/17.
//

#ifndef INHERITANCE_MANAGER_H
#define INHERITANCE_MANAGER_H

#include "cmake-build-debug/Employee.h"
#include "Student.h"

class Manager : private Employee, private Student
{
private:
    string title;   //"President" etc
    double dues;    //Golf club dues
public:
    void setData();
    void getData();
};


#endif //INHERITANCE_MANAGER_H
