//
// Created by Javier Zarate on 10/19/17.
//

#include "Laborer.h"

using namespace std;

void Foreman::setData()
{

    Laborer::setData();
    cout<<"\n Enter Quotas: ";
    cin>> quotas;
}

void Foreman::getData()
{

    Laborer::getData();
    cout<<"\n Quotas: "<<quotas;
}

