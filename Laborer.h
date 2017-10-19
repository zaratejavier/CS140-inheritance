//
// Created by Javier Zarate on 10/19/17.
//

#ifndef INHERITANCE_LABORER_H
#define INHERITANCE_LABORER_H


#include "cmake-build-debug/Employee.h"

class Laborer : public Employee
{

};
class Foreman: public  Laborer
{
private:
    float quotas;      //Percent of Quotas met
public:
    void setData();
    void getData();

};

#endif //INHERITANCE_LABORER_H
