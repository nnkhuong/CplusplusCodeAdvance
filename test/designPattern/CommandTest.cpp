/*
 * CommandTest.cpp
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */

#include "CommandTest.h"
#include"Receiver.h"
#include"AddCommand.h"
#include"MultipleCommand.h"

CommandTest::CommandTest() {
	// TODO Auto-generated constructor stub

}

CommandTest::~CommandTest() {
	// TODO Auto-generated destructor stub
}

TEST_F(CommandTest, AddCommandTest)
{
	Receiver *receiver = new Receiver(0);
	AddCommand *addCommand = new AddCommand(receiver, 10);
	addCommand->execute(); // add 10 to Receiver.value
	addCommand->setValue(20);
	addCommand->execute();// add 20 to Receiver.value

	int result = 0;
#ifdef 	PRODUCT_TEST
	result = receiver->getValue();
#endif
	ASSERT_EQ(30, result);

	delete receiver;
	delete addCommand;
}

TEST_F(CommandTest, AddCommandWithUndoTest)
{
	Receiver *receiver = new Receiver(0);
	AddCommand *addCommand = new AddCommand(receiver, 10);
	addCommand->execute(); // add 10 to Receiver.value
	addCommand->setValue(20);
	addCommand->execute();// add 20 to Receiver.value

	int result = 0;
#ifdef 	PRODUCT_TEST
	result = receiver->getValue();
#endif
	ASSERT_EQ(30, result);

	addCommand->undo();
#ifdef 	PRODUCT_TEST
	result = receiver->getValue();
#endif
	ASSERT_EQ(10, result);

	delete receiver;
	delete addCommand;
}


TEST_F(CommandTest, MultipleCommandTest)
{
	Receiver *receiver = new Receiver(1);

	MultipleCommand *multipleCommand = new MultipleCommand(receiver, 10);
	multipleCommand->execute(); // multiple 10 to Receiver.value
	multipleCommand->setValue(20);
	multipleCommand->execute();// multiple 20 to Receiver.value
	// mean: 1 * 10 * 20 = 200
	int result = 0;
#ifdef 	PRODUCT_TEST
	result = receiver->getValue();
#endif
	ASSERT_EQ(200, result);

	delete receiver;
	delete multipleCommand;

}

