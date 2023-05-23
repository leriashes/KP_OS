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

void KPOS::MainForm::checkReady(System::String^ name, System::String^ period, System::String^ number, System::Windows::Forms::Button^ readyButton)
{
	if (name == L"" || period == L"" || number == L"" || System::Int32::Parse(period) > 23 - actions[selected_process] || System::Int32::Parse(period) == 0)
		readyButton->Enabled = false;
	else
		readyButton->Enabled = true;
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

void KPOS::MainForm::addAction(System::Object^ sender, System::EventArgs^ e, System::Drawing::Color color, System::String^ text, int actionType, int code)
{
	int index = selected_process * 23 + actions[selected_process];
	panels[index]->BackColor = color;
	labels[index]->Text = text;
	panels[index]->Visible = true;
	actions[selected_process] += 1;

	panel1_VisibleChanged(sender, e);

	if (actions[selected_process] == 23)
		panel1->Visible = false;

	programms[index]->clear();
	programms[index]->push_back(actionType);
	programms[index]->push_back(System::Int32::Parse(text));
	programms[index]->push_back(code);
}

System::Void KPOS::MainForm::button_AddProcess_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < 23; i++)
	{
		panels[processes_number * 23 + i]->Visible = false;
	}
	flowLayoutPanels[processes_number]->Visible = true;
	processes_number += 1;

	if (processes_number == 8)
	{
		button_AddProcess->Enabled = false;
	}

	button_start->Enabled = true;
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
	processes_number -= 1;

	if (selected_process < 8)
	{
		//ÄÎËÆÍÎ ÏÅÐÅÄÂÈÃÀÒÜÑß ÑÎÄÅÐÆÈÌÎÅ
		flowLayoutPanels[selected_process]->BackColor = flowLayoutPanels[selected_process + 1]->BackColor;

		for (int i = selected_process; i < 7; i++)
		{
			bool state = flowLayoutPanels[i]->Visible;
			flowLayoutPanels[i]->Visible = false;

			for (int j = 0; j < actions[i]; j++)
			{
				panels[i * 23 + j]->Visible = false;
			}

			for (int j = 0; j < actions[i + 1]; j++)
			{
				panels[i * 23 + j]->BackColor = panels[i * 23 + 23 + j]->BackColor;
				labels[i * 23 + j]->Text = labels[i * 23 + 23 + j]->Text;
				panels[i * 23 + j]->Visible = panels[i * 23 + 23 + j]->Visible;

				programms[i * 23 + j]->clear();

				for (int k = 0; k < 3; k++)
				{
					programms[i * 23 + j]->insert(programms[i * 23 + j]->begin(), programms[i * 23 + 23 + j]->back());
					programms[i * 23 + 23 + j]->pop_back();
				}
			}

			actions[i] = actions[i + 1];

			flowLayoutPanels[i]->Visible = state;
		}

		if (processes_number == 0)
			button_start->Enabled = false;

	}
	
	unselectProcess();
	flowLayoutPanels[processes_number]->Visible = false;
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
	int type = 0;

	if (radioButton2->Checked)
		type = 1;
	else if (radioButton3->Checked)
		type = 2;

	addAction(sender, e, Color::YellowGreen, maskedTextBox1->Text, 0, type);
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
	addAction(sender, e, Color::SaddleBrown, maskedTextBox2->Text, 1, 0);
}

System::Void KPOS::MainForm::button_read_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1_VisibleChanged(sender, e);
	groupBox_read->Visible = true;
	maskedTextBox3->Text = L"";
	maskedTextBox8->Text = L"";
	maskedTextBox7->Text = L"";
}

System::Void KPOS::MainForm::maskedTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	checkReady(maskedTextBox3->Text, maskedTextBox8->Text, maskedTextBox7->Text, button_readAction);
}

System::Void KPOS::MainForm::button_readAction_Click(System::Object^ sender, System::EventArgs^ e)
{
	addAction(sender, e, Color::LightBlue, maskedTextBox3->Text, 2, System::Int32::Parse(maskedTextBox7->Text));

	int n = System::Int32::Parse(maskedTextBox8->Text) - 1;

	for (int i = 0; i < n; i++)
	{
		addAction(sender, e, Color::LightBlue, maskedTextBox3->Text, 2, 0);
	}
}

System::Void KPOS::MainForm::button_write_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel1_VisibleChanged(sender, e);
	groupBox_write->Visible = true;
	maskedTextBox4->Text = L"";
	maskedTextBox5->Text = L"";
	maskedTextBox6->Text = L"";
}

System::Void KPOS::MainForm::maskedTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	checkReady(maskedTextBox4->Text, maskedTextBox5->Text, maskedTextBox6->Text, button_writeAction);
}

System::Void KPOS::MainForm::button_writeAction_Click(System::Object^ sender, System::EventArgs^ e)
{
	addAction(sender, e, Color::IndianRed, maskedTextBox4->Text, 3, System::Int32::Parse(maskedTextBox6->Text));

	int n = System::Int32::Parse(maskedTextBox5->Text) - 1;

	for (int i = 0; i < n; i++)
	{
		addAction(sender, e, Color::IndianRed, maskedTextBox4->Text, 3, 0);
	}
}

System::Void KPOS::MainForm::button_start_Click(System::Object^ sender, System::EventArgs^ e)
{
	ModelForm^ p = gcnew ModelForm();
	p->ShowDialog();
}

System::Void KPOS::MainForm::maskedTextBox8_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	checkReady(maskedTextBox3->Text, maskedTextBox8->Text, maskedTextBox7->Text, button_readAction);
}

System::Void KPOS::MainForm::maskedTextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	checkReady(maskedTextBox3->Text, maskedTextBox8->Text, maskedTextBox7->Text, button_readAction);
}

System::Void KPOS::MainForm::maskedTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	checkReady(maskedTextBox4->Text, maskedTextBox5->Text, maskedTextBox6->Text, button_writeAction);
}

System::Void KPOS::MainForm::maskedTextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	checkReady(maskedTextBox4->Text, maskedTextBox5->Text, maskedTextBox6->Text, button_writeAction);
}

