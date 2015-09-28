/*
 * AddCommand.h
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */

#ifndef SRC_DESIGNPATTERN_COMMAND_ADDCOMMAND_H_
#define SRC_DESIGNPATTERN_COMMAND_ADDCOMMAND_H_
#include<iostream>
#include<list>
#include"Command.h"
#include"Receiver.h"


class AddCommand : public Command {
private:
	Receiver *receiver;
	int value;
	std::list<Receiver *> commandHistoryList;

public:
	AddCommand(Receiver *receiver, int a);
	virtual ~AddCommand();

	virtual void execute();
	virtual void undo();

	void setValue(int a);
};

#endif /* SRC_DESIGNPATTERN_COMMAND_ADDCOMMAND_H_ */
