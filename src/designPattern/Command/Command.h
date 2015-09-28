/*
 * Command.h
 *
 *  Created on: Sep 24, 2015
 *      Author: nguyenkhuong
 */

#ifndef SRC_DESIGNPATTERN_COMMAND_COMMAND_H_
#define SRC_DESIGNPATTERN_COMMAND_COMMAND_H_

class Command {
private:

public:
	Command();
	virtual ~Command();

	virtual void execute() = 0;

	// support undo
	virtual void undo() = 0;
};

#endif /* SRC_DESIGNPATTERN_COMMAND_COMMAND_H_ */
