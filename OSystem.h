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

	int createPipe(int PID, int pipeName, int pipeType);
	int deletePipe(int PID, int pipeName);
};

