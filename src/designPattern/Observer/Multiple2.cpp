/*
 * Multiple2.cpp
 *
 *  Created on: Sep 23, 2015
 *      Author: nguyenkhuong
 */
#include<iostream>
#include "Multiple2.h"

Multiple2::Multiple2(Counter *c) : counter(c){
	// TODO Auto-generated constructor stub
	counter->attach(this);
	this->value = 0;
}

Multiple2::~Multiple2() {
	// TODO Auto-generated destructor stub
}

int Multiple2::getValue()
{
	return this->value;
}
// override
void Multiple2::update()
{
	std::cout <<"call update" << std::endl;
	this->value = this->counter->getCount() * 2;
}
