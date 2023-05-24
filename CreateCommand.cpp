#include "CreateCommand.h"

int CreateCommand::Run()
{
	return OSystem::OS()->createPipe(PID, pipeName, pipeType);
}
