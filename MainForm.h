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
			this->flowLayoutPanel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel_Main->SuspendLayout();
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
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::AliceBlue;
			this->panel1->Location = System::Drawing::Point(3, 363);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(980, 158);
			this->panel1->TabIndex = 8;
			this->panel1->Visible = false;
			// 
			// flowLayoutPanel8
			// 
			this->flowLayoutPanel8->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel8->Location = System::Drawing::Point(3, 318);
			this->flowLayoutPanel8->Name = L"flowLayoutPanel8";
			this->flowLayoutPanel8->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel8->TabIndex = 7;
			this->flowLayoutPanel8->Visible = false;
			// 
			// flowLayoutPanel7
			// 
			this->flowLayoutPanel7->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel7->Location = System::Drawing::Point(3, 273);
			this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
			this->flowLayoutPanel7->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel7->TabIndex = 6;
			this->flowLayoutPanel7->Visible = false;
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel6->Location = System::Drawing::Point(3, 228);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel6->TabIndex = 5;
			this->flowLayoutPanel6->Visible = false;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel5->Location = System::Drawing::Point(3, 183);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel5->TabIndex = 4;
			this->flowLayoutPanel5->Visible = false;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel4->Location = System::Drawing::Point(3, 138);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel4->TabIndex = 3;
			this->flowLayoutPanel4->Visible = false;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel3->Location = System::Drawing::Point(3, 93);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel3->TabIndex = 2;
			this->flowLayoutPanel3->Visible = false;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 48);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel2->TabIndex = 1;
			this->flowLayoutPanel2->Visible = false;
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
			this->panel_Main->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button_AddProcess_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void flowLayoutPanel1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
