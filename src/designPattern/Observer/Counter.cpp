/*
 * Counter.cpp
 *
 *  Created on: Sep 23, 2015
 *      Author: nguyenkhuong
 */

#include "Counter.h"
#include<iostream>

Counter::Counter(){
	// TODO Auto-generated constructor stub
	this->count = 0;
}

Counter::~Counter() {
	// TODO Auto-generated destructor stub
	observerList.clear();
}

void Counter::setCount(int value)
{
	this->count = value;
	notityTo();
}

int Counter::getCount()
{
	return this->count;
}


void Counter::attach(Observer *observer)
{
	this->observerList.push_back(observer);
}

void Counter::detach(Observer *observer)
{
	this->observerList.remove(observer);
}

void Counter::notityTo()
{
    for(std::list<Observer*>::const_iterator iter = observerList.begin(); iter != observerList.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->update();
        }
    }
}
