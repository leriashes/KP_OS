#include "OSystem.h"

int OSystem::getProcessesNumber()
{
    return processes.size();
}

void OSystem::addProcess()
{
    //processes.push_back(proc);
   processes.push_back(new Process());
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

bool OSystem::createPipe(int pipeName, int pipeType)
{
    int n = pipes.size();
    bool result = true;

    for (int i = 0; i < n && result; i++)
    {
        if (pipes[i]->getName() == pipeName)
        {
            result = false;
        }
    }

    if (result)
    {
        pipes.push_back(new Pipe(pipeName, pipeType));
    }

    return result;
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
