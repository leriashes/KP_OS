#include "Process.h"

Process::Process(int PID)
{
	ID = PID;
}

void Process::addCommand(Command* newCommand)
{
	program.push_back(newCommand);
}
