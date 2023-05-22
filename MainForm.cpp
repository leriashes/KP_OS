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
	selected_process = index;
	flowLayoutPanels[index]->BackColor = Color::Aquamarine;
	button_DelProcess->Enabled = true;

	if (actions[selected_process] < 23)
		panel1->Visible = true;
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
	panel1->Visible = false;
	selected_process = -1;
}

System::Void KPOS::MainForm::button_AddProcess_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = OSystem::OS()->getProcessesNumber();
	for (int i = 0; i < 23; i++)
	{
		panels[n * 23 + i]->Visible = false;
	}
	flowLayoutPanels[n]->Visible = true;
	OSystem::OS()->addProcess(new Process());

	if (OSystem::OS()->getProcessesNumber() == 8)
	{
		button_AddProcess->Enabled = false;
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

System::Void KPOS::MainForm::button_DelProcess_Click(System::Object^ sender, System::EventArgs^ e)
{
	OSystem::OS()->delProcess(selected_process);

	if (selected_process < 8)
	{
		//ÄÎËÆÍÎ ÏÅÐÅÄÂÈÃÀÒÜÑß ÑÎÄÅÐÆÈÌÎÅ
		flowLayoutPanels[selected_process]->BackColor = flowLayoutPanels[selected_process + 1]->BackColor;

		for (int i = selected_process; i < 7; i++)
		{
			for (int j = 0; j < actions[i]; j++)
			{
				panels[i * 23 + j]->Visible = false;
			}

			for (int j = 0; j < actions[i + 1]; j++)
			{
				panels[i * 23 + j]->BackColor = panels[i * 23 + 23 + j]->BackColor;
				labels[i * 23 + j]->Text = labels[i * 23 + 23 + j]->Text;
				panels[i * 23 + j]->Visible = panels[i * 23 + 23 + j]->Visible;
			}

			actions[i] = actions[i + 1];
		}
	}
	
	unselectProcess();
	flowLayoutPanels[OSystem::OS()->getProcessesNumber()]->Visible = false;
	button_AddProcess->Enabled = true;
}

System::Void KPOS::MainForm::MainForm_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	unselectProcess();
}

System::Void KPOS::MainForm::panel_Main_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	unselectProcess();
}

System::Void KPOS::MainForm::button_addPipe_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1_VisibleChanged(sender, e);
	groupBox_add->Visible = true;
	maskedTextBox1->Text = L"";
	radioButton1->Select();
}

System::Void KPOS::MainForm::panel1_VisibleChanged(System::Object^ sender, System::EventArgs^ e)
{
	groupBox_add->Visible = false;
	groupBox_del->Visible = false;
	groupBox_read->Visible = false;
	groupBox_write->Visible = false;
}

System::Void KPOS::MainForm::maskedTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	button_addAction->Enabled = (maskedTextBox1->Text != L"");
}

System::Void KPOS::MainForm::button_addAction_Click(System::Object^ sender, System::EventArgs^ e)
{
	int index = selected_process * 23 + actions[selected_process];
	panels[index]->BackColor = Color::YellowGreen;
	labels[index]->Text = maskedTextBox1->Text;
	panels[index]->Visible = true;
	actions[selected_process] += 1;

	panel1_VisibleChanged(sender, e);

	if (actions[selected_process] == 23)
		panel1->Visible = false;
}

System::Void KPOS::MainForm::button_delPipe_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1_VisibleChanged(sender, e);

	groupBox_del->Visible = true;
	maskedTextBox2->Text = L"";
}

System::Void KPOS::MainForm::maskedTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	button_delAction->Enabled = (maskedTextBox2->Text != L"");
}

System::Void KPOS::MainForm::button_delAction_Click(System::Object^ sender, System::EventArgs^ e)
{
	int index = selected_process * 23 + actions[selected_process];
	panels[index]->BackColor = Color::SaddleBrown;
	labels[index]->Text = maskedTextBox2->Text;
	panels[index]->Visible = true;
	actions[selected_process] += 1;

	panel1_VisibleChanged(sender, e);

	if (actions[selected_process] == 23)
		panel1->Visible = false;
}

System::Void KPOS::MainForm::button_read_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1_VisibleChanged(sender, e);
	groupBox_read->Visible = true;
	maskedTextBox3->Text = L"";
}

System::Void KPOS::MainForm::maskedTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	button_readAction->Enabled = (maskedTextBox3->Text != L"");
}

System::Void KPOS::MainForm::button_readAction_Click(System::Object^ sender, System::EventArgs^ e)
{
	int index = selected_process * 23 + actions[selected_process];
	panels[index]->BackColor = Color::LightBlue;
	labels[index]->Text = maskedTextBox3->Text;
	panels[index]->Visible = true;
	actions[selected_process] += 1;

	panel1_VisibleChanged(sender, e);

	if (actions[selected_process] == 23)
		panel1->Visible = false;
}

System::Void KPOS::MainForm::button_write_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1_VisibleChanged(sender, e);
	groupBox_write->Visible = true;
	maskedTextBox4->Text = L"";
}

System::Void KPOS::MainForm::maskedTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	button_writeAction->Enabled = (maskedTextBox4->Text != L"");
}

System::Void KPOS::MainForm::button_writeAction_Click(System::Object^ sender, System::EventArgs^ e)
{
	int index = selected_process * 23 + actions[selected_process];
	panels[index]->BackColor = Color::IndianRed;
	labels[index]->Text = maskedTextBox4->Text;
	panels[index]->Visible = true;
	actions[selected_process] += 1;

	panel1_VisibleChanged(sender, e);

	if (actions[selected_process] == 23)
		panel1->Visible = false;
}

