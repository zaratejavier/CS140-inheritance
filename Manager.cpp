//
// Created by Javier Zarate on 10/19/17.
//

#include "Manager.h"

void Manager::setData()
{
    Employee::setData();
    cout<<"\n Enter your title: ";
    cin>>title;
    cin.ignore();
    cout<<"\n Enter gold club dues: ";
    cin>>dues;
    Student::setEducation();
}

void Manager::getData()
{
    Employee::getData();
    cout<<"\n Title: "<<title;
    cout<<"\n Golf dues: "<<dues;
    Student::getEducation();

}
