#include "OSystem.h"

int OSystem::getProcessesNumber()
{
    return processes.size();
}

void OSystem::addProcess(vector<Command*> program)
{
   processes.push_back(new Process(processes.size() + 1));

   int n = program.size();
   int index = processes.size() - 1;

   for (int i = 0; i < n; i++)
   {
       processes[index]->addCommand(program[i]);
   }
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

int OSystem::createPipe(int PID, int pipeName, int pipeType)
{
    int n = pipes.size();
    int result = 0;

    for (int i = 0; i < n && result; i++)
    {
        if (pipes[i]->getName() == pipeName)
        {
            result = 1;
        }
    }

    if (result == 0)
    {
        pipes.push_back(new Pipe(pipeName, pipeType, PID));
    }

    return result;
}

int OSystem::deletePipe(int PID, int pipeName)
{
    int result = 2;
    int n = pipes.size();
    int k = -1;

    for (int i = 0; i < n && result == 2; i++)
    {
        if (pipes[i]->getName() == pipeName)
        {
            k = i;
            result = 1;
        }
    }
    
    if (k != -1 && pipes[k]->getServerPID() == PID)
        result = 0;

    if (result == 0)
    {
        delete pipes[k];

        for (int i = k; i < n - 1; i++)
        {
            pipes[i] = pipes[i + 1];
        }

        pipes.pop_back();
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
