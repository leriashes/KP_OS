#pragma once
#include <cliext/vector>
#include "OSystem.h"
#include "Process.h"

namespace KPOS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			//this->flowLayoutPanels = gcnew cliext::vector<System::Windows::Forms::FlowLayoutPanel^>();
			InitializeComponent();

			this->flowLayoutPanels.push_back(flowLayoutPanel1);
			this->flowLayoutPanels.push_back(flowLayoutPanel2);
			this->flowLayoutPanels.push_back(flowLayoutPanel3);
			this->flowLayoutPanels.push_back(flowLayoutPanel4);
			this->flowLayoutPanels.push_back(flowLayoutPanel5);
			this->flowLayoutPanels.push_back(flowLayoutPanel6);
			this->flowLayoutPanels.push_back(flowLayoutPanel7);
			this->flowLayoutPanels.push_back(flowLayoutPanel8);

			OSystem::OS();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_AddProcess;
	private: System::Windows::Forms::Button^ button_DelProcess;
	private: System::Windows::Forms::Panel^ panel_Main;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel7;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel8;
	private: System::Windows::Forms::Panel^ panel1;
	private: cliext::vector<System::Windows::Forms::FlowLayoutPanel^> flowLayoutPanels;
	private: System::Windows::Forms::Button^ button_write;

	private: System::Windows::Forms::Button^ button_read;

	private: System::Windows::Forms::Button^ button_delPipe;

	private: System::Windows::Forms::Button^ button_addPipe;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox_add;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_addAction;

	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;






	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_AddProcess = (gcnew System::Windows::Forms::Button());
			this->button_DelProcess = (gcnew System::Windows::Forms::Button());
			this->panel_Main = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox_add = (gcnew System::Windows::Forms::GroupBox());
			this->button_addAction = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_addPipe = (gcnew System::Windows::Forms::Button());
			this->button_write = (gcnew System::Windows::Forms::Button());
			this->button_read = (gcnew System::Windows::Forms::Button());
			this->button_delPipe = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel_Main->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox_add->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_AddProcess
			// 
			this->button_AddProcess->Location = System::Drawing::Point(12, 542);
			this->button_AddProcess->Name = L"button_AddProcess";
			this->button_AddProcess->Size = System::Drawing::Size(118, 46);
			this->button_AddProcess->TabIndex = 0;
			this->button_AddProcess->Text = L"Добавить процесс";
			this->button_AddProcess->UseVisualStyleBackColor = true;
			this->button_AddProcess->Click += gcnew System::EventHandler(this, &MainForm::button_AddProcess_Click);
			// 
			// button_DelProcess
			// 
			this->button_DelProcess->Enabled = false;
			this->button_DelProcess->Location = System::Drawing::Point(880, 542);
			this->button_DelProcess->Name = L"button_DelProcess";
			this->button_DelProcess->Size = System::Drawing::Size(118, 46);
			this->button_DelProcess->TabIndex = 1;
			this->button_DelProcess->Text = L"Удалить процесс";
			this->button_DelProcess->UseVisualStyleBackColor = true;
			this->button_DelProcess->Click += gcnew System::EventHandler(this, &MainForm::button_DelProcess_Click);
			// 
			// panel_Main
			// 
			this->panel_Main->BackColor = System::Drawing::Color::Honeydew;
			this->panel_Main->Controls->Add(this->panel1);
			this->panel_Main->Controls->Add(this->flowLayoutPanel8);
			this->panel_Main->Controls->Add(this->flowLayoutPanel7);
			this->panel_Main->Controls->Add(this->flowLayoutPanel6);
			this->panel_Main->Controls->Add(this->flowLayoutPanel5);
			this->panel_Main->Controls->Add(this->flowLayoutPanel4);
			this->panel_Main->Controls->Add(this->flowLayoutPanel3);
			this->panel_Main->Controls->Add(this->flowLayoutPanel2);
			this->panel_Main->Controls->Add(this->flowLayoutPanel1);
			this->panel_Main->Location = System::Drawing::Point(12, 12);
			this->panel_Main->Name = L"panel_Main";
			this->panel_Main->Size = System::Drawing::Size(986, 524);
			this->panel_Main->TabIndex = 2;
			this->panel_Main->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panel_Main_MouseClick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::AliceBlue;
			this->panel1->Controls->Add(this->groupBox_add);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Location = System::Drawing::Point(3, 363);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(980, 158);
			this->panel1->TabIndex = 8;
			this->panel1->Visible = false;
			this->panel1->VisibleChanged += gcnew System::EventHandler(this, &MainForm::panel1_VisibleChanged);
			// 
			// groupBox_add
			// 
			this->groupBox_add->Controls->Add(this->button_addAction);
			this->groupBox_add->Controls->Add(this->radioButton3);
			this->groupBox_add->Controls->Add(this->radioButton2);
			this->groupBox_add->Controls->Add(this->radioButton1);
			this->groupBox_add->Controls->Add(this->label2);
			this->groupBox_add->Controls->Add(this->textBox1);
			this->groupBox_add->Controls->Add(this->label1);
			this->groupBox_add->Location = System::Drawing::Point(390, 3);
			this->groupBox_add->Name = L"groupBox_add";
			this->groupBox_add->Size = System::Drawing::Size(587, 152);
			this->groupBox_add->TabIndex = 5;
			this->groupBox_add->TabStop = false;
			this->groupBox_add->Text = L"Создание канала";
			this->groupBox_add->Visible = false;
			// 
			// button_addAction
			// 
			this->button_addAction->Enabled = false;
			this->button_addAction->Location = System::Drawing::Point(446, 118);
			this->button_addAction->Name = L"button_addAction";
			this->button_addAction->Size = System::Drawing::Size(135, 23);
			this->button_addAction->TabIndex = 4;
			this->button_addAction->Text = L"Добавить";
			this->button_addAction->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(406, 95);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(86, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"дуплексный";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(208, 95);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(172, 17);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"сервер пишет, клиент читает";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(9, 95);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(172, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"сервер читает, клиент пишет";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Тип канала";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(80, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя канала";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_addPipe);
			this->groupBox1->Controls->Add(this->button_write);
			this->groupBox1->Controls->Add(this->button_read);
			this->groupBox1->Controls->Add(this->button_delPipe);
			this->groupBox1->Location = System::Drawing::Point(23, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(316, 83);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавить действие";
			// 
			// button_addPipe
			// 
			this->button_addPipe->Location = System::Drawing::Point(6, 19);
			this->button_addPipe->Name = L"button_addPipe";
			this->button_addPipe->Size = System::Drawing::Size(135, 23);
			this->button_addPipe->TabIndex = 0;
			this->button_addPipe->Text = L"Создать канал";
			this->button_addPipe->UseVisualStyleBackColor = true;
			this->button_addPipe->Click += gcnew System::EventHandler(this, &MainForm::button_addPipe_Click);
			// 
			// button_write
			// 
			this->button_write->Enabled = false;
			this->button_write->Location = System::Drawing::Point(175, 48);
			this->button_write->Name = L"button_write";
			this->button_write->Size = System::Drawing::Size(135, 23);
			this->button_write->TabIndex = 3;
			this->button_write->Text = L"Запись в канал";
			this->button_write->UseVisualStyleBackColor = true;
			// 
			// button_read
			// 
			this->button_read->Enabled = false;
			this->button_read->Location = System::Drawing::Point(175, 19);
			this->button_read->Name = L"button_read";
			this->button_read->Size = System::Drawing::Size(135, 23);
			this->button_read->TabIndex = 2;
			this->button_read->Text = L"Чтение из канала";
			this->button_read->UseVisualStyleBackColor = true;
			// 
			// button_delPipe
			// 
			this->button_delPipe->Enabled = false;
			this->button_delPipe->Location = System::Drawing::Point(6, 48);
			this->button_delPipe->Name = L"button_delPipe";
			this->button_delPipe->Size = System::Drawing::Size(135, 23);
			this->button_delPipe->TabIndex = 1;
			this->button_delPipe->Text = L"Удалить канал";
			this->button_delPipe->UseVisualStyleBackColor = true;
			// 
			// flowLayoutPanel8
			// 
			this->flowLayoutPanel8->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel8->Location = System::Drawing::Point(3, 318);
			this->flowLayoutPanel8->Name = L"flowLayoutPanel8";
			this->flowLayoutPanel8->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel8->TabIndex = 7;
			this->flowLayoutPanel8->Visible = false;
			this->flowLayoutPanel8->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel8_Click);
			// 
			// flowLayoutPanel7
			// 
			this->flowLayoutPanel7->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel7->Location = System::Drawing::Point(3, 273);
			this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
			this->flowLayoutPanel7->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel7->TabIndex = 6;
			this->flowLayoutPanel7->Visible = false;
			this->flowLayoutPanel7->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel7_Click);
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel6->Location = System::Drawing::Point(3, 228);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel6->TabIndex = 5;
			this->flowLayoutPanel6->Visible = false;
			this->flowLayoutPanel6->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel6_Click);
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel5->Location = System::Drawing::Point(3, 183);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel5->TabIndex = 4;
			this->flowLayoutPanel5->Visible = false;
			this->flowLayoutPanel5->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel5_Click);
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel4->Location = System::Drawing::Point(3, 138);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel4->TabIndex = 3;
			this->flowLayoutPanel4->Visible = false;
			this->flowLayoutPanel4->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel4_Click);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel3->Location = System::Drawing::Point(3, 93);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel3->TabIndex = 2;
			this->flowLayoutPanel3->Visible = false;
			this->flowLayoutPanel3->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel3_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 48);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel2->TabIndex = 1;
			this->flowLayoutPanel2->Visible = false;
			this->flowLayoutPanel2->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel2_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Visible = false;
			this->flowLayoutPanel1->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1010, 600);
			this->Controls->Add(this->panel_Main);
			this->Controls->Add(this->button_DelProcess);
			this->Controls->Add(this->button_AddProcess);
			this->Name = L"MainForm";
			this->Text = L"Именованные каналы";
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseClick);
			this->panel_Main->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->groupBox_add->ResumeLayout(false);
			this->groupBox_add->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: 
	int selected_process = -1;
	void selectProcess(int index);
	void unselectProcess();

private: System::Void button_AddProcess_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void flowLayoutPanel1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void flowLayoutPanel2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void flowLayoutPanel3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void flowLayoutPanel4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void flowLayoutPanel5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void flowLayoutPanel6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void flowLayoutPanel7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void flowLayoutPanel8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_DelProcess_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MainForm_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void panel_Main_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void button_addPipe_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void panel1_VisibleChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
