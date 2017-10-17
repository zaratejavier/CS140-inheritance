// File: testDistance
// Created by Javier Zarate on 10/17/17 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "distance.h"

using namespace std;

// Constants, struct, classes


// Prototypes


// Main Program Program

int main(void)
{
    Distance d1, d2;
    cout<<d1<<endl;
    d1.setFeet(2);
    d1.setInches(3.5);
    cout<<d1<<endl;

    if(d1!=d2)
    {
        cout<<"Not the same "<<endl;
    }
    Distsign alpha;
    cout<<alpha<<endl;

    cout<<"done"<<endl;
    return 0;
}

// Function Definitions