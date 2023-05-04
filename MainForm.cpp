#include "MainForm.h"
#include <Windows.h>
using namespace KPOS;
using namespace System;
[STAThread]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm);

	return 0;
}

System::Void MainForm::button_AddProcess_Click(System::Object^ sender, System::EventArgs^ e) {
	if (OSystem::OS()->getProcessesNumber() == 8)
	{
		button_AddProcess->Enabled = false;
	}
	else
	{
		flowLayoutPanels[OSystem::OS()->getProcessesNumber()]->Visible = true;
		OSystem::OS()->addProcess(new Process());
	}
}