#pragma once
#include <iostream>
#include <vector>
#include "Process.h"
using namespace std;

class Process;
class Pipe;
class Command;

class OSystem
{
private:
	static OSystem* instance;
	vector<Process*> processes;
	vector<Pipe*> pipes;

protected:
	OSystem() {}

public:
	static OSystem* OS();
	int getProcessesNumber();
	void addProcess(vector<Command*> program);
	void delProcess(int PID);
	void stop();

	bool createPipe(int pipeName, int pipeType);
};

