#pragma once
#include "Command.h"
class DeleteCommand :
    public Command
{
public:
    DeleteCommand(int pipeName) :Command(pipeName) {};
    int Run();
};

