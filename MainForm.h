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

			this->panels.push_back(panel2);
			this->panels.push_back(panel3);
			this->panels.push_back(panel4);
			this->panels.push_back(panel5);
			this->panels.push_back(panel6);
			this->panels.push_back(panel7);
			this->panels.push_back(panel8);
			this->panels.push_back(panel9);
			this->panels.push_back(panel10);
			this->panels.push_back(panel11);
			this->panels.push_back(panel12);
			this->panels.push_back(panel13);
			this->panels.push_back(panel14);
			this->panels.push_back(panel15);
			this->panels.push_back(panel16);
			this->panels.push_back(panel17);
			this->panels.push_back(panel18);
			this->panels.push_back(panel19);
			this->panels.push_back(panel20);
			this->panels.push_back(panel21);
			this->panels.push_back(panel22);
			this->panels.push_back(panel23);
			this->panels.push_back(panel24);

			this->panels.push_back(panel25);
			this->panels.push_back(panel26);
			this->panels.push_back(panel27);
			this->panels.push_back(panel28);
			this->panels.push_back(panel29);
			this->panels.push_back(panel30);
			this->panels.push_back(panel31);
			this->panels.push_back(panel32);
			this->panels.push_back(panel33);
			this->panels.push_back(panel34);
			this->panels.push_back(panel35);
			this->panels.push_back(panel36);
			this->panels.push_back(panel37);
			this->panels.push_back(panel38);
			this->panels.push_back(panel39);
			this->panels.push_back(panel40);
			this->panels.push_back(panel41);
			this->panels.push_back(panel42);
			this->panels.push_back(panel43);
			this->panels.push_back(panel44);
			this->panels.push_back(panel45);
			this->panels.push_back(panel46);
			this->panels.push_back(panel47);

			this->panels.push_back(panel48);
			this->panels.push_back(panel49);
			this->panels.push_back(panel50);
			this->panels.push_back(panel51);
			this->panels.push_back(panel52);
			this->panels.push_back(panel53);
			this->panels.push_back(panel54);
			this->panels.push_back(panel55);
			this->panels.push_back(panel56);
			this->panels.push_back(panel57);
			this->panels.push_back(panel58);
			this->panels.push_back(panel59);
			this->panels.push_back(panel60);
			this->panels.push_back(panel61);
			this->panels.push_back(panel62);
			this->panels.push_back(panel63);
			this->panels.push_back(panel64);
			this->panels.push_back(panel65);
			this->panels.push_back(panel66);
			this->panels.push_back(panel67);
			this->panels.push_back(panel68);
			this->panels.push_back(panel69);
			this->panels.push_back(panel70);

			this->panels.push_back(panel71);
			this->panels.push_back(panel72);
			this->panels.push_back(panel73);
			this->panels.push_back(panel74);
			this->panels.push_back(panel75);
			this->panels.push_back(panel76);
			this->panels.push_back(panel77);
			this->panels.push_back(panel78);
			this->panels.push_back(panel79);
			this->panels.push_back(panel80);
			this->panels.push_back(panel81);
			this->panels.push_back(panel82);
			this->panels.push_back(panel83);
			this->panels.push_back(panel84);
			this->panels.push_back(panel85);
			this->panels.push_back(panel86);
			this->panels.push_back(panel87);
			this->panels.push_back(panel88);
			this->panels.push_back(panel89);
			this->panels.push_back(panel90);
			this->panels.push_back(panel91);
			this->panels.push_back(panel92);
			this->panels.push_back(panel93);

			this->panels.push_back(panel94);
			this->panels.push_back(panel95);
			this->panels.push_back(panel96);
			this->panels.push_back(panel97);
			this->panels.push_back(panel98);
			this->panels.push_back(panel99);
			this->panels.push_back(panel100);
			this->panels.push_back(panel101);
			this->panels.push_back(panel102);
			this->panels.push_back(panel103);
			this->panels.push_back(panel104);
			this->panels.push_back(panel105);
			this->panels.push_back(panel106);
			this->panels.push_back(panel107);
			this->panels.push_back(panel108);
			this->panels.push_back(panel109);
			this->panels.push_back(panel110);
			this->panels.push_back(panel111);
			this->panels.push_back(panel112);
			this->panels.push_back(panel113);
			this->panels.push_back(panel114);
			this->panels.push_back(panel115);
			this->panels.push_back(panel116);

			this->panels.push_back(panel117);
			this->panels.push_back(panel118);
			this->panels.push_back(panel119);
			this->panels.push_back(panel120);
			this->panels.push_back(panel121);
			this->panels.push_back(panel122);
			this->panels.push_back(panel123);
			this->panels.push_back(panel124);
			this->panels.push_back(panel125);
			this->panels.push_back(panel126);
			this->panels.push_back(panel127);
			this->panels.push_back(panel128);
			this->panels.push_back(panel129);
			this->panels.push_back(panel130);
			this->panels.push_back(panel131);
			this->panels.push_back(panel132);
			this->panels.push_back(panel133);
			this->panels.push_back(panel134);
			this->panels.push_back(panel135);
			this->panels.push_back(panel136);
			this->panels.push_back(panel137);
			this->panels.push_back(panel138);
			this->panels.push_back(panel139);

			this->panels.push_back(panel140);
			this->panels.push_back(panel141);
			this->panels.push_back(panel142);
			this->panels.push_back(panel143);
			this->panels.push_back(panel144);
			this->panels.push_back(panel145);
			this->panels.push_back(panel146);
			this->panels.push_back(panel147);
			this->panels.push_back(panel148);
			this->panels.push_back(panel149);
			this->panels.push_back(panel150);
			this->panels.push_back(panel151);
			this->panels.push_back(panel152);
			this->panels.push_back(panel153);
			this->panels.push_back(panel154);
			this->panels.push_back(panel155);
			this->panels.push_back(panel156);
			this->panels.push_back(panel157);
			this->panels.push_back(panel158);
			this->panels.push_back(panel159);
			this->panels.push_back(panel160);
			this->panels.push_back(panel161);
			this->panels.push_back(panel162);

			this->panels.push_back(panel163);
			this->panels.push_back(panel164);
			this->panels.push_back(panel165);
			this->panels.push_back(panel166);
			this->panels.push_back(panel167);
			this->panels.push_back(panel168);
			this->panels.push_back(panel169);
			this->panels.push_back(panel170);
			this->panels.push_back(panel171);
			this->panels.push_back(panel172);
			this->panels.push_back(panel173);
			this->panels.push_back(panel174);
			this->panels.push_back(panel175);
			this->panels.push_back(panel176);
			this->panels.push_back(panel177);
			this->panels.push_back(panel178);
			this->panels.push_back(panel179);
			this->panels.push_back(panel180);
			this->panels.push_back(panel181);
			this->panels.push_back(panel182);
			this->panels.push_back(panel183);
			this->panels.push_back(panel184);
			this->panels.push_back(panel185);
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
	private: cliext::vector<System::Windows::Forms::Panel^> panels;
	private: System::Windows::Forms::Button^ button_write;

	private: System::Windows::Forms::Button^ button_read;

	private: System::Windows::Forms::Button^ button_delPipe;

	private: System::Windows::Forms::Button^ button_addPipe;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox_add;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_addAction;

	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel163;
	private: System::Windows::Forms::Panel^ panel164;
	private: System::Windows::Forms::Panel^ panel165;
	private: System::Windows::Forms::Panel^ panel166;
	private: System::Windows::Forms::Panel^ panel167;
	private: System::Windows::Forms::Panel^ panel168;
	private: System::Windows::Forms::Panel^ panel169;
	private: System::Windows::Forms::Panel^ panel170;
	private: System::Windows::Forms::Panel^ panel171;
	private: System::Windows::Forms::Panel^ panel172;
	private: System::Windows::Forms::Panel^ panel173;
	private: System::Windows::Forms::Panel^ panel174;
	private: System::Windows::Forms::Panel^ panel175;
	private: System::Windows::Forms::Panel^ panel176;
	private: System::Windows::Forms::Panel^ panel177;
	private: System::Windows::Forms::Panel^ panel178;
	private: System::Windows::Forms::Panel^ panel179;
	private: System::Windows::Forms::Panel^ panel180;
	private: System::Windows::Forms::Panel^ panel181;
	private: System::Windows::Forms::Panel^ panel182;
	private: System::Windows::Forms::Panel^ panel183;
	private: System::Windows::Forms::Panel^ panel184;
	private: System::Windows::Forms::Panel^ panel185;
	private: System::Windows::Forms::Panel^ panel140;
	private: System::Windows::Forms::Panel^ panel141;
	private: System::Windows::Forms::Panel^ panel142;
	private: System::Windows::Forms::Panel^ panel143;
	private: System::Windows::Forms::Panel^ panel144;
	private: System::Windows::Forms::Panel^ panel145;
	private: System::Windows::Forms::Panel^ panel146;
	private: System::Windows::Forms::Panel^ panel147;
	private: System::Windows::Forms::Panel^ panel148;
	private: System::Windows::Forms::Panel^ panel149;
	private: System::Windows::Forms::Panel^ panel150;
	private: System::Windows::Forms::Panel^ panel151;
	private: System::Windows::Forms::Panel^ panel152;
	private: System::Windows::Forms::Panel^ panel153;
	private: System::Windows::Forms::Panel^ panel154;
	private: System::Windows::Forms::Panel^ panel155;
	private: System::Windows::Forms::Panel^ panel156;
	private: System::Windows::Forms::Panel^ panel157;
	private: System::Windows::Forms::Panel^ panel158;
	private: System::Windows::Forms::Panel^ panel159;
	private: System::Windows::Forms::Panel^ panel160;
	private: System::Windows::Forms::Panel^ panel161;
	private: System::Windows::Forms::Panel^ panel162;
	private: System::Windows::Forms::Panel^ panel117;
	private: System::Windows::Forms::Panel^ panel118;
	private: System::Windows::Forms::Panel^ panel119;
	private: System::Windows::Forms::Panel^ panel120;
	private: System::Windows::Forms::Panel^ panel121;
	private: System::Windows::Forms::Panel^ panel122;
	private: System::Windows::Forms::Panel^ panel123;
	private: System::Windows::Forms::Panel^ panel124;
	private: System::Windows::Forms::Panel^ panel125;
	private: System::Windows::Forms::Panel^ panel126;
	private: System::Windows::Forms::Panel^ panel127;
	private: System::Windows::Forms::Panel^ panel128;
	private: System::Windows::Forms::Panel^ panel129;
	private: System::Windows::Forms::Panel^ panel130;
	private: System::Windows::Forms::Panel^ panel131;
	private: System::Windows::Forms::Panel^ panel132;
	private: System::Windows::Forms::Panel^ panel133;
	private: System::Windows::Forms::Panel^ panel134;
	private: System::Windows::Forms::Panel^ panel135;
	private: System::Windows::Forms::Panel^ panel136;
	private: System::Windows::Forms::Panel^ panel137;
	private: System::Windows::Forms::Panel^ panel138;
	private: System::Windows::Forms::Panel^ panel139;
	private: System::Windows::Forms::Panel^ panel94;
	private: System::Windows::Forms::Panel^ panel95;
	private: System::Windows::Forms::Panel^ panel96;
	private: System::Windows::Forms::Panel^ panel97;
	private: System::Windows::Forms::Panel^ panel98;
	private: System::Windows::Forms::Panel^ panel99;
	private: System::Windows::Forms::Panel^ panel100;
	private: System::Windows::Forms::Panel^ panel101;
	private: System::Windows::Forms::Panel^ panel102;
	private: System::Windows::Forms::Panel^ panel103;
	private: System::Windows::Forms::Panel^ panel104;
	private: System::Windows::Forms::Panel^ panel105;
	private: System::Windows::Forms::Panel^ panel106;
	private: System::Windows::Forms::Panel^ panel107;
	private: System::Windows::Forms::Panel^ panel108;
	private: System::Windows::Forms::Panel^ panel109;
	private: System::Windows::Forms::Panel^ panel110;
	private: System::Windows::Forms::Panel^ panel111;
	private: System::Windows::Forms::Panel^ panel112;
	private: System::Windows::Forms::Panel^ panel113;
	private: System::Windows::Forms::Panel^ panel114;
	private: System::Windows::Forms::Panel^ panel115;
	private: System::Windows::Forms::Panel^ panel116;
	private: System::Windows::Forms::Panel^ panel71;
	private: System::Windows::Forms::Panel^ panel72;
	private: System::Windows::Forms::Panel^ panel73;
	private: System::Windows::Forms::Panel^ panel74;
	private: System::Windows::Forms::Panel^ panel75;
	private: System::Windows::Forms::Panel^ panel76;
	private: System::Windows::Forms::Panel^ panel77;
	private: System::Windows::Forms::Panel^ panel78;
	private: System::Windows::Forms::Panel^ panel79;
	private: System::Windows::Forms::Panel^ panel80;
	private: System::Windows::Forms::Panel^ panel81;
	private: System::Windows::Forms::Panel^ panel82;
	private: System::Windows::Forms::Panel^ panel83;
	private: System::Windows::Forms::Panel^ panel84;
	private: System::Windows::Forms::Panel^ panel85;
	private: System::Windows::Forms::Panel^ panel86;
	private: System::Windows::Forms::Panel^ panel87;
	private: System::Windows::Forms::Panel^ panel88;
	private: System::Windows::Forms::Panel^ panel89;
	private: System::Windows::Forms::Panel^ panel90;
	private: System::Windows::Forms::Panel^ panel91;
	private: System::Windows::Forms::Panel^ panel92;
	private: System::Windows::Forms::Panel^ panel93;
	private: System::Windows::Forms::Panel^ panel55;
	private: System::Windows::Forms::Panel^ panel70;
	private: System::Windows::Forms::Panel^ panel69;
	private: System::Windows::Forms::Panel^ panel68;
	private: System::Windows::Forms::Panel^ panel67;
	private: System::Windows::Forms::Panel^ panel66;
	private: System::Windows::Forms::Panel^ panel65;
	private: System::Windows::Forms::Panel^ panel64;
	private: System::Windows::Forms::Panel^ panel63;
	private: System::Windows::Forms::Panel^ panel62;
	private: System::Windows::Forms::Panel^ panel61;
	private: System::Windows::Forms::Panel^ panel60;
	private: System::Windows::Forms::Panel^ panel59;
	private: System::Windows::Forms::Panel^ panel58;
	private: System::Windows::Forms::Panel^ panel57;
	private: System::Windows::Forms::Panel^ panel56;
	private: System::Windows::Forms::Panel^ panel54;
	private: System::Windows::Forms::Panel^ panel53;
	private: System::Windows::Forms::Panel^ panel52;
	private: System::Windows::Forms::Panel^ panel51;
	private: System::Windows::Forms::Panel^ panel50;
	private: System::Windows::Forms::Panel^ panel49;
	private: System::Windows::Forms::Panel^ panel48;
	private: System::Windows::Forms::Panel^ panel36;
	private: System::Windows::Forms::Panel^ panel47;
	private: System::Windows::Forms::Panel^ panel46;
	private: System::Windows::Forms::Panel^ panel45;
	private: System::Windows::Forms::Panel^ panel44;
	private: System::Windows::Forms::Panel^ panel43;
	private: System::Windows::Forms::Panel^ panel42;
	private: System::Windows::Forms::Panel^ panel41;
	private: System::Windows::Forms::Panel^ panel40;
	private: System::Windows::Forms::Panel^ panel39;
	private: System::Windows::Forms::Panel^ panel38;
	private: System::Windows::Forms::Panel^ panel37;
	private: System::Windows::Forms::Panel^ panel35;
	private: System::Windows::Forms::Panel^ panel34;
	private: System::Windows::Forms::Panel^ panel33;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel25;






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
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button_addAction = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_addPipe = (gcnew System::Windows::Forms::Button());
			this->button_write = (gcnew System::Windows::Forms::Button());
			this->button_read = (gcnew System::Windows::Forms::Button());
			this->button_delPipe = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel163 = (gcnew System::Windows::Forms::Panel());
			this->panel164 = (gcnew System::Windows::Forms::Panel());
			this->panel165 = (gcnew System::Windows::Forms::Panel());
			this->panel166 = (gcnew System::Windows::Forms::Panel());
			this->panel167 = (gcnew System::Windows::Forms::Panel());
			this->panel168 = (gcnew System::Windows::Forms::Panel());
			this->panel169 = (gcnew System::Windows::Forms::Panel());
			this->panel170 = (gcnew System::Windows::Forms::Panel());
			this->panel171 = (gcnew System::Windows::Forms::Panel());
			this->panel172 = (gcnew System::Windows::Forms::Panel());
			this->panel173 = (gcnew System::Windows::Forms::Panel());
			this->panel174 = (gcnew System::Windows::Forms::Panel());
			this->panel175 = (gcnew System::Windows::Forms::Panel());
			this->panel176 = (gcnew System::Windows::Forms::Panel());
			this->panel177 = (gcnew System::Windows::Forms::Panel());
			this->panel178 = (gcnew System::Windows::Forms::Panel());
			this->panel179 = (gcnew System::Windows::Forms::Panel());
			this->panel180 = (gcnew System::Windows::Forms::Panel());
			this->panel181 = (gcnew System::Windows::Forms::Panel());
			this->panel182 = (gcnew System::Windows::Forms::Panel());
			this->panel183 = (gcnew System::Windows::Forms::Panel());
			this->panel184 = (gcnew System::Windows::Forms::Panel());
			this->panel185 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel140 = (gcnew System::Windows::Forms::Panel());
			this->panel141 = (gcnew System::Windows::Forms::Panel());
			this->panel142 = (gcnew System::Windows::Forms::Panel());
			this->panel143 = (gcnew System::Windows::Forms::Panel());
			this->panel144 = (gcnew System::Windows::Forms::Panel());
			this->panel145 = (gcnew System::Windows::Forms::Panel());
			this->panel146 = (gcnew System::Windows::Forms::Panel());
			this->panel147 = (gcnew System::Windows::Forms::Panel());
			this->panel148 = (gcnew System::Windows::Forms::Panel());
			this->panel149 = (gcnew System::Windows::Forms::Panel());
			this->panel150 = (gcnew System::Windows::Forms::Panel());
			this->panel151 = (gcnew System::Windows::Forms::Panel());
			this->panel152 = (gcnew System::Windows::Forms::Panel());
			this->panel153 = (gcnew System::Windows::Forms::Panel());
			this->panel154 = (gcnew System::Windows::Forms::Panel());
			this->panel155 = (gcnew System::Windows::Forms::Panel());
			this->panel156 = (gcnew System::Windows::Forms::Panel());
			this->panel157 = (gcnew System::Windows::Forms::Panel());
			this->panel158 = (gcnew System::Windows::Forms::Panel());
			this->panel159 = (gcnew System::Windows::Forms::Panel());
			this->panel160 = (gcnew System::Windows::Forms::Panel());
			this->panel161 = (gcnew System::Windows::Forms::Panel());
			this->panel162 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel117 = (gcnew System::Windows::Forms::Panel());
			this->panel118 = (gcnew System::Windows::Forms::Panel());
			this->panel119 = (gcnew System::Windows::Forms::Panel());
			this->panel120 = (gcnew System::Windows::Forms::Panel());
			this->panel121 = (gcnew System::Windows::Forms::Panel());
			this->panel122 = (gcnew System::Windows::Forms::Panel());
			this->panel123 = (gcnew System::Windows::Forms::Panel());
			this->panel124 = (gcnew System::Windows::Forms::Panel());
			this->panel125 = (gcnew System::Windows::Forms::Panel());
			this->panel126 = (gcnew System::Windows::Forms::Panel());
			this->panel127 = (gcnew System::Windows::Forms::Panel());
			this->panel128 = (gcnew System::Windows::Forms::Panel());
			this->panel129 = (gcnew System::Windows::Forms::Panel());
			this->panel130 = (gcnew System::Windows::Forms::Panel());
			this->panel131 = (gcnew System::Windows::Forms::Panel());
			this->panel132 = (gcnew System::Windows::Forms::Panel());
			this->panel133 = (gcnew System::Windows::Forms::Panel());
			this->panel134 = (gcnew System::Windows::Forms::Panel());
			this->panel135 = (gcnew System::Windows::Forms::Panel());
			this->panel136 = (gcnew System::Windows::Forms::Panel());
			this->panel137 = (gcnew System::Windows::Forms::Panel());
			this->panel138 = (gcnew System::Windows::Forms::Panel());
			this->panel139 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel94 = (gcnew System::Windows::Forms::Panel());
			this->panel95 = (gcnew System::Windows::Forms::Panel());
			this->panel96 = (gcnew System::Windows::Forms::Panel());
			this->panel97 = (gcnew System::Windows::Forms::Panel());
			this->panel98 = (gcnew System::Windows::Forms::Panel());
			this->panel99 = (gcnew System::Windows::Forms::Panel());
			this->panel100 = (gcnew System::Windows::Forms::Panel());
			this->panel101 = (gcnew System::Windows::Forms::Panel());
			this->panel102 = (gcnew System::Windows::Forms::Panel());
			this->panel103 = (gcnew System::Windows::Forms::Panel());
			this->panel104 = (gcnew System::Windows::Forms::Panel());
			this->panel105 = (gcnew System::Windows::Forms::Panel());
			this->panel106 = (gcnew System::Windows::Forms::Panel());
			this->panel107 = (gcnew System::Windows::Forms::Panel());
			this->panel108 = (gcnew System::Windows::Forms::Panel());
			this->panel109 = (gcnew System::Windows::Forms::Panel());
			this->panel110 = (gcnew System::Windows::Forms::Panel());
			this->panel111 = (gcnew System::Windows::Forms::Panel());
			this->panel112 = (gcnew System::Windows::Forms::Panel());
			this->panel113 = (gcnew System::Windows::Forms::Panel());
			this->panel114 = (gcnew System::Windows::Forms::Panel());
			this->panel115 = (gcnew System::Windows::Forms::Panel());
			this->panel116 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel71 = (gcnew System::Windows::Forms::Panel());
			this->panel72 = (gcnew System::Windows::Forms::Panel());
			this->panel73 = (gcnew System::Windows::Forms::Panel());
			this->panel74 = (gcnew System::Windows::Forms::Panel());
			this->panel75 = (gcnew System::Windows::Forms::Panel());
			this->panel76 = (gcnew System::Windows::Forms::Panel());
			this->panel77 = (gcnew System::Windows::Forms::Panel());
			this->panel78 = (gcnew System::Windows::Forms::Panel());
			this->panel79 = (gcnew System::Windows::Forms::Panel());
			this->panel80 = (gcnew System::Windows::Forms::Panel());
			this->panel81 = (gcnew System::Windows::Forms::Panel());
			this->panel82 = (gcnew System::Windows::Forms::Panel());
			this->panel83 = (gcnew System::Windows::Forms::Panel());
			this->panel84 = (gcnew System::Windows::Forms::Panel());
			this->panel85 = (gcnew System::Windows::Forms::Panel());
			this->panel86 = (gcnew System::Windows::Forms::Panel());
			this->panel87 = (gcnew System::Windows::Forms::Panel());
			this->panel88 = (gcnew System::Windows::Forms::Panel());
			this->panel89 = (gcnew System::Windows::Forms::Panel());
			this->panel90 = (gcnew System::Windows::Forms::Panel());
			this->panel91 = (gcnew System::Windows::Forms::Panel());
			this->panel92 = (gcnew System::Windows::Forms::Panel());
			this->panel93 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel55 = (gcnew System::Windows::Forms::Panel());
			this->panel70 = (gcnew System::Windows::Forms::Panel());
			this->panel69 = (gcnew System::Windows::Forms::Panel());
			this->panel68 = (gcnew System::Windows::Forms::Panel());
			this->panel67 = (gcnew System::Windows::Forms::Panel());
			this->panel66 = (gcnew System::Windows::Forms::Panel());
			this->panel65 = (gcnew System::Windows::Forms::Panel());
			this->panel64 = (gcnew System::Windows::Forms::Panel());
			this->panel63 = (gcnew System::Windows::Forms::Panel());
			this->panel62 = (gcnew System::Windows::Forms::Panel());
			this->panel61 = (gcnew System::Windows::Forms::Panel());
			this->panel60 = (gcnew System::Windows::Forms::Panel());
			this->panel59 = (gcnew System::Windows::Forms::Panel());
			this->panel58 = (gcnew System::Windows::Forms::Panel());
			this->panel57 = (gcnew System::Windows::Forms::Panel());
			this->panel56 = (gcnew System::Windows::Forms::Panel());
			this->panel54 = (gcnew System::Windows::Forms::Panel());
			this->panel53 = (gcnew System::Windows::Forms::Panel());
			this->panel52 = (gcnew System::Windows::Forms::Panel());
			this->panel51 = (gcnew System::Windows::Forms::Panel());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel_Main->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox_add->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->flowLayoutPanel8->SuspendLayout();
			this->flowLayoutPanel7->SuspendLayout();
			this->flowLayoutPanel6->SuspendLayout();
			this->flowLayoutPanel5->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
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
			this->groupBox_add->Controls->Add(this->maskedTextBox1);
			this->groupBox_add->Controls->Add(this->button_addAction);
			this->groupBox_add->Controls->Add(this->radioButton3);
			this->groupBox_add->Controls->Add(this->radioButton2);
			this->groupBox_add->Controls->Add(this->radioButton1);
			this->groupBox_add->Controls->Add(this->label2);
			this->groupBox_add->Controls->Add(this->label1);
			this->groupBox_add->Location = System::Drawing::Point(390, 3);
			this->groupBox_add->Name = L"groupBox_add";
			this->groupBox_add->Size = System::Drawing::Size(587, 152);
			this->groupBox_add->TabIndex = 5;
			this->groupBox_add->TabStop = false;
			this->groupBox_add->Text = L"Создание канала";
			this->groupBox_add->Visible = false;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(80, 26);
			this->maskedTextBox1->Mask = L"000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(101, 20);
			this->maskedTextBox1->TabIndex = 6;
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::maskedTextBox1_TextChanged);
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
			this->flowLayoutPanel8->Controls->Add(this->panel163);
			this->flowLayoutPanel8->Controls->Add(this->panel164);
			this->flowLayoutPanel8->Controls->Add(this->panel165);
			this->flowLayoutPanel8->Controls->Add(this->panel166);
			this->flowLayoutPanel8->Controls->Add(this->panel167);
			this->flowLayoutPanel8->Controls->Add(this->panel168);
			this->flowLayoutPanel8->Controls->Add(this->panel169);
			this->flowLayoutPanel8->Controls->Add(this->panel170);
			this->flowLayoutPanel8->Controls->Add(this->panel171);
			this->flowLayoutPanel8->Controls->Add(this->panel172);
			this->flowLayoutPanel8->Controls->Add(this->panel173);
			this->flowLayoutPanel8->Controls->Add(this->panel174);
			this->flowLayoutPanel8->Controls->Add(this->panel175);
			this->flowLayoutPanel8->Controls->Add(this->panel176);
			this->flowLayoutPanel8->Controls->Add(this->panel177);
			this->flowLayoutPanel8->Controls->Add(this->panel178);
			this->flowLayoutPanel8->Controls->Add(this->panel179);
			this->flowLayoutPanel8->Controls->Add(this->panel180);
			this->flowLayoutPanel8->Controls->Add(this->panel181);
			this->flowLayoutPanel8->Controls->Add(this->panel182);
			this->flowLayoutPanel8->Controls->Add(this->panel183);
			this->flowLayoutPanel8->Controls->Add(this->panel184);
			this->flowLayoutPanel8->Controls->Add(this->panel185);
			this->flowLayoutPanel8->Location = System::Drawing::Point(3, 318);
			this->flowLayoutPanel8->Name = L"flowLayoutPanel8";
			this->flowLayoutPanel8->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel8->TabIndex = 7;
			this->flowLayoutPanel8->Visible = false;
			this->flowLayoutPanel8->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel8_Click);
			// 
			// panel163
			// 
			this->panel163->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel163->Location = System::Drawing::Point(3, 3);
			this->panel163->Name = L"panel163";
			this->panel163->Size = System::Drawing::Size(36, 36);
			this->panel163->TabIndex = 4;
			// 
			// panel164
			// 
			this->panel164->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel164->Location = System::Drawing::Point(45, 3);
			this->panel164->Name = L"panel164";
			this->panel164->Size = System::Drawing::Size(36, 36);
			this->panel164->TabIndex = 20;
			// 
			// panel165
			// 
			this->panel165->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel165->Location = System::Drawing::Point(87, 3);
			this->panel165->Name = L"panel165";
			this->panel165->Size = System::Drawing::Size(36, 36);
			this->panel165->TabIndex = 19;
			// 
			// panel166
			// 
			this->panel166->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel166->Location = System::Drawing::Point(129, 3);
			this->panel166->Name = L"panel166";
			this->panel166->Size = System::Drawing::Size(36, 36);
			this->panel166->TabIndex = 18;
			// 
			// panel167
			// 
			this->panel167->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel167->Location = System::Drawing::Point(171, 3);
			this->panel167->Name = L"panel167";
			this->panel167->Size = System::Drawing::Size(36, 36);
			this->panel167->TabIndex = 17;
			// 
			// panel168
			// 
			this->panel168->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel168->Location = System::Drawing::Point(213, 3);
			this->panel168->Name = L"panel168";
			this->panel168->Size = System::Drawing::Size(36, 36);
			this->panel168->TabIndex = 16;
			// 
			// panel169
			// 
			this->panel169->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel169->Location = System::Drawing::Point(255, 3);
			this->panel169->Name = L"panel169";
			this->panel169->Size = System::Drawing::Size(36, 36);
			this->panel169->TabIndex = 15;
			// 
			// panel170
			// 
			this->panel170->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel170->Location = System::Drawing::Point(297, 3);
			this->panel170->Name = L"panel170";
			this->panel170->Size = System::Drawing::Size(36, 36);
			this->panel170->TabIndex = 14;
			// 
			// panel171
			// 
			this->panel171->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel171->Location = System::Drawing::Point(339, 3);
			this->panel171->Name = L"panel171";
			this->panel171->Size = System::Drawing::Size(36, 36);
			this->panel171->TabIndex = 21;
			// 
			// panel172
			// 
			this->panel172->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel172->Location = System::Drawing::Point(381, 3);
			this->panel172->Name = L"panel172";
			this->panel172->Size = System::Drawing::Size(36, 36);
			this->panel172->TabIndex = 12;
			// 
			// panel173
			// 
			this->panel173->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel173->Location = System::Drawing::Point(423, 3);
			this->panel173->Name = L"panel173";
			this->panel173->Size = System::Drawing::Size(36, 36);
			this->panel173->TabIndex = 11;
			// 
			// panel174
			// 
			this->panel174->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel174->Location = System::Drawing::Point(465, 3);
			this->panel174->Name = L"panel174";
			this->panel174->Size = System::Drawing::Size(36, 36);
			this->panel174->TabIndex = 13;
			// 
			// panel175
			// 
			this->panel175->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel175->Location = System::Drawing::Point(507, 3);
			this->panel175->Name = L"panel175";
			this->panel175->Size = System::Drawing::Size(36, 36);
			this->panel175->TabIndex = 10;
			// 
			// panel176
			// 
			this->panel176->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel176->Location = System::Drawing::Point(549, 3);
			this->panel176->Name = L"panel176";
			this->panel176->Size = System::Drawing::Size(36, 36);
			this->panel176->TabIndex = 9;
			// 
			// panel177
			// 
			this->panel177->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel177->Location = System::Drawing::Point(591, 3);
			this->panel177->Name = L"panel177";
			this->panel177->Size = System::Drawing::Size(36, 36);
			this->panel177->TabIndex = 8;
			// 
			// panel178
			// 
			this->panel178->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel178->Location = System::Drawing::Point(633, 3);
			this->panel178->Name = L"panel178";
			this->panel178->Size = System::Drawing::Size(36, 36);
			this->panel178->TabIndex = 7;
			// 
			// panel179
			// 
			this->panel179->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel179->Location = System::Drawing::Point(675, 3);
			this->panel179->Name = L"panel179";
			this->panel179->Size = System::Drawing::Size(36, 36);
			this->panel179->TabIndex = 6;
			// 
			// panel180
			// 
			this->panel180->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel180->Location = System::Drawing::Point(717, 3);
			this->panel180->Name = L"panel180";
			this->panel180->Size = System::Drawing::Size(36, 36);
			this->panel180->TabIndex = 5;
			// 
			// panel181
			// 
			this->panel181->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel181->Location = System::Drawing::Point(759, 3);
			this->panel181->Name = L"panel181";
			this->panel181->Size = System::Drawing::Size(36, 36);
			this->panel181->TabIndex = 22;
			// 
			// panel182
			// 
			this->panel182->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel182->Location = System::Drawing::Point(801, 3);
			this->panel182->Name = L"panel182";
			this->panel182->Size = System::Drawing::Size(36, 36);
			this->panel182->TabIndex = 24;
			// 
			// panel183
			// 
			this->panel183->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel183->Location = System::Drawing::Point(843, 3);
			this->panel183->Name = L"panel183";
			this->panel183->Size = System::Drawing::Size(36, 36);
			this->panel183->TabIndex = 25;
			// 
			// panel184
			// 
			this->panel184->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel184->Location = System::Drawing::Point(885, 3);
			this->panel184->Name = L"panel184";
			this->panel184->Size = System::Drawing::Size(36, 36);
			this->panel184->TabIndex = 23;
			// 
			// panel185
			// 
			this->panel185->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel185->Location = System::Drawing::Point(927, 3);
			this->panel185->Name = L"panel185";
			this->panel185->Size = System::Drawing::Size(36, 36);
			this->panel185->TabIndex = 26;
			// 
			// flowLayoutPanel7
			// 
			this->flowLayoutPanel7->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel7->Controls->Add(this->panel140);
			this->flowLayoutPanel7->Controls->Add(this->panel141);
			this->flowLayoutPanel7->Controls->Add(this->panel142);
			this->flowLayoutPanel7->Controls->Add(this->panel143);
			this->flowLayoutPanel7->Controls->Add(this->panel144);
			this->flowLayoutPanel7->Controls->Add(this->panel145);
			this->flowLayoutPanel7->Controls->Add(this->panel146);
			this->flowLayoutPanel7->Controls->Add(this->panel147);
			this->flowLayoutPanel7->Controls->Add(this->panel148);
			this->flowLayoutPanel7->Controls->Add(this->panel149);
			this->flowLayoutPanel7->Controls->Add(this->panel150);
			this->flowLayoutPanel7->Controls->Add(this->panel151);
			this->flowLayoutPanel7->Controls->Add(this->panel152);
			this->flowLayoutPanel7->Controls->Add(this->panel153);
			this->flowLayoutPanel7->Controls->Add(this->panel154);
			this->flowLayoutPanel7->Controls->Add(this->panel155);
			this->flowLayoutPanel7->Controls->Add(this->panel156);
			this->flowLayoutPanel7->Controls->Add(this->panel157);
			this->flowLayoutPanel7->Controls->Add(this->panel158);
			this->flowLayoutPanel7->Controls->Add(this->panel159);
			this->flowLayoutPanel7->Controls->Add(this->panel160);
			this->flowLayoutPanel7->Controls->Add(this->panel161);
			this->flowLayoutPanel7->Controls->Add(this->panel162);
			this->flowLayoutPanel7->Location = System::Drawing::Point(3, 273);
			this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
			this->flowLayoutPanel7->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel7->TabIndex = 6;
			this->flowLayoutPanel7->Visible = false;
			this->flowLayoutPanel7->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel7_Click);
			// 
			// panel140
			// 
			this->panel140->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel140->Location = System::Drawing::Point(3, 3);
			this->panel140->Name = L"panel140";
			this->panel140->Size = System::Drawing::Size(36, 36);
			this->panel140->TabIndex = 4;
			// 
			// panel141
			// 
			this->panel141->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel141->Location = System::Drawing::Point(45, 3);
			this->panel141->Name = L"panel141";
			this->panel141->Size = System::Drawing::Size(36, 36);
			this->panel141->TabIndex = 20;
			// 
			// panel142
			// 
			this->panel142->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel142->Location = System::Drawing::Point(87, 3);
			this->panel142->Name = L"panel142";
			this->panel142->Size = System::Drawing::Size(36, 36);
			this->panel142->TabIndex = 19;
			// 
			// panel143
			// 
			this->panel143->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel143->Location = System::Drawing::Point(129, 3);
			this->panel143->Name = L"panel143";
			this->panel143->Size = System::Drawing::Size(36, 36);
			this->panel143->TabIndex = 18;
			// 
			// panel144
			// 
			this->panel144->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel144->Location = System::Drawing::Point(171, 3);
			this->panel144->Name = L"panel144";
			this->panel144->Size = System::Drawing::Size(36, 36);
			this->panel144->TabIndex = 17;
			// 
			// panel145
			// 
			this->panel145->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel145->Location = System::Drawing::Point(213, 3);
			this->panel145->Name = L"panel145";
			this->panel145->Size = System::Drawing::Size(36, 36);
			this->panel145->TabIndex = 16;
			// 
			// panel146
			// 
			this->panel146->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel146->Location = System::Drawing::Point(255, 3);
			this->panel146->Name = L"panel146";
			this->panel146->Size = System::Drawing::Size(36, 36);
			this->panel146->TabIndex = 15;
			// 
			// panel147
			// 
			this->panel147->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel147->Location = System::Drawing::Point(297, 3);
			this->panel147->Name = L"panel147";
			this->panel147->Size = System::Drawing::Size(36, 36);
			this->panel147->TabIndex = 14;
			// 
			// panel148
			// 
			this->panel148->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel148->Location = System::Drawing::Point(339, 3);
			this->panel148->Name = L"panel148";
			this->panel148->Size = System::Drawing::Size(36, 36);
			this->panel148->TabIndex = 21;
			// 
			// panel149
			// 
			this->panel149->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel149->Location = System::Drawing::Point(381, 3);
			this->panel149->Name = L"panel149";
			this->panel149->Size = System::Drawing::Size(36, 36);
			this->panel149->TabIndex = 12;
			// 
			// panel150
			// 
			this->panel150->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel150->Location = System::Drawing::Point(423, 3);
			this->panel150->Name = L"panel150";
			this->panel150->Size = System::Drawing::Size(36, 36);
			this->panel150->TabIndex = 11;
			// 
			// panel151
			// 
			this->panel151->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel151->Location = System::Drawing::Point(465, 3);
			this->panel151->Name = L"panel151";
			this->panel151->Size = System::Drawing::Size(36, 36);
			this->panel151->TabIndex = 13;
			// 
			// panel152
			// 
			this->panel152->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel152->Location = System::Drawing::Point(507, 3);
			this->panel152->Name = L"panel152";
			this->panel152->Size = System::Drawing::Size(36, 36);
			this->panel152->TabIndex = 10;
			// 
			// panel153
			// 
			this->panel153->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel153->Location = System::Drawing::Point(549, 3);
			this->panel153->Name = L"panel153";
			this->panel153->Size = System::Drawing::Size(36, 36);
			this->panel153->TabIndex = 9;
			// 
			// panel154
			// 
			this->panel154->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel154->Location = System::Drawing::Point(591, 3);
			this->panel154->Name = L"panel154";
			this->panel154->Size = System::Drawing::Size(36, 36);
			this->panel154->TabIndex = 8;
			// 
			// panel155
			// 
			this->panel155->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel155->Location = System::Drawing::Point(633, 3);
			this->panel155->Name = L"panel155";
			this->panel155->Size = System::Drawing::Size(36, 36);
			this->panel155->TabIndex = 7;
			// 
			// panel156
			// 
			this->panel156->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel156->Location = System::Drawing::Point(675, 3);
			this->panel156->Name = L"panel156";
			this->panel156->Size = System::Drawing::Size(36, 36);
			this->panel156->TabIndex = 6;
			// 
			// panel157
			// 
			this->panel157->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel157->Location = System::Drawing::Point(717, 3);
			this->panel157->Name = L"panel157";
			this->panel157->Size = System::Drawing::Size(36, 36);
			this->panel157->TabIndex = 5;
			// 
			// panel158
			// 
			this->panel158->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel158->Location = System::Drawing::Point(759, 3);
			this->panel158->Name = L"panel158";
			this->panel158->Size = System::Drawing::Size(36, 36);
			this->panel158->TabIndex = 22;
			// 
			// panel159
			// 
			this->panel159->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel159->Location = System::Drawing::Point(801, 3);
			this->panel159->Name = L"panel159";
			this->panel159->Size = System::Drawing::Size(36, 36);
			this->panel159->TabIndex = 24;
			// 
			// panel160
			// 
			this->panel160->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel160->Location = System::Drawing::Point(843, 3);
			this->panel160->Name = L"panel160";
			this->panel160->Size = System::Drawing::Size(36, 36);
			this->panel160->TabIndex = 25;
			// 
			// panel161
			// 
			this->panel161->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel161->Location = System::Drawing::Point(885, 3);
			this->panel161->Name = L"panel161";
			this->panel161->Size = System::Drawing::Size(36, 36);
			this->panel161->TabIndex = 23;
			// 
			// panel162
			// 
			this->panel162->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel162->Location = System::Drawing::Point(927, 3);
			this->panel162->Name = L"panel162";
			this->panel162->Size = System::Drawing::Size(36, 36);
			this->panel162->TabIndex = 26;
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel6->Controls->Add(this->panel117);
			this->flowLayoutPanel6->Controls->Add(this->panel118);
			this->flowLayoutPanel6->Controls->Add(this->panel119);
			this->flowLayoutPanel6->Controls->Add(this->panel120);
			this->flowLayoutPanel6->Controls->Add(this->panel121);
			this->flowLayoutPanel6->Controls->Add(this->panel122);
			this->flowLayoutPanel6->Controls->Add(this->panel123);
			this->flowLayoutPanel6->Controls->Add(this->panel124);
			this->flowLayoutPanel6->Controls->Add(this->panel125);
			this->flowLayoutPanel6->Controls->Add(this->panel126);
			this->flowLayoutPanel6->Controls->Add(this->panel127);
			this->flowLayoutPanel6->Controls->Add(this->panel128);
			this->flowLayoutPanel6->Controls->Add(this->panel129);
			this->flowLayoutPanel6->Controls->Add(this->panel130);
			this->flowLayoutPanel6->Controls->Add(this->panel131);
			this->flowLayoutPanel6->Controls->Add(this->panel132);
			this->flowLayoutPanel6->Controls->Add(this->panel133);
			this->flowLayoutPanel6->Controls->Add(this->panel134);
			this->flowLayoutPanel6->Controls->Add(this->panel135);
			this->flowLayoutPanel6->Controls->Add(this->panel136);
			this->flowLayoutPanel6->Controls->Add(this->panel137);
			this->flowLayoutPanel6->Controls->Add(this->panel138);
			this->flowLayoutPanel6->Controls->Add(this->panel139);
			this->flowLayoutPanel6->Location = System::Drawing::Point(3, 228);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel6->TabIndex = 5;
			this->flowLayoutPanel6->Visible = false;
			this->flowLayoutPanel6->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel6_Click);
			// 
			// panel117
			// 
			this->panel117->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel117->Location = System::Drawing::Point(3, 3);
			this->panel117->Name = L"panel117";
			this->panel117->Size = System::Drawing::Size(36, 36);
			this->panel117->TabIndex = 4;
			// 
			// panel118
			// 
			this->panel118->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel118->Location = System::Drawing::Point(45, 3);
			this->panel118->Name = L"panel118";
			this->panel118->Size = System::Drawing::Size(36, 36);
			this->panel118->TabIndex = 20;
			// 
			// panel119
			// 
			this->panel119->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel119->Location = System::Drawing::Point(87, 3);
			this->panel119->Name = L"panel119";
			this->panel119->Size = System::Drawing::Size(36, 36);
			this->panel119->TabIndex = 19;
			// 
			// panel120
			// 
			this->panel120->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel120->Location = System::Drawing::Point(129, 3);
			this->panel120->Name = L"panel120";
			this->panel120->Size = System::Drawing::Size(36, 36);
			this->panel120->TabIndex = 18;
			// 
			// panel121
			// 
			this->panel121->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel121->Location = System::Drawing::Point(171, 3);
			this->panel121->Name = L"panel121";
			this->panel121->Size = System::Drawing::Size(36, 36);
			this->panel121->TabIndex = 17;
			// 
			// panel122
			// 
			this->panel122->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel122->Location = System::Drawing::Point(213, 3);
			this->panel122->Name = L"panel122";
			this->panel122->Size = System::Drawing::Size(36, 36);
			this->panel122->TabIndex = 16;
			// 
			// panel123
			// 
			this->panel123->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel123->Location = System::Drawing::Point(255, 3);
			this->panel123->Name = L"panel123";
			this->panel123->Size = System::Drawing::Size(36, 36);
			this->panel123->TabIndex = 15;
			// 
			// panel124
			// 
			this->panel124->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel124->Location = System::Drawing::Point(297, 3);
			this->panel124->Name = L"panel124";
			this->panel124->Size = System::Drawing::Size(36, 36);
			this->panel124->TabIndex = 14;
			// 
			// panel125
			// 
			this->panel125->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel125->Location = System::Drawing::Point(339, 3);
			this->panel125->Name = L"panel125";
			this->panel125->Size = System::Drawing::Size(36, 36);
			this->panel125->TabIndex = 21;
			// 
			// panel126
			// 
			this->panel126->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel126->Location = System::Drawing::Point(381, 3);
			this->panel126->Name = L"panel126";
			this->panel126->Size = System::Drawing::Size(36, 36);
			this->panel126->TabIndex = 12;
			// 
			// panel127
			// 
			this->panel127->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel127->Location = System::Drawing::Point(423, 3);
			this->panel127->Name = L"panel127";
			this->panel127->Size = System::Drawing::Size(36, 36);
			this->panel127->TabIndex = 11;
			// 
			// panel128
			// 
			this->panel128->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel128->Location = System::Drawing::Point(465, 3);
			this->panel128->Name = L"panel128";
			this->panel128->Size = System::Drawing::Size(36, 36);
			this->panel128->TabIndex = 13;
			// 
			// panel129
			// 
			this->panel129->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel129->Location = System::Drawing::Point(507, 3);
			this->panel129->Name = L"panel129";
			this->panel129->Size = System::Drawing::Size(36, 36);
			this->panel129->TabIndex = 10;
			// 
			// panel130
			// 
			this->panel130->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel130->Location = System::Drawing::Point(549, 3);
			this->panel130->Name = L"panel130";
			this->panel130->Size = System::Drawing::Size(36, 36);
			this->panel130->TabIndex = 9;
			// 
			// panel131
			// 
			this->panel131->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel131->Location = System::Drawing::Point(591, 3);
			this->panel131->Name = L"panel131";
			this->panel131->Size = System::Drawing::Size(36, 36);
			this->panel131->TabIndex = 8;
			// 
			// panel132
			// 
			this->panel132->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel132->Location = System::Drawing::Point(633, 3);
			this->panel132->Name = L"panel132";
			this->panel132->Size = System::Drawing::Size(36, 36);
			this->panel132->TabIndex = 7;
			// 
			// panel133
			// 
			this->panel133->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel133->Location = System::Drawing::Point(675, 3);
			this->panel133->Name = L"panel133";
			this->panel133->Size = System::Drawing::Size(36, 36);
			this->panel133->TabIndex = 6;
			// 
			// panel134
			// 
			this->panel134->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel134->Location = System::Drawing::Point(717, 3);
			this->panel134->Name = L"panel134";
			this->panel134->Size = System::Drawing::Size(36, 36);
			this->panel134->TabIndex = 5;
			// 
			// panel135
			// 
			this->panel135->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel135->Location = System::Drawing::Point(759, 3);
			this->panel135->Name = L"panel135";
			this->panel135->Size = System::Drawing::Size(36, 36);
			this->panel135->TabIndex = 22;
			// 
			// panel136
			// 
			this->panel136->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel136->Location = System::Drawing::Point(801, 3);
			this->panel136->Name = L"panel136";
			this->panel136->Size = System::Drawing::Size(36, 36);
			this->panel136->TabIndex = 24;
			// 
			// panel137
			// 
			this->panel137->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel137->Location = System::Drawing::Point(843, 3);
			this->panel137->Name = L"panel137";
			this->panel137->Size = System::Drawing::Size(36, 36);
			this->panel137->TabIndex = 25;
			// 
			// panel138
			// 
			this->panel138->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel138->Location = System::Drawing::Point(885, 3);
			this->panel138->Name = L"panel138";
			this->panel138->Size = System::Drawing::Size(36, 36);
			this->panel138->TabIndex = 23;
			// 
			// panel139
			// 
			this->panel139->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel139->Location = System::Drawing::Point(927, 3);
			this->panel139->Name = L"panel139";
			this->panel139->Size = System::Drawing::Size(36, 36);
			this->panel139->TabIndex = 26;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel5->Controls->Add(this->panel94);
			this->flowLayoutPanel5->Controls->Add(this->panel95);
			this->flowLayoutPanel5->Controls->Add(this->panel96);
			this->flowLayoutPanel5->Controls->Add(this->panel97);
			this->flowLayoutPanel5->Controls->Add(this->panel98);
			this->flowLayoutPanel5->Controls->Add(this->panel99);
			this->flowLayoutPanel5->Controls->Add(this->panel100);
			this->flowLayoutPanel5->Controls->Add(this->panel101);
			this->flowLayoutPanel5->Controls->Add(this->panel102);
			this->flowLayoutPanel5->Controls->Add(this->panel103);
			this->flowLayoutPanel5->Controls->Add(this->panel104);
			this->flowLayoutPanel5->Controls->Add(this->panel105);
			this->flowLayoutPanel5->Controls->Add(this->panel106);
			this->flowLayoutPanel5->Controls->Add(this->panel107);
			this->flowLayoutPanel5->Controls->Add(this->panel108);
			this->flowLayoutPanel5->Controls->Add(this->panel109);
			this->flowLayoutPanel5->Controls->Add(this->panel110);
			this->flowLayoutPanel5->Controls->Add(this->panel111);
			this->flowLayoutPanel5->Controls->Add(this->panel112);
			this->flowLayoutPanel5->Controls->Add(this->panel113);
			this->flowLayoutPanel5->Controls->Add(this->panel114);
			this->flowLayoutPanel5->Controls->Add(this->panel115);
			this->flowLayoutPanel5->Controls->Add(this->panel116);
			this->flowLayoutPanel5->Location = System::Drawing::Point(3, 183);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel5->TabIndex = 4;
			this->flowLayoutPanel5->Visible = false;
			this->flowLayoutPanel5->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel5_Click);
			// 
			// panel94
			// 
			this->panel94->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel94->Location = System::Drawing::Point(3, 3);
			this->panel94->Name = L"panel94";
			this->panel94->Size = System::Drawing::Size(36, 36);
			this->panel94->TabIndex = 4;
			// 
			// panel95
			// 
			this->panel95->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel95->Location = System::Drawing::Point(45, 3);
			this->panel95->Name = L"panel95";
			this->panel95->Size = System::Drawing::Size(36, 36);
			this->panel95->TabIndex = 20;
			// 
			// panel96
			// 
			this->panel96->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel96->Location = System::Drawing::Point(87, 3);
			this->panel96->Name = L"panel96";
			this->panel96->Size = System::Drawing::Size(36, 36);
			this->panel96->TabIndex = 19;
			// 
			// panel97
			// 
			this->panel97->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel97->Location = System::Drawing::Point(129, 3);
			this->panel97->Name = L"panel97";
			this->panel97->Size = System::Drawing::Size(36, 36);
			this->panel97->TabIndex = 18;
			// 
			// panel98
			// 
			this->panel98->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel98->Location = System::Drawing::Point(171, 3);
			this->panel98->Name = L"panel98";
			this->panel98->Size = System::Drawing::Size(36, 36);
			this->panel98->TabIndex = 17;
			// 
			// panel99
			// 
			this->panel99->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel99->Location = System::Drawing::Point(213, 3);
			this->panel99->Name = L"panel99";
			this->panel99->Size = System::Drawing::Size(36, 36);
			this->panel99->TabIndex = 16;
			// 
			// panel100
			// 
			this->panel100->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel100->Location = System::Drawing::Point(255, 3);
			this->panel100->Name = L"panel100";
			this->panel100->Size = System::Drawing::Size(36, 36);
			this->panel100->TabIndex = 15;
			// 
			// panel101
			// 
			this->panel101->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel101->Location = System::Drawing::Point(297, 3);
			this->panel101->Name = L"panel101";
			this->panel101->Size = System::Drawing::Size(36, 36);
			this->panel101->TabIndex = 14;
			// 
			// panel102
			// 
			this->panel102->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel102->Location = System::Drawing::Point(339, 3);
			this->panel102->Name = L"panel102";
			this->panel102->Size = System::Drawing::Size(36, 36);
			this->panel102->TabIndex = 21;
			// 
			// panel103
			// 
			this->panel103->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel103->Location = System::Drawing::Point(381, 3);
			this->panel103->Name = L"panel103";
			this->panel103->Size = System::Drawing::Size(36, 36);
			this->panel103->TabIndex = 12;
			// 
			// panel104
			// 
			this->panel104->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel104->Location = System::Drawing::Point(423, 3);
			this->panel104->Name = L"panel104";
			this->panel104->Size = System::Drawing::Size(36, 36);
			this->panel104->TabIndex = 11;
			// 
			// panel105
			// 
			this->panel105->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel105->Location = System::Drawing::Point(465, 3);
			this->panel105->Name = L"panel105";
			this->panel105->Size = System::Drawing::Size(36, 36);
			this->panel105->TabIndex = 13;
			// 
			// panel106
			// 
			this->panel106->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel106->Location = System::Drawing::Point(507, 3);
			this->panel106->Name = L"panel106";
			this->panel106->Size = System::Drawing::Size(36, 36);
			this->panel106->TabIndex = 10;
			// 
			// panel107
			// 
			this->panel107->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel107->Location = System::Drawing::Point(549, 3);
			this->panel107->Name = L"panel107";
			this->panel107->Size = System::Drawing::Size(36, 36);
			this->panel107->TabIndex = 9;
			// 
			// panel108
			// 
			this->panel108->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel108->Location = System::Drawing::Point(591, 3);
			this->panel108->Name = L"panel108";
			this->panel108->Size = System::Drawing::Size(36, 36);
			this->panel108->TabIndex = 8;
			// 
			// panel109
			// 
			this->panel109->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel109->Location = System::Drawing::Point(633, 3);
			this->panel109->Name = L"panel109";
			this->panel109->Size = System::Drawing::Size(36, 36);
			this->panel109->TabIndex = 7;
			// 
			// panel110
			// 
			this->panel110->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel110->Location = System::Drawing::Point(675, 3);
			this->panel110->Name = L"panel110";
			this->panel110->Size = System::Drawing::Size(36, 36);
			this->panel110->TabIndex = 6;
			// 
			// panel111
			// 
			this->panel111->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel111->Location = System::Drawing::Point(717, 3);
			this->panel111->Name = L"panel111";
			this->panel111->Size = System::Drawing::Size(36, 36);
			this->panel111->TabIndex = 5;
			// 
			// panel112
			// 
			this->panel112->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel112->Location = System::Drawing::Point(759, 3);
			this->panel112->Name = L"panel112";
			this->panel112->Size = System::Drawing::Size(36, 36);
			this->panel112->TabIndex = 22;
			// 
			// panel113
			// 
			this->panel113->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel113->Location = System::Drawing::Point(801, 3);
			this->panel113->Name = L"panel113";
			this->panel113->Size = System::Drawing::Size(36, 36);
			this->panel113->TabIndex = 24;
			// 
			// panel114
			// 
			this->panel114->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel114->Location = System::Drawing::Point(843, 3);
			this->panel114->Name = L"panel114";
			this->panel114->Size = System::Drawing::Size(36, 36);
			this->panel114->TabIndex = 25;
			// 
			// panel115
			// 
			this->panel115->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel115->Location = System::Drawing::Point(885, 3);
			this->panel115->Name = L"panel115";
			this->panel115->Size = System::Drawing::Size(36, 36);
			this->panel115->TabIndex = 23;
			// 
			// panel116
			// 
			this->panel116->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel116->Location = System::Drawing::Point(927, 3);
			this->panel116->Name = L"panel116";
			this->panel116->Size = System::Drawing::Size(36, 36);
			this->panel116->TabIndex = 26;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel4->Controls->Add(this->panel71);
			this->flowLayoutPanel4->Controls->Add(this->panel72);
			this->flowLayoutPanel4->Controls->Add(this->panel73);
			this->flowLayoutPanel4->Controls->Add(this->panel74);
			this->flowLayoutPanel4->Controls->Add(this->panel75);
			this->flowLayoutPanel4->Controls->Add(this->panel76);
			this->flowLayoutPanel4->Controls->Add(this->panel77);
			this->flowLayoutPanel4->Controls->Add(this->panel78);
			this->flowLayoutPanel4->Controls->Add(this->panel79);
			this->flowLayoutPanel4->Controls->Add(this->panel80);
			this->flowLayoutPanel4->Controls->Add(this->panel81);
			this->flowLayoutPanel4->Controls->Add(this->panel82);
			this->flowLayoutPanel4->Controls->Add(this->panel83);
			this->flowLayoutPanel4->Controls->Add(this->panel84);
			this->flowLayoutPanel4->Controls->Add(this->panel85);
			this->flowLayoutPanel4->Controls->Add(this->panel86);
			this->flowLayoutPanel4->Controls->Add(this->panel87);
			this->flowLayoutPanel4->Controls->Add(this->panel88);
			this->flowLayoutPanel4->Controls->Add(this->panel89);
			this->flowLayoutPanel4->Controls->Add(this->panel90);
			this->flowLayoutPanel4->Controls->Add(this->panel91);
			this->flowLayoutPanel4->Controls->Add(this->panel92);
			this->flowLayoutPanel4->Controls->Add(this->panel93);
			this->flowLayoutPanel4->Location = System::Drawing::Point(3, 138);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel4->TabIndex = 3;
			this->flowLayoutPanel4->Visible = false;
			this->flowLayoutPanel4->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel4_Click);
			// 
			// panel71
			// 
			this->panel71->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel71->Location = System::Drawing::Point(3, 3);
			this->panel71->Name = L"panel71";
			this->panel71->Size = System::Drawing::Size(36, 36);
			this->panel71->TabIndex = 4;
			// 
			// panel72
			// 
			this->panel72->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel72->Location = System::Drawing::Point(45, 3);
			this->panel72->Name = L"panel72";
			this->panel72->Size = System::Drawing::Size(36, 36);
			this->panel72->TabIndex = 20;
			// 
			// panel73
			// 
			this->panel73->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel73->Location = System::Drawing::Point(87, 3);
			this->panel73->Name = L"panel73";
			this->panel73->Size = System::Drawing::Size(36, 36);
			this->panel73->TabIndex = 19;
			// 
			// panel74
			// 
			this->panel74->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel74->Location = System::Drawing::Point(129, 3);
			this->panel74->Name = L"panel74";
			this->panel74->Size = System::Drawing::Size(36, 36);
			this->panel74->TabIndex = 18;
			// 
			// panel75
			// 
			this->panel75->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel75->Location = System::Drawing::Point(171, 3);
			this->panel75->Name = L"panel75";
			this->panel75->Size = System::Drawing::Size(36, 36);
			this->panel75->TabIndex = 17;
			// 
			// panel76
			// 
			this->panel76->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel76->Location = System::Drawing::Point(213, 3);
			this->panel76->Name = L"panel76";
			this->panel76->Size = System::Drawing::Size(36, 36);
			this->panel76->TabIndex = 16;
			// 
			// panel77
			// 
			this->panel77->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel77->Location = System::Drawing::Point(255, 3);
			this->panel77->Name = L"panel77";
			this->panel77->Size = System::Drawing::Size(36, 36);
			this->panel77->TabIndex = 15;
			// 
			// panel78
			// 
			this->panel78->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel78->Location = System::Drawing::Point(297, 3);
			this->panel78->Name = L"panel78";
			this->panel78->Size = System::Drawing::Size(36, 36);
			this->panel78->TabIndex = 14;
			// 
			// panel79
			// 
			this->panel79->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel79->Location = System::Drawing::Point(339, 3);
			this->panel79->Name = L"panel79";
			this->panel79->Size = System::Drawing::Size(36, 36);
			this->panel79->TabIndex = 21;
			// 
			// panel80
			// 
			this->panel80->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel80->Location = System::Drawing::Point(381, 3);
			this->panel80->Name = L"panel80";
			this->panel80->Size = System::Drawing::Size(36, 36);
			this->panel80->TabIndex = 12;
			// 
			// panel81
			// 
			this->panel81->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel81->Location = System::Drawing::Point(423, 3);
			this->panel81->Name = L"panel81";
			this->panel81->Size = System::Drawing::Size(36, 36);
			this->panel81->TabIndex = 11;
			// 
			// panel82
			// 
			this->panel82->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel82->Location = System::Drawing::Point(465, 3);
			this->panel82->Name = L"panel82";
			this->panel82->Size = System::Drawing::Size(36, 36);
			this->panel82->TabIndex = 13;
			// 
			// panel83
			// 
			this->panel83->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel83->Location = System::Drawing::Point(507, 3);
			this->panel83->Name = L"panel83";
			this->panel83->Size = System::Drawing::Size(36, 36);
			this->panel83->TabIndex = 10;
			// 
			// panel84
			// 
			this->panel84->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel84->Location = System::Drawing::Point(549, 3);
			this->panel84->Name = L"panel84";
			this->panel84->Size = System::Drawing::Size(36, 36);
			this->panel84->TabIndex = 9;
			// 
			// panel85
			// 
			this->panel85->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel85->Location = System::Drawing::Point(591, 3);
			this->panel85->Name = L"panel85";
			this->panel85->Size = System::Drawing::Size(36, 36);
			this->panel85->TabIndex = 8;
			// 
			// panel86
			// 
			this->panel86->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel86->Location = System::Drawing::Point(633, 3);
			this->panel86->Name = L"panel86";
			this->panel86->Size = System::Drawing::Size(36, 36);
			this->panel86->TabIndex = 7;
			// 
			// panel87
			// 
			this->panel87->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel87->Location = System::Drawing::Point(675, 3);
			this->panel87->Name = L"panel87";
			this->panel87->Size = System::Drawing::Size(36, 36);
			this->panel87->TabIndex = 6;
			// 
			// panel88
			// 
			this->panel88->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel88->Location = System::Drawing::Point(717, 3);
			this->panel88->Name = L"panel88";
			this->panel88->Size = System::Drawing::Size(36, 36);
			this->panel88->TabIndex = 5;
			// 
			// panel89
			// 
			this->panel89->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel89->Location = System::Drawing::Point(759, 3);
			this->panel89->Name = L"panel89";
			this->panel89->Size = System::Drawing::Size(36, 36);
			this->panel89->TabIndex = 22;
			// 
			// panel90
			// 
			this->panel90->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel90->Location = System::Drawing::Point(801, 3);
			this->panel90->Name = L"panel90";
			this->panel90->Size = System::Drawing::Size(36, 36);
			this->panel90->TabIndex = 24;
			// 
			// panel91
			// 
			this->panel91->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel91->Location = System::Drawing::Point(843, 3);
			this->panel91->Name = L"panel91";
			this->panel91->Size = System::Drawing::Size(36, 36);
			this->panel91->TabIndex = 25;
			// 
			// panel92
			// 
			this->panel92->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel92->Location = System::Drawing::Point(885, 3);
			this->panel92->Name = L"panel92";
			this->panel92->Size = System::Drawing::Size(36, 36);
			this->panel92->TabIndex = 23;
			// 
			// panel93
			// 
			this->panel93->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel93->Location = System::Drawing::Point(927, 3);
			this->panel93->Name = L"panel93";
			this->panel93->Size = System::Drawing::Size(36, 36);
			this->panel93->TabIndex = 26;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel3->Controls->Add(this->panel70);
			this->flowLayoutPanel3->Controls->Add(this->panel69);
			this->flowLayoutPanel3->Controls->Add(this->panel68);
			this->flowLayoutPanel3->Controls->Add(this->panel67);
			this->flowLayoutPanel3->Controls->Add(this->panel66);
			this->flowLayoutPanel3->Controls->Add(this->panel65);
			this->flowLayoutPanel3->Controls->Add(this->panel64);
			this->flowLayoutPanel3->Controls->Add(this->panel63);
			this->flowLayoutPanel3->Controls->Add(this->panel62);
			this->flowLayoutPanel3->Controls->Add(this->panel61);
			this->flowLayoutPanel3->Controls->Add(this->panel60);
			this->flowLayoutPanel3->Controls->Add(this->panel59);
			this->flowLayoutPanel3->Controls->Add(this->panel58);
			this->flowLayoutPanel3->Controls->Add(this->panel57);
			this->flowLayoutPanel3->Controls->Add(this->panel56);
			this->flowLayoutPanel3->Controls->Add(this->panel55);
			this->flowLayoutPanel3->Controls->Add(this->panel54);
			this->flowLayoutPanel3->Controls->Add(this->panel53);
			this->flowLayoutPanel3->Controls->Add(this->panel52);
			this->flowLayoutPanel3->Controls->Add(this->panel51);
			this->flowLayoutPanel3->Controls->Add(this->panel50);
			this->flowLayoutPanel3->Controls->Add(this->panel49);
			this->flowLayoutPanel3->Controls->Add(this->panel48);
			this->flowLayoutPanel3->Location = System::Drawing::Point(3, 93);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel3->TabIndex = 2;
			this->flowLayoutPanel3->Visible = false;
			this->flowLayoutPanel3->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel3_Click);
			// 
			// panel55
			// 
			this->panel55->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel55->Location = System::Drawing::Point(633, 3);
			this->panel55->Name = L"panel55";
			this->panel55->Size = System::Drawing::Size(36, 36);
			this->panel55->TabIndex = 14;
			// 
			// panel70
			// 
			this->panel70->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel70->Location = System::Drawing::Point(3, 3);
			this->panel70->Name = L"panel70";
			this->panel70->Size = System::Drawing::Size(36, 36);
			this->panel70->TabIndex = 26;
			// 
			// panel69
			// 
			this->panel69->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel69->Location = System::Drawing::Point(45, 3);
			this->panel69->Name = L"panel69";
			this->panel69->Size = System::Drawing::Size(36, 36);
			this->panel69->TabIndex = 23;
			// 
			// panel68
			// 
			this->panel68->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel68->Location = System::Drawing::Point(87, 3);
			this->panel68->Name = L"panel68";
			this->panel68->Size = System::Drawing::Size(36, 36);
			this->panel68->TabIndex = 25;
			// 
			// panel67
			// 
			this->panel67->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel67->Location = System::Drawing::Point(129, 3);
			this->panel67->Name = L"panel67";
			this->panel67->Size = System::Drawing::Size(36, 36);
			this->panel67->TabIndex = 24;
			// 
			// panel66
			// 
			this->panel66->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel66->Location = System::Drawing::Point(171, 3);
			this->panel66->Name = L"panel66";
			this->panel66->Size = System::Drawing::Size(36, 36);
			this->panel66->TabIndex = 22;
			// 
			// panel65
			// 
			this->panel65->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel65->Location = System::Drawing::Point(213, 3);
			this->panel65->Name = L"panel65";
			this->panel65->Size = System::Drawing::Size(36, 36);
			this->panel65->TabIndex = 5;
			// 
			// panel64
			// 
			this->panel64->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel64->Location = System::Drawing::Point(255, 3);
			this->panel64->Name = L"panel64";
			this->panel64->Size = System::Drawing::Size(36, 36);
			this->panel64->TabIndex = 6;
			// 
			// panel63
			// 
			this->panel63->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel63->Location = System::Drawing::Point(297, 3);
			this->panel63->Name = L"panel63";
			this->panel63->Size = System::Drawing::Size(36, 36);
			this->panel63->TabIndex = 7;
			// 
			// panel62
			// 
			this->panel62->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel62->Location = System::Drawing::Point(339, 3);
			this->panel62->Name = L"panel62";
			this->panel62->Size = System::Drawing::Size(36, 36);
			this->panel62->TabIndex = 8;
			// 
			// panel61
			// 
			this->panel61->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel61->Location = System::Drawing::Point(381, 3);
			this->panel61->Name = L"panel61";
			this->panel61->Size = System::Drawing::Size(36, 36);
			this->panel61->TabIndex = 9;
			// 
			// panel60
			// 
			this->panel60->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel60->Location = System::Drawing::Point(423, 3);
			this->panel60->Name = L"panel60";
			this->panel60->Size = System::Drawing::Size(36, 36);
			this->panel60->TabIndex = 10;
			// 
			// panel59
			// 
			this->panel59->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel59->Location = System::Drawing::Point(465, 3);
			this->panel59->Name = L"panel59";
			this->panel59->Size = System::Drawing::Size(36, 36);
			this->panel59->TabIndex = 13;
			// 
			// panel58
			// 
			this->panel58->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel58->Location = System::Drawing::Point(507, 3);
			this->panel58->Name = L"panel58";
			this->panel58->Size = System::Drawing::Size(36, 36);
			this->panel58->TabIndex = 11;
			// 
			// panel57
			// 
			this->panel57->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel57->Location = System::Drawing::Point(549, 3);
			this->panel57->Name = L"panel57";
			this->panel57->Size = System::Drawing::Size(36, 36);
			this->panel57->TabIndex = 12;
			// 
			// panel56
			// 
			this->panel56->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel56->Location = System::Drawing::Point(591, 3);
			this->panel56->Name = L"panel56";
			this->panel56->Size = System::Drawing::Size(36, 36);
			this->panel56->TabIndex = 21;
			// 
			// panel54
			// 
			this->panel54->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel54->Location = System::Drawing::Point(675, 3);
			this->panel54->Name = L"panel54";
			this->panel54->Size = System::Drawing::Size(36, 36);
			this->panel54->TabIndex = 15;
			// 
			// panel53
			// 
			this->panel53->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel53->Location = System::Drawing::Point(717, 3);
			this->panel53->Name = L"panel53";
			this->panel53->Size = System::Drawing::Size(36, 36);
			this->panel53->TabIndex = 16;
			// 
			// panel52
			// 
			this->panel52->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel52->Location = System::Drawing::Point(759, 3);
			this->panel52->Name = L"panel52";
			this->panel52->Size = System::Drawing::Size(36, 36);
			this->panel52->TabIndex = 17;
			// 
			// panel51
			// 
			this->panel51->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel51->Location = System::Drawing::Point(801, 3);
			this->panel51->Name = L"panel51";
			this->panel51->Size = System::Drawing::Size(36, 36);
			this->panel51->TabIndex = 18;
			// 
			// panel50
			// 
			this->panel50->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel50->Location = System::Drawing::Point(843, 3);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(36, 36);
			this->panel50->TabIndex = 19;
			// 
			// panel49
			// 
			this->panel49->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel49->Location = System::Drawing::Point(885, 3);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(36, 36);
			this->panel49->TabIndex = 20;
			// 
			// panel48
			// 
			this->panel48->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel48->Location = System::Drawing::Point(927, 3);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(36, 36);
			this->panel48->TabIndex = 4;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel2->Controls->Add(this->panel25);
			this->flowLayoutPanel2->Controls->Add(this->panel26);
			this->flowLayoutPanel2->Controls->Add(this->panel27);
			this->flowLayoutPanel2->Controls->Add(this->panel28);
			this->flowLayoutPanel2->Controls->Add(this->panel29);
			this->flowLayoutPanel2->Controls->Add(this->panel30);
			this->flowLayoutPanel2->Controls->Add(this->panel31);
			this->flowLayoutPanel2->Controls->Add(this->panel32);
			this->flowLayoutPanel2->Controls->Add(this->panel33);
			this->flowLayoutPanel2->Controls->Add(this->panel34);
			this->flowLayoutPanel2->Controls->Add(this->panel35);
			this->flowLayoutPanel2->Controls->Add(this->panel36);
			this->flowLayoutPanel2->Controls->Add(this->panel37);
			this->flowLayoutPanel2->Controls->Add(this->panel38);
			this->flowLayoutPanel2->Controls->Add(this->panel39);
			this->flowLayoutPanel2->Controls->Add(this->panel40);
			this->flowLayoutPanel2->Controls->Add(this->panel41);
			this->flowLayoutPanel2->Controls->Add(this->panel42);
			this->flowLayoutPanel2->Controls->Add(this->panel43);
			this->flowLayoutPanel2->Controls->Add(this->panel44);
			this->flowLayoutPanel2->Controls->Add(this->panel45);
			this->flowLayoutPanel2->Controls->Add(this->panel46);
			this->flowLayoutPanel2->Controls->Add(this->panel47);
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 48);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel2->TabIndex = 1;
			this->flowLayoutPanel2->Visible = false;
			this->flowLayoutPanel2->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel2_Click);
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel25->Location = System::Drawing::Point(3, 3);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(36, 36);
			this->panel25->TabIndex = 4;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel26->Location = System::Drawing::Point(45, 3);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(36, 36);
			this->panel26->TabIndex = 20;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel27->Location = System::Drawing::Point(87, 3);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(36, 36);
			this->panel27->TabIndex = 19;
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel28->Location = System::Drawing::Point(129, 3);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(36, 36);
			this->panel28->TabIndex = 18;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel29->Location = System::Drawing::Point(171, 3);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(36, 36);
			this->panel29->TabIndex = 17;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel30->Location = System::Drawing::Point(213, 3);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(36, 36);
			this->panel30->TabIndex = 16;
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel31->Location = System::Drawing::Point(255, 3);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(36, 36);
			this->panel31->TabIndex = 15;
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel32->Location = System::Drawing::Point(297, 3);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(36, 36);
			this->panel32->TabIndex = 14;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel33->Location = System::Drawing::Point(339, 3);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(36, 36);
			this->panel33->TabIndex = 21;
			// 
			// panel34
			// 
			this->panel34->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel34->Location = System::Drawing::Point(381, 3);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(36, 36);
			this->panel34->TabIndex = 12;
			// 
			// panel35
			// 
			this->panel35->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel35->Location = System::Drawing::Point(423, 3);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(36, 36);
			this->panel35->TabIndex = 11;
			// 
			// panel36
			// 
			this->panel36->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel36->Location = System::Drawing::Point(465, 3);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(36, 36);
			this->panel36->TabIndex = 13;
			// 
			// panel37
			// 
			this->panel37->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel37->Location = System::Drawing::Point(507, 3);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(36, 36);
			this->panel37->TabIndex = 10;
			// 
			// panel38
			// 
			this->panel38->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel38->Location = System::Drawing::Point(549, 3);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(36, 36);
			this->panel38->TabIndex = 9;
			// 
			// panel39
			// 
			this->panel39->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel39->Location = System::Drawing::Point(591, 3);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(36, 36);
			this->panel39->TabIndex = 8;
			// 
			// panel40
			// 
			this->panel40->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel40->Location = System::Drawing::Point(633, 3);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(36, 36);
			this->panel40->TabIndex = 7;
			// 
			// panel41
			// 
			this->panel41->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel41->Location = System::Drawing::Point(675, 3);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(36, 36);
			this->panel41->TabIndex = 6;
			// 
			// panel42
			// 
			this->panel42->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel42->Location = System::Drawing::Point(717, 3);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(36, 36);
			this->panel42->TabIndex = 5;
			// 
			// panel43
			// 
			this->panel43->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel43->Location = System::Drawing::Point(759, 3);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(36, 36);
			this->panel43->TabIndex = 22;
			// 
			// panel44
			// 
			this->panel44->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel44->Location = System::Drawing::Point(801, 3);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(36, 36);
			this->panel44->TabIndex = 24;
			// 
			// panel45
			// 
			this->panel45->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel45->Location = System::Drawing::Point(843, 3);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(36, 36);
			this->panel45->TabIndex = 25;
			// 
			// panel46
			// 
			this->panel46->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel46->Location = System::Drawing::Point(885, 3);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(36, 36);
			this->panel46->TabIndex = 23;
			// 
			// panel47
			// 
			this->panel47->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel47->Location = System::Drawing::Point(927, 3);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(36, 36);
			this->panel47->TabIndex = 26;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::AliceBlue;
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Controls->Add(this->panel4);
			this->flowLayoutPanel1->Controls->Add(this->panel5);
			this->flowLayoutPanel1->Controls->Add(this->panel6);
			this->flowLayoutPanel1->Controls->Add(this->panel7);
			this->flowLayoutPanel1->Controls->Add(this->panel8);
			this->flowLayoutPanel1->Controls->Add(this->panel9);
			this->flowLayoutPanel1->Controls->Add(this->panel10);
			this->flowLayoutPanel1->Controls->Add(this->panel11);
			this->flowLayoutPanel1->Controls->Add(this->panel12);
			this->flowLayoutPanel1->Controls->Add(this->panel13);
			this->flowLayoutPanel1->Controls->Add(this->panel14);
			this->flowLayoutPanel1->Controls->Add(this->panel15);
			this->flowLayoutPanel1->Controls->Add(this->panel16);
			this->flowLayoutPanel1->Controls->Add(this->panel17);
			this->flowLayoutPanel1->Controls->Add(this->panel18);
			this->flowLayoutPanel1->Controls->Add(this->panel19);
			this->flowLayoutPanel1->Controls->Add(this->panel20);
			this->flowLayoutPanel1->Controls->Add(this->panel21);
			this->flowLayoutPanel1->Controls->Add(this->panel22);
			this->flowLayoutPanel1->Controls->Add(this->panel23);
			this->flowLayoutPanel1->Controls->Add(this->panel24);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(980, 39);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Visible = false;
			this->flowLayoutPanel1->Click += gcnew System::EventHandler(this, &MainForm::flowLayoutPanel1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(36, 36);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel3->Location = System::Drawing::Point(45, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(36, 36);
			this->panel3->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel4->Location = System::Drawing::Point(87, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(36, 36);
			this->panel4->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel5->Location = System::Drawing::Point(129, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(36, 36);
			this->panel5->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel6->Location = System::Drawing::Point(171, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(36, 36);
			this->panel6->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel7->Location = System::Drawing::Point(213, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(36, 36);
			this->panel7->TabIndex = 1;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel8->Location = System::Drawing::Point(255, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(36, 36);
			this->panel8->TabIndex = 1;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel9->Location = System::Drawing::Point(297, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(36, 36);
			this->panel9->TabIndex = 1;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel10->Location = System::Drawing::Point(339, 3);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(36, 36);
			this->panel10->TabIndex = 1;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel11->Location = System::Drawing::Point(381, 3);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(36, 36);
			this->panel11->TabIndex = 1;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel12->Location = System::Drawing::Point(423, 3);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(36, 36);
			this->panel12->TabIndex = 1;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel13->Location = System::Drawing::Point(465, 3);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(36, 36);
			this->panel13->TabIndex = 1;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel14->Location = System::Drawing::Point(507, 3);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(36, 36);
			this->panel14->TabIndex = 1;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel15->Location = System::Drawing::Point(549, 3);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(36, 36);
			this->panel15->TabIndex = 1;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel16->Location = System::Drawing::Point(591, 3);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(36, 36);
			this->panel16->TabIndex = 1;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel17->Location = System::Drawing::Point(633, 3);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(36, 36);
			this->panel17->TabIndex = 1;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel18->Location = System::Drawing::Point(675, 3);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(36, 36);
			this->panel18->TabIndex = 1;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel19->Location = System::Drawing::Point(717, 3);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(36, 36);
			this->panel19->TabIndex = 1;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel20->Location = System::Drawing::Point(759, 3);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(36, 36);
			this->panel20->TabIndex = 2;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel21->Location = System::Drawing::Point(801, 3);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(36, 36);
			this->panel21->TabIndex = 3;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel22->Location = System::Drawing::Point(843, 3);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(36, 36);
			this->panel22->TabIndex = 3;
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel23->Location = System::Drawing::Point(885, 3);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(36, 36);
			this->panel23->TabIndex = 3;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel24->Location = System::Drawing::Point(927, 3);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(36, 36);
			this->panel24->TabIndex = 3;
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
			this->flowLayoutPanel8->ResumeLayout(false);
			this->flowLayoutPanel7->ResumeLayout(false);
			this->flowLayoutPanel6->ResumeLayout(false);
			this->flowLayoutPanel5->ResumeLayout(false);
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
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
private: System::Void maskedTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
