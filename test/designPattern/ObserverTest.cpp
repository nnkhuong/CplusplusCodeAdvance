/*
 * ObserverTest.cpp
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */

#include "ObserverTest.h"

ObserverTest::ObserverTest() {
	// TODO Auto-generated constructor stub

}

ObserverTest::~ObserverTest() {
	// TODO Auto-generated destructor stub
}

TEST_F(ObserverTest, updateTest)
{
	Counter *counter = new Counter();

	// counter subject attached m2 automatically by attach method
	Multiple2 *m2 = new Multiple2(counter);
	// counter subject attached m3 automatically by attach method
	Multiple3 *m3 = new Multiple3(counter);

	// counter set change count value then notify to m2 object and update automatically
	counter->setCount(2);

	// m2,m3 get value after updating
	int value2 = m2->getValue();
	int value3 = m3->getValue();

	int expected2 = 4; // because 2 * 2
	int expected3 = 6; // because 2 * 3

	ASSERT_EQ(expected2, value2);
	ASSERT_EQ(expected3, value3);

	delete m2;
	delete m3;
	delete counter;
}
