/*
 * Receiver.cpp
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */

#include "Receiver.h"

Receiver::Receiver(int val) : value(val) {
	// TODO Auto-generated constructor stub

}

Receiver::~Receiver() {
	// TODO Auto-generated destructor stub
}
void Receiver::clone(Receiver *r)
{
	this->value = r->value;
}
void Receiver::add(int a)
{
	this->value += a;
}

void Receiver::multiple(int a)
{
	this->value *= a;
}

// getValue only for testing
#ifdef PRODUCT_TEST
int Receiver::getValue()
{
	return this->value;
}
#endif
