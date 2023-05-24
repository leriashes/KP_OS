#pragma once
#include<queue>
class Pipe
{
private:
	int name;
	int type;
	int serverPID;
	//queue<System::String^> text;

public:
	Pipe(int name, int type, int serverPID);
	int getName();
	int getServerPID();
};

