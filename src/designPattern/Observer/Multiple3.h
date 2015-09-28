/*
 * Multiple3.h
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */

#ifndef SRC_DESIGNPATTERN_OBSERVER_MULTIPLE3_H_
#define SRC_DESIGNPATTERN_OBSERVER_MULTIPLE3_H_
#include"Counter.h"
class Multiple3 : public Observer{
private:
	Counter *counter;
	int value;
public:
	Multiple3(Counter *c);
	virtual ~Multiple3();

	int getValue();
	virtual void update();
};

#endif /* SRC_DESIGNPATTERN_OBSERVER_MULTIPLE3_H_ */
