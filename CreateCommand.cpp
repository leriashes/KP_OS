#include "CreateCommand.h"

bool CreateCommand::Run()
{
	return OSystem::OS()->createPipe(pipeName, pipeType);
}
