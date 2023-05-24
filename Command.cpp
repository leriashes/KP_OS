#include "Command.h"

Command::Command(int pipe_name)
{
	pipeName = pipe_name;
}

void Command::setProcess(int PID)
{
	this->PID = PID;
}

int Command::getProcess()
{
	return PID;
}
