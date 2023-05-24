#pragma once
#include "Command.h"
class CreateCommand :
    public Command
{
private:
    int pipeType;

public:
    CreateCommand(int pipeName, int pipeType) :Command(pipeName) { this->pipeType = pipeType; };
    int Run();
};

