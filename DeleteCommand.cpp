#include "DeleteCommand.h"

int DeleteCommand::Run()
{
    return OSystem::OS()->deletePipe(PID, pipeName);
}
