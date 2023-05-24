#pragma once
#include "OSystem.h"
#include "Pipe.h"
class Command
{
protected:
	int pipeName;
	int PID;

public:
	Command(int pipe_name);
	virtual int Run() = 0;

	void setProcess(int PID);
	int getProcess();
};

