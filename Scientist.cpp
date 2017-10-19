//
// Created by Javier Zarate on 10/19/17.
//

#include "Scientist.h"

using namespace std;

void Scientist::setData()
{
    Employee::setData();
    cout<<"\n Enter the number of Publications: ";
    cin>>pubs;

}

void Scientist::getData()
{
    Employee::getData();
    cout<<"\n Number of publications: "<<pubs<<endl;
}
