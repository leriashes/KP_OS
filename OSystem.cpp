#include "OSystem.h"

int OSystem::getProcessesNumber()
{
    return processes.size();
}

void OSystem::addProcess(Process* proc)
{
    processes.push_back(proc);
}

void OSystem::delProcess(int index)
{
    if (index >= 0 && index < processes.size())
    {
        delete processes[index];

        for (int i = index; i < processes.size() - 1; i++)
        {
            processes[i] = processes[i + 1];
        }

        processes.pop_back();
    }

    return;
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
