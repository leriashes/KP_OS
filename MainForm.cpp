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

void KPOS::MainForm::selectProcess(int index)
{
	flowLayoutPanels[index]->BackColor = Color::Aquamarine;
	button_DelProcess->Enabled = true;
}

void KPOS::MainForm::unselectProcess()
{
	for (int i = 0; i < 8; i++)
	{
		if (flowLayoutPanels[i]->BackColor == Color::Aquamarine)
		{
			flowLayoutPanels[i]->BackColor = Color::AliceBlue;
		}
	}

	button_DelProcess->Enabled = false;
}

System::Void KPOS::MainForm::button_AddProcess_Click(System::Object^ sender, System::EventArgs^ e) {
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

System::Void KPOS::MainForm::flowLayoutPanel1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	unselectProcess();
	selectProcess(0);
}

System::Void KPOS::MainForm::flowLayoutPanel2_Click(System::Object^ sender, System::EventArgs^ e)
{
	unselectProcess();
	selectProcess(1);
}

System::Void KPOS::MainForm::flowLayoutPanel3_Click(System::Object^ sender, System::EventArgs^ e)
{
	unselectProcess();
	selectProcess(2);
}

System::Void KPOS::MainForm::flowLayoutPanel4_Click(System::Object^ sender, System::EventArgs^ e)
{
	unselectProcess();
	selectProcess(3);
}

System::Void KPOS::MainForm::flowLayoutPanel5_Click(System::Object^ sender, System::EventArgs^ e)
{
	unselectProcess();
	selectProcess(4);
}

System::Void KPOS::MainForm::flowLayoutPanel6_Click(System::Object^ sender, System::EventArgs^ e)
{
	unselectProcess();
	selectProcess(5);
}

System::Void KPOS::MainForm::flowLayoutPanel7_Click(System::Object^ sender, System::EventArgs^ e)
{
	unselectProcess();
	selectProcess(6);
}

System::Void KPOS::MainForm::flowLayoutPanel8_Click(System::Object^ sender, System::EventArgs^ e)
{
	unselectProcess();
	selectProcess(7);
}
