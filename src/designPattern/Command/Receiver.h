/*
 * Receiver.h
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */

#ifndef SRC_DESIGNPATTERN_COMMAND_RECEIVER_H_
#define SRC_DESIGNPATTERN_COMMAND_RECEIVER_H_
#include"Common.h"
/*
 * Receiver is object contains data(value) and actions (add, multiple)
 * the actions will encapsulate within Command execute. This will make data(value)
 * change
 * */

class Receiver {
private:
	int value; //data
public:
	Receiver(int val);
	virtual ~Receiver();
	void clone(Receiver *r);

	//actions
	void add(int a);
	void multiple(int a);

	// getValue only for testing
#ifdef PRODUCT_TEST
	int getValue();
#endif
};

#endif /* SRC_DESIGNPATTERN_COMMAND_RECEIVER_H_ */
