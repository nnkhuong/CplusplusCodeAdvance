/*
 * Multiple3.cpp
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */
#include<iostream>
#include "Multiple3.h"

Multiple3::Multiple3(Counter *c) : counter(c) {
	// TODO Auto-generated constructor stub
	this->value = 0;
	counter->attach(this);
}

Multiple3::~Multiple3() {
	// TODO Auto-generated destructor stub
}

int Multiple3::getValue()
{
	return this->value;
}

void Multiple3::update()
{
	this->value = this->counter->getCount() * 3;
}
