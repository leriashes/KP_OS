#include "OSystem.h"

int OSystem::getProcessesNumber()
{
    return processes.size();
}

void OSystem::addProcess(Process* proc)
{
    processes.push_back(proc);
}

OSystem* OSystem::instance = NULL;

OSystem* OSystem::OS()
{
    if (instance == 0)
    {
        instance = new OSystem();
    }

    return instance;
}
