/*
 * Multiple.cpp
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */

#include "MultipleCommand.h"

MultipleCommand::MultipleCommand(Receiver *r, int a) : receiver(r), value(a) {
	// TODO Auto-generated constructor stub
	this->commandHistoryList.push_back(receiver);
}

MultipleCommand::~MultipleCommand() {
	// TODO Auto-generated destructor stub
}

void MultipleCommand::execute()
{
	this->receiver->multiple(value);
	this->commandHistoryList.push_back(receiver);
}
void MultipleCommand::undo()
{
	if(this->commandHistoryList.size() > 0)
	{
		this->commandHistoryList.pop_back();
		Receiver *r = this->commandHistoryList.back();
		this->commandHistoryList.pop_back();
		this->receiver = r;
	}
}

void MultipleCommand::setValue(int a)
{
	this->value = a;
}

