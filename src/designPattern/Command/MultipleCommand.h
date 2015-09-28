/*
 * Multiple.h
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */

#ifndef SRC_DESIGNPATTERN_COMMAND_MULTIPLECOMMAND_H_
#define SRC_DESIGNPATTERN_COMMAND_MULTIPLECOMMAND_H_
#include<iostream>
#include<list>
#include"Command.h"
#include"Receiver.h"

class MultipleCommand : Command{
private:
	Receiver *receiver;
	int value;
	std::list<Receiver *> commandHistoryList;
public:
	MultipleCommand(Receiver *r, int a);
	virtual ~MultipleCommand();

	virtual void execute();
	virtual void undo();

	void setValue(int a);
};

#endif /* SRC_DESIGNPATTERN_COMMAND_MULTIPLECOMMAND_H_ */
