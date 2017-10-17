//
// Created by Javier Zarate on 10/17/17.
//

#include "counter.h"
/*!
 * Counter: 1 parameter Constructor
 * @param count : initial Counter
 */
Counter::Counter(unsigned int count) : count(count) {}

/*!
 * Counter: Default constructor
 */
Counter::Counter(): count(0){}

/*!
 * getCount : getter for variable
 * @return : current count
 */
unsigned int Counter::getCount() const
{
    return count;
}

/*!
 * setCount : set current count
 * @param count : number to set counter
 */
void Counter::setCount(unsigned int count)
{
    Counter::count = count;
}

/*!
 * ++ operator : increment counter
 * @return : ++ Counter
 */
Counter Counter::operator++()
{
    return Counter(++count);
}

/*!
 * CountDn -- operator
 * @return : Decrements counter
 */
Counter CountDn::operator--() {
    return Counter(--count);
}

/*!
 * countDn default constructor
 */
CountDn::CountDn() : Counter() { }

/*!
 * CountDn  1 parameter constructor
 * @param count : initital counter
 */
CountDn::CountDn(unsigned int count) : Counter(count) {}
