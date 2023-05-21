#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Process;

class OSystem
{
private:
	static OSystem* instance;
	vector<Process*> processes;

protected:
	OSystem() {}

public:
	static OSystem* OS();
	int getProcessesNumber();
	void addProcess(Process* proc);
	void delProcess(int index);
	~OSystem();
};

