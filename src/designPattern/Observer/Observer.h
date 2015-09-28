/*
 * Observer.h
 *
 *  Created on: Sep 23, 2015
 *      Author: nguyenkhuong
 */

#ifndef SRC_DESIGNPATTERN_OBSERVER_OBSERVER_H_
#define SRC_DESIGNPATTERN_OBSERVER_OBSERVER_H_
#include"Counter.h"

class Observer {

public:
	Observer();
	virtual ~Observer();

	virtual void update() = 0;
};

#endif /* SRC_DESIGNPATTERN_OBSERVER_OBSERVER_H_ */
