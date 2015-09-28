/*
 * AddCommand.cpp
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */

#include "AddCommand.h"

AddCommand::AddCommand(Receiver *r, int a) : value(a) {
	// TODO Auto-generated constructor stub
	receiver = r;
	commandHistoryList.push_back(this->receiver);
}

AddCommand::~AddCommand() {
	// TODO Auto-generated destructor stub
}

void AddCommand::execute()
{
	this->receiver->add(value);
	Receiver *r = new Receiver(value);
	this->commandHistoryList.push_back(r);
}

void AddCommand::undo()
{
	if(!this->commandHistoryList.empty())
	{
		this->commandHistoryList.pop_back();
		Receiver *r = this->commandHistoryList.back();
		this->receiver->clone(r);
	}
}

void AddCommand::setValue(int a)
{
	value = a;
}
