#include "Pipe.h"

Pipe::Pipe(int name, int type, int serverPID)
{
    this->name = name;
    this->type = type;
    this->serverPID = serverPID;
}

int Pipe::getName()
{
    return name;
}

int Pipe::getServerPID()
{
    return serverPID;
}
