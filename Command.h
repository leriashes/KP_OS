#pragma once
#include "OSystem.h"
#include "Pipe.h"
class Command
{
protected:
	int pipeName;
	int processID;

public:
	Command(int pipe_name);
	virtual bool Run() = 0;
};

