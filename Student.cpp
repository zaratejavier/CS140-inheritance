//
// Created by Javier Zarate on 10/19/17.
//

#include "Student.h"

using namespace std;

void Student::setEducation()
{
    cout<<"\n Enter name of school or University: ";
    cin>>school;
    cin.ignore();
    cout<<"\n Enter highest Degree earnd: ";
    cout<<" (High school, BS, Master, Ph.D";
    cin>>degree;
    cin.ignore();
}

void Student::getEducation()
{
    cout<<"\n School or University: "<<school;
    cout<<"\n Highest Degree earned: "<<degree;

}
