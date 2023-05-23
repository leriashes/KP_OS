#pragma once
#include <vector>
#include "Command.h"
using namespace std;

class Command;

class Process
{
private:
	int ID;
	vector<Command*> program;

public:
	void addCommand(Command* newCommand);
};

