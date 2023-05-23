#include "Pipe.h"

Pipe::Pipe(int name, int type)
{
    this->name = name;
    this->type = type;
}

int Pipe::getName()
{
    return name;
}
