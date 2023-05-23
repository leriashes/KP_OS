#include "Process.h"

void Process::addCommand(Command* newCommand)
{
	program.push_back(newCommand);
}
