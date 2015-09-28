/*
 * Subject.h
 *
 *  Created on: Sep 23, 2015
 *      Author: nguyenkhuong
 */

#ifndef SRC_DESIGNPATTERN_OBSERVER_SUBJECT_H_
#define SRC_DESIGNPATTERN_OBSERVER_SUBJECT_H_
#include<list>
class Observer; // forwarding of declaration class

/*
 * Subject class is a model data, when its concrete change data then notify
 * to all of concrete Observer, it tells concrete update that change.
 * */
class Subject {

public:
	Subject();
	virtual ~Subject();

	// the keyword virtual signals intent of overriding at concrete class
	virtual void attach(Observer *observer) = 0;
	virtual void detach(Observer *observer) = 0;
	virtual void notityTo() = 0;
};

#endif /* SRC_DESIGNPATTERN_OBSERVER_SUBJECT_H_ */
