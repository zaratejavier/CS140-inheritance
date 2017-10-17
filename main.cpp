#include <iostream>
#include "counter.h"

using namespace std;

int main()
{
    Counter c1;
    Counter c2(99);
    CountDn c3;

    cout<<"c1 Count is:" <<c1.getCount()<<endl;
    ++c2;
    cout<<"c2 Count is:" <<c2.getCount()<<endl;

    ++c3;
    ++c3;
    --c3;
    cout<<"c3 Count is:" <<c3.getCount()<<endl;
    return 0; 
}