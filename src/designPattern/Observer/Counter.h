/*
 * Counter.h
 *
 *  Created on: Sep 23, 2015
 *      Author: nguyenkhuong
 */

#ifndef SRC_DESIGNPATTERN_OBSERVER_COUNTER_H_
#define SRC_DESIGNPATTERN_OBSERVER_COUNTER_H_

#include "Subject.h"
#include "Observer.h"
/* Counter is a concrete Subject. It is a center object changing data
 * */
class Counter : public Subject{
private:
	int count;
	std::list<Observer *> observerList;
public:
	Counter();
	virtual ~Counter();

	void setCount(int value);
	int getCount();

	virtual void attach(Observer *observer);
	virtual void detach(Observer *observer);
	virtual void notityTo();

};

#endif /* SRC_DESIGNPATTERN_OBSERVER_COUNTER_H_ */
