#include "OSystem.h"

int OSystem::getProcessesNumber()
{
    return processes.size();
}

void OSystem::addProcess()
{
   processes.push_back(new Process(processes.size() + 1));
}

void OSystem::delProcess(int PID)
{
    if (PID > 0 && PID <= processes.size())
    {
        delete processes[PID - 1];

        /*for (int i = PID; i < processes.size() - 1; i++)
        {
            processes[i] = processes[i + 1];
        }

        processes.pop_back();*/
    }

    return;
}

void OSystem::stop()
{
    for (int i = 0; i < processes.size(); i++)
    {
        OSystem::OS()->delProcess(i + 1);
    }

    processes.clear();
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
