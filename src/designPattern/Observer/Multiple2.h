/*
 * Multiple2.h
 *
 *  Created on: Sep 23, 2015
 *      Author: nguyenkhuong
 */

#ifndef SRC_DESIGNPATTERN_OBSERVER_MULTIPLE2_H_
#define SRC_DESIGNPATTERN_OBSERVER_MULTIPLE2_H_

#include"Observer.h"
#include"Subject.h"
/*
 * Multiple2 is a concrete Observer
 * */
class Multiple2 : public Observer{
private:
	int value;
	Counter *counter;
public:
	Multiple2(Counter *counter);
	virtual ~Multiple2();

	int getValue();
	// the virtual keyword signals intent of overriding
	virtual void update();
};

#endif /* SRC_DESIGNPATTERN_OBSERVER_MULTIPLE2_H_ */
