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
			
			this->panels.push_back(panel70);
			this->panels.push_back(panel69);
			this->panels.push_back(panel68);
			this->panels.push_back(panel67);
			this->panels.push_back(panel66);
			this->panels.push_back(panel65);
			this->panels.push_back(panel64);
			this->panels.push_back(panel63);
			this->panels.push_back(panel62);
			this->panels.push_back(panel61);
			this->panels.push_back(panel60);
			this->panels.push_back(panel59);
			this->panels.push_back(panel58);
			this->panels.push_back(panel57);
			this->panels.push_back(panel56);
			this->panels.push_back(panel55);
			this->panels.push_back(panel54);
			this->panels.push_back(panel53);
			this->panels.push_back(panel52);
			this->panels.push_back(panel51);
			this->panels.push_back(panel50);
			this->panels.push_back(panel49);
			this->panels.push_back(panel48);

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

			this->labels.push_back(label3);
			this->labels.push_back(label4);
			this->labels.push_back(label5);
			this->labels.push_back(label6);
			this->labels.push_back(label7);
			this->labels.push_back(label8);
			this->labels.push_back(label9);
			this->labels.push_back(label10);
			this->labels.push_back(label11);
			this->labels.push_back(label12);
			this->labels.push_back(label13);
			this->labels.push_back(label14);
			this->labels.push_back(label15);
			this->labels.push_back(label16);
			this->labels.push_back(label17);
			this->labels.push_back(label18);
			this->labels.push_back(label19);
			this->labels.push_back(label20);
			this->labels.push_back(label21);
			this->labels.push_back(label22);
			this->labels.push_back(label23);
			this->labels.push_back(label24);

			this->labels.push_back(label25);
			this->labels.push_back(label26);
			this->labels.push_back(label27);
			this->labels.push_back(label28);
			this->labels.push_back(label29);
			this->labels.push_back(label30);
			this->labels.push_back(label31);
			this->labels.push_back(label32);
			this->labels.push_back(label33);
			this->labels.push_back(label34);
			this->labels.push_back(label35);
			this->labels.push_back(label36);
			this->labels.push_back(label37);
			this->labels.push_back(label38);
			this->labels.push_back(label39);
			this->labels.push_back(label40);
			this->labels.push_back(label41);
			this->labels.push_back(label42);
			this->labels.push_back(label43);
			this->labels.push_back(label44);
			this->labels.push_back(label45);
			this->labels.push_back(label46);
			this->labels.push_back(label47);

			this->labels.push_back(label48);
			this->labels.push_back(label49);
			this->labels.push_back(label50);
			this->labels.push_back(label51);
			this->labels.push_back(label52);
			this->labels.push_back(label53);
			this->labels.push_back(label54);
			this->labels.push_back(label55);
			this->labels.push_back(label56);
			this->labels.push_back(label57);
			this->labels.push_back(label58);
			this->labels.push_back(label59);
			this->labels.push_back(label60);
			this->labels.push_back(label61);
			this->labels.push_back(label62);
			this->labels.push_back(label63);
			this->labels.push_back(label64);
			this->labels.push_back(label65);
			this->labels.push_back(label66);
			this->labels.push_back(label67);
			this->labels.push_back(label68);
			this->labels.push_back(label69);
			this->labels.push_back(label70);

			this->labels.push_back(label71);
			this->labels.push_back(label72);
			this->labels.push_back(label73);
			this->labels.push_back(label74);
			this->labels.push_back(label75);
			this->labels.push_back(label76);
			this->labels.push_back(label77);
			this->labels.push_back(label78);
			this->labels.push_back(label79);
			this->labels.push_back(label80);
			this->labels.push_back(label81);
			this->labels.push_back(label82);
			this->labels.push_back(label83);
			this->labels.push_back(label84);
			this->labels.push_back(label85);
			this->labels.push_back(label86);
			this->labels.push_back(label87);
			this->labels.push_back(label88);
			this->labels.push_back(label89);
			this->labels.push_back(label90);
			this->labels.push_back(label91);
			this->labels.push_back(label92);
			this->labels.push_back(label93);

			this->labels.push_back(label94);
			this->labels.push_back(label95);
			this->labels.push_back(label96);
			this->labels.push_back(label97);
			this->labels.push_back(label98);
			this->labels.push_back(label99);
			this->labels.push_back(label100);
			this->labels.push_back(label101);
			this->labels.push_back(label102);
			this->labels.push_back(label103);
			this->labels.push_back(label104);
			this->labels.push_back(label105);
			this->labels.push_back(label106);
			this->labels.push_back(label107);
			this->labels.push_back(label108);
			this->labels.push_back(label109);
			this->labels.push_back(label110);
			this->labels.push_back(label111);
			this->labels.push_back(label112);
			this->labels.push_back(label113);
			this->labels.push_back(label114);
			this->labels.push_back(label115);
			this->labels.push_back(label116);

			this->labels.push_back(label117);
			this->labels.push_back(label118);
			this->labels.push_back(label119);
			this->labels.push_back(label120);
			this->labels.push_back(label121);
			this->labels.push_back(label122);
			this->labels.push_back(label123);
			this->labels.push_back(label124);
			this->labels.push_back(label125);
			this->labels.push_back(label126);
			this->labels.push_back(label127);
			this->labels.push_back(label128);
			this->labels.push_back(label129);
			this->labels.push_back(label130);
			this->labels.push_back(label131);
			this->labels.push_back(label132);
			this->labels.push_back(label133);
			this->labels.push_back(label134);
			this->labels.push_back(label135);
			this->labels.push_back(label136);
			this->labels.push_back(label137);
			this->labels.push_back(label138);
			this->labels.push_back(label139);

			this->labels.push_back(label140);
			this->labels.push_back(label141);
			this->labels.push_back(label142);
			this->labels.push_back(label143);
			this->labels.push_back(label144);
			this->labels.push_back(label145);
			this->labels.push_back(label146);
			this->labels.push_back(label147);
			this->labels.push_back(label148);
			this->labels.push_back(label149);
			this->labels.push_back(label150);
			this->labels.push_back(label151);
			this->labels.push_back(label152);
			this->labels.push_back(label153);
			this->labels.push_back(label154);
			this->labels.push_back(label155);
			this->labels.push_back(label156);
			this->labels.push_back(label157);
			this->labels.push_back(label158);
			this->labels.push_back(label159);
			this->labels.push_back(label160);
			this->labels.push_back(label161);
			this->labels.push_back(label162);

			this->labels.push_back(label163);
			this->labels.push_back(label164);
			this->labels.push_back(label165);
			this->labels.push_back(label166);
			this->labels.push_back(label167);
			this->labels.push_back(label168);
			this->labels.push_back(label169);
			this->labels.push_back(label170);
			this->labels.push_back(label171);
			this->labels.push_back(label172);
			this->labels.push_back(label173);
			this->labels.push_back(label174);
			this->labels.push_back(label175);
			this->labels.push_back(label176);
			this->labels.push_back(label177);
			this->labels.push_back(label178);
			this->labels.push_back(label179);
			this->labels.push_back(label180);
			this->labels.push_back(label181);
			this->labels.push_back(label182);
			this->labels.push_back(label183);
			this->labels.push_back(label184);
			this->labels.push_back(label185);
			this->labels.push_back(label186);

			for (int i = 0; i < 8; i++)
			{
				actions.push_back(0);
			}

			for (int i = 0; i < 184; i++)
			{
				labels[i]->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				labels[i]->AutoSize = false;
				labels[i]->Dock = System::Windows::Forms::DockStyle::Fill;
				labels[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
			}

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
	private: cliext::vector<System::Windows::Forms::Label^> labels;
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
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label164;
private: System::Windows::Forms::Label^ label165;
private: System::Windows::Forms::Label^ label166;
private: System::Windows::Forms::Label^ label167;
private: System::Windows::Forms::Label^ label168;
private: System::Windows::Forms::Label^ label169;
private: System::Windows::Forms::Label^ label170;
private: System::Windows::Forms::Label^ label171;
private: System::Windows::Forms::Label^ label172;
private: System::Windows::Forms::Label^ label173;
private: System::Windows::Forms::Label^ label174;
private: System::Windows::Forms::Label^ label175;
private: System::Windows::Forms::Label^ label176;
private: System::Windows::Forms::Label^ label177;
private: System::Windows::Forms::Label^ label178;
private: System::Windows::Forms::Label^ label179;
private: System::Windows::Forms::Label^ label180;
private: System::Windows::Forms::Label^ label181;
private: System::Windows::Forms::Label^ label182;
private: System::Windows::Forms::Label^ label183;
private: System::Windows::Forms::Label^ label184;
private: System::Windows::Forms::Label^ label185;
private: System::Windows::Forms::Label^ label186;
private: System::Windows::Forms::Label^ label141;
private: System::Windows::Forms::Label^ label142;
private: System::Windows::Forms::Label^ label143;
private: System::Windows::Forms::Label^ label144;
private: System::Windows::Forms::Label^ label145;
private: System::Windows::Forms::Label^ label146;
private: System::Windows::Forms::Label^ label147;
private: System::Windows::Forms::Label^ label148;
private: System::Windows::Forms::Label^ label149;
private: System::Windows::Forms::Label^ label150;
private: System::Windows::Forms::Label^ label151;
private: System::Windows::Forms::Label^ label152;
private: System::Windows::Forms::Label^ label153;
private: System::Windows::Forms::Label^ label154;
private: System::Windows::Forms::Label^ label155;
private: System::Windows::Forms::Label^ label156;
private: System::Windows::Forms::Label^ label157;
private: System::Windows::Forms::Label^ label158;
private: System::Windows::Forms::Label^ label159;
private: System::Windows::Forms::Label^ label160;
private: System::Windows::Forms::Label^ label161;
private: System::Windows::Forms::Label^ label162;
private: System::Windows::Forms::Label^ label163;
private: System::Windows::Forms::Label^ label118;
private: System::Windows::Forms::Label^ label119;
private: System::Windows::Forms::Label^ label120;
private: System::Windows::Forms::Label^ label121;
private: System::Windows::Forms::Label^ label122;
private: System::Windows::Forms::Label^ label123;
private: System::Windows::Forms::Label^ label124;
private: System::Windows::Forms::Label^ label125;
private: System::Windows::Forms::Label^ label126;
private: System::Windows::Forms::Label^ label127;
private: System::Windows::Forms::Label^ label128;
private: System::Windows::Forms::Label^ label129;
private: System::Windows::Forms::Label^ label130;
private: System::Windows::Forms::Label^ label131;
private: System::Windows::Forms::Label^ label132;
private: System::Windows::Forms::Label^ label133;
private: System::Windows::Forms::Label^ label134;
private: System::Windows::Forms::Label^ label135;
private: System::Windows::Forms::Label^ label136;
private: System::Windows::Forms::Label^ label137;
private: System::Windows::Forms::Label^ label138;
private: System::Windows::Forms::Label^ label139;
private: System::Windows::Forms::Label^ label140;
private: System::Windows::Forms::Label^ label95;
private: System::Windows::Forms::Label^ label96;
private: System::Windows::Forms::Label^ label97;
private: System::Windows::Forms::Label^ label98;
private: System::Windows::Forms::Label^ label99;
private: System::Windows::Forms::Label^ label100;
private: System::Windows::Forms::Label^ label101;
private: System::Windows::Forms::Label^ label102;
private: System::Windows::Forms::Label^ label103;
private: System::Windows::Forms::Label^ label104;
private: System::Windows::Forms::Label^ label105;
private: System::Windows::Forms::Label^ label106;
private: System::Windows::Forms::Label^ label107;
private: System::Windows::Forms::Label^ label108;
private: System::Windows::Forms::Label^ label109;
private: System::Windows::Forms::Label^ label110;
private: System::Windows::Forms::Label^ label111;
private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::Label^ label113;
private: System::Windows::Forms::Label^ label114;
private: System::Windows::Forms::Label^ label115;
private: System::Windows::Forms::Label^ label116;
private: System::Windows::Forms::Label^ label117;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Label^ label83;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::Label^ label88;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::Label^ label90;
private: System::Windows::Forms::Label^ label91;
private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::Label^ label93;
private: System::Windows::Forms::Label^ label94;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::GroupBox^ groupBox_del;
private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
private: System::Windows::Forms::Button^ button_delAction;
private: System::Windows::Forms::Label^ label188;
private: System::Windows::Forms::GroupBox^ groupBox_read;
private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label187;






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
			this->groupBox_del = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button_delAction = (gcnew System::Windows::Forms::Button());
			this->label188 = (gcnew System::Windows::Forms::Label());
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
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->panel164 = (gcnew System::Windows::Forms::Panel());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->panel165 = (gcnew System::Windows::Forms::Panel());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->panel166 = (gcnew System::Windows::Forms::Panel());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->panel167 = (gcnew System::Windows::Forms::Panel());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->panel168 = (gcnew System::Windows::Forms::Panel());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->panel169 = (gcnew System::Windows::Forms::Panel());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->panel170 = (gcnew System::Windows::Forms::Panel());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->panel171 = (gcnew System::Windows::Forms::Panel());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->panel172 = (gcnew System::Windows::Forms::Panel());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->panel173 = (gcnew System::Windows::Forms::Panel());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->panel174 = (gcnew System::Windows::Forms::Panel());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->panel175 = (gcnew System::Windows::Forms::Panel());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->panel176 = (gcnew System::Windows::Forms::Panel());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->panel177 = (gcnew System::Windows::Forms::Panel());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->panel178 = (gcnew System::Windows::Forms::Panel());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->panel179 = (gcnew System::Windows::Forms::Panel());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->panel180 = (gcnew System::Windows::Forms::Panel());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->panel181 = (gcnew System::Windows::Forms::Panel());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->panel182 = (gcnew System::Windows::Forms::Panel());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->panel183 = (gcnew System::Windows::Forms::Panel());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->panel184 = (gcnew System::Windows::Forms::Panel());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->panel185 = (gcnew System::Windows::Forms::Panel());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel140 = (gcnew System::Windows::Forms::Panel());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->panel141 = (gcnew System::Windows::Forms::Panel());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->panel142 = (gcnew System::Windows::Forms::Panel());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->panel143 = (gcnew System::Windows::Forms::Panel());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->panel144 = (gcnew System::Windows::Forms::Panel());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->panel145 = (gcnew System::Windows::Forms::Panel());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->panel146 = (gcnew System::Windows::Forms::Panel());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->panel147 = (gcnew System::Windows::Forms::Panel());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->panel148 = (gcnew System::Windows::Forms::Panel());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->panel149 = (gcnew System::Windows::Forms::Panel());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->panel150 = (gcnew System::Windows::Forms::Panel());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->panel151 = (gcnew System::Windows::Forms::Panel());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->panel152 = (gcnew System::Windows::Forms::Panel());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->panel153 = (gcnew System::Windows::Forms::Panel());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->panel154 = (gcnew System::Windows::Forms::Panel());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->panel155 = (gcnew System::Windows::Forms::Panel());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->panel156 = (gcnew System::Windows::Forms::Panel());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->panel157 = (gcnew System::Windows::Forms::Panel());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->panel158 = (gcnew System::Windows::Forms::Panel());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->panel159 = (gcnew System::Windows::Forms::Panel());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->panel160 = (gcnew System::Windows::Forms::Panel());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->panel161 = (gcnew System::Windows::Forms::Panel());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->panel162 = (gcnew System::Windows::Forms::Panel());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel117 = (gcnew System::Windows::Forms::Panel());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->panel118 = (gcnew System::Windows::Forms::Panel());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->panel119 = (gcnew System::Windows::Forms::Panel());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->panel120 = (gcnew System::Windows::Forms::Panel());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->panel121 = (gcnew System::Windows::Forms::Panel());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->panel122 = (gcnew System::Windows::Forms::Panel());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->panel123 = (gcnew System::Windows::Forms::Panel());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->panel124 = (gcnew System::Windows::Forms::Panel());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->panel125 = (gcnew System::Windows::Forms::Panel());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->panel126 = (gcnew System::Windows::Forms::Panel());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->panel127 = (gcnew System::Windows::Forms::Panel());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->panel128 = (gcnew System::Windows::Forms::Panel());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->panel129 = (gcnew System::Windows::Forms::Panel());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->panel130 = (gcnew System::Windows::Forms::Panel());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->panel131 = (gcnew System::Windows::Forms::Panel());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->panel132 = (gcnew System::Windows::Forms::Panel());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->panel133 = (gcnew System::Windows::Forms::Panel());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->panel134 = (gcnew System::Windows::Forms::Panel());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->panel135 = (gcnew System::Windows::Forms::Panel());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->panel136 = (gcnew System::Windows::Forms::Panel());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->panel137 = (gcnew System::Windows::Forms::Panel());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->panel138 = (gcnew System::Windows::Forms::Panel());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->panel139 = (gcnew System::Windows::Forms::Panel());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel94 = (gcnew System::Windows::Forms::Panel());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->panel95 = (gcnew System::Windows::Forms::Panel());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->panel96 = (gcnew System::Windows::Forms::Panel());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->panel97 = (gcnew System::Windows::Forms::Panel());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->panel98 = (gcnew System::Windows::Forms::Panel());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->panel99 = (gcnew System::Windows::Forms::Panel());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->panel100 = (gcnew System::Windows::Forms::Panel());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->panel101 = (gcnew System::Windows::Forms::Panel());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->panel102 = (gcnew System::Windows::Forms::Panel());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->panel103 = (gcnew System::Windows::Forms::Panel());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->panel104 = (gcnew System::Windows::Forms::Panel());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->panel105 = (gcnew System::Windows::Forms::Panel());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->panel106 = (gcnew System::Windows::Forms::Panel());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->panel107 = (gcnew System::Windows::Forms::Panel());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->panel108 = (gcnew System::Windows::Forms::Panel());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->panel109 = (gcnew System::Windows::Forms::Panel());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->panel110 = (gcnew System::Windows::Forms::Panel());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->panel111 = (gcnew System::Windows::Forms::Panel());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->panel112 = (gcnew System::Windows::Forms::Panel());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->panel113 = (gcnew System::Windows::Forms::Panel());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->panel114 = (gcnew System::Windows::Forms::Panel());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->panel115 = (gcnew System::Windows::Forms::Panel());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->panel116 = (gcnew System::Windows::Forms::Panel());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel71 = (gcnew System::Windows::Forms::Panel());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->panel72 = (gcnew System::Windows::Forms::Panel());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->panel73 = (gcnew System::Windows::Forms::Panel());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->panel74 = (gcnew System::Windows::Forms::Panel());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->panel75 = (gcnew System::Windows::Forms::Panel());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->panel76 = (gcnew System::Windows::Forms::Panel());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->panel77 = (gcnew System::Windows::Forms::Panel());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->panel78 = (gcnew System::Windows::Forms::Panel());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->panel79 = (gcnew System::Windows::Forms::Panel());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->panel80 = (gcnew System::Windows::Forms::Panel());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->panel81 = (gcnew System::Windows::Forms::Panel());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->panel82 = (gcnew System::Windows::Forms::Panel());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->panel83 = (gcnew System::Windows::Forms::Panel());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->panel84 = (gcnew System::Windows::Forms::Panel());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->panel85 = (gcnew System::Windows::Forms::Panel());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->panel86 = (gcnew System::Windows::Forms::Panel());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->panel87 = (gcnew System::Windows::Forms::Panel());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->panel88 = (gcnew System::Windows::Forms::Panel());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->panel89 = (gcnew System::Windows::Forms::Panel());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->panel90 = (gcnew System::Windows::Forms::Panel());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->panel91 = (gcnew System::Windows::Forms::Panel());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->panel92 = (gcnew System::Windows::Forms::Panel());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->panel93 = (gcnew System::Windows::Forms::Panel());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel70 = (gcnew System::Windows::Forms::Panel());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->panel69 = (gcnew System::Windows::Forms::Panel());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->panel68 = (gcnew System::Windows::Forms::Panel());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->panel67 = (gcnew System::Windows::Forms::Panel());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->panel66 = (gcnew System::Windows::Forms::Panel());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->panel65 = (gcnew System::Windows::Forms::Panel());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->panel64 = (gcnew System::Windows::Forms::Panel());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->panel63 = (gcnew System::Windows::Forms::Panel());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->panel62 = (gcnew System::Windows::Forms::Panel());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->panel61 = (gcnew System::Windows::Forms::Panel());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->panel60 = (gcnew System::Windows::Forms::Panel());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->panel59 = (gcnew System::Windows::Forms::Panel());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->panel58 = (gcnew System::Windows::Forms::Panel());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->panel57 = (gcnew System::Windows::Forms::Panel());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->panel56 = (gcnew System::Windows::Forms::Panel());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->panel55 = (gcnew System::Windows::Forms::Panel());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->panel54 = (gcnew System::Windows::Forms::Panel());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->panel53 = (gcnew System::Windows::Forms::Panel());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->panel52 = (gcnew System::Windows::Forms::Panel());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->panel51 = (gcnew System::Windows::Forms::Panel());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->groupBox_read = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->panel_Main->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox_del->SuspendLayout();
			this->groupBox_add->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->flowLayoutPanel8->SuspendLayout();
			this->panel163->SuspendLayout();
			this->panel164->SuspendLayout();
			this->panel165->SuspendLayout();
			this->panel166->SuspendLayout();
			this->panel167->SuspendLayout();
			this->panel168->SuspendLayout();
			this->panel169->SuspendLayout();
			this->panel170->SuspendLayout();
			this->panel171->SuspendLayout();
			this->panel172->SuspendLayout();
			this->panel173->SuspendLayout();
			this->panel174->SuspendLayout();
			this->panel175->SuspendLayout();
			this->panel176->SuspendLayout();
			this->panel177->SuspendLayout();
			this->panel178->SuspendLayout();
			this->panel179->SuspendLayout();
			this->panel180->SuspendLayout();
			this->panel181->SuspendLayout();
			this->panel182->SuspendLayout();
			this->panel183->SuspendLayout();
			this->panel184->SuspendLayout();
			this->panel185->SuspendLayout();
			this->flowLayoutPanel7->SuspendLayout();
			this->panel140->SuspendLayout();
			this->panel141->SuspendLayout();
			this->panel142->SuspendLayout();
			this->panel143->SuspendLayout();
			this->panel144->SuspendLayout();
			this->panel145->SuspendLayout();
			this->panel146->SuspendLayout();
			this->panel147->SuspendLayout();
			this->panel148->SuspendLayout();
			this->panel149->SuspendLayout();
			this->panel150->SuspendLayout();
			this->panel151->SuspendLayout();
			this->panel152->SuspendLayout();
			this->panel153->SuspendLayout();
			this->panel154->SuspendLayout();
			this->panel155->SuspendLayout();
			this->panel156->SuspendLayout();
			this->panel157->SuspendLayout();
			this->panel158->SuspendLayout();
			this->panel159->SuspendLayout();
			this->panel160->SuspendLayout();
			this->panel161->SuspendLayout();
			this->panel162->SuspendLayout();
			this->flowLayoutPanel6->SuspendLayout();
			this->panel117->SuspendLayout();
			this->panel118->SuspendLayout();
			this->panel119->SuspendLayout();
			this->panel120->SuspendLayout();
			this->panel121->SuspendLayout();
			this->panel122->SuspendLayout();
			this->panel123->SuspendLayout();
			this->panel124->SuspendLayout();
			this->panel125->SuspendLayout();
			this->panel126->SuspendLayout();
			this->panel127->SuspendLayout();
			this->panel128->SuspendLayout();
			this->panel129->SuspendLayout();
			this->panel130->SuspendLayout();
			this->panel131->SuspendLayout();
			this->panel132->SuspendLayout();
			this->panel133->SuspendLayout();
			this->panel134->SuspendLayout();
			this->panel135->SuspendLayout();
			this->panel136->SuspendLayout();
			this->panel137->SuspendLayout();
			this->panel138->SuspendLayout();
			this->panel139->SuspendLayout();
			this->flowLayoutPanel5->SuspendLayout();
			this->panel94->SuspendLayout();
			this->panel95->SuspendLayout();
			this->panel96->SuspendLayout();
			this->panel97->SuspendLayout();
			this->panel98->SuspendLayout();
			this->panel99->SuspendLayout();
			this->panel100->SuspendLayout();
			this->panel101->SuspendLayout();
			this->panel102->SuspendLayout();
			this->panel103->SuspendLayout();
			this->panel104->SuspendLayout();
			this->panel105->SuspendLayout();
			this->panel106->SuspendLayout();
			this->panel107->SuspendLayout();
			this->panel108->SuspendLayout();
			this->panel109->SuspendLayout();
			this->panel110->SuspendLayout();
			this->panel111->SuspendLayout();
			this->panel112->SuspendLayout();
			this->panel113->SuspendLayout();
			this->panel114->SuspendLayout();
			this->panel115->SuspendLayout();
			this->panel116->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->panel71->SuspendLayout();
			this->panel72->SuspendLayout();
			this->panel73->SuspendLayout();
			this->panel74->SuspendLayout();
			this->panel75->SuspendLayout();
			this->panel76->SuspendLayout();
			this->panel77->SuspendLayout();
			this->panel78->SuspendLayout();
			this->panel79->SuspendLayout();
			this->panel80->SuspendLayout();
			this->panel81->SuspendLayout();
			this->panel82->SuspendLayout();
			this->panel83->SuspendLayout();
			this->panel84->SuspendLayout();
			this->panel85->SuspendLayout();
			this->panel86->SuspendLayout();
			this->panel87->SuspendLayout();
			this->panel88->SuspendLayout();
			this->panel89->SuspendLayout();
			this->panel90->SuspendLayout();
			this->panel91->SuspendLayout();
			this->panel92->SuspendLayout();
			this->panel93->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->panel70->SuspendLayout();
			this->panel69->SuspendLayout();
			this->panel68->SuspendLayout();
			this->panel67->SuspendLayout();
			this->panel66->SuspendLayout();
			this->panel65->SuspendLayout();
			this->panel64->SuspendLayout();
			this->panel63->SuspendLayout();
			this->panel62->SuspendLayout();
			this->panel61->SuspendLayout();
			this->panel60->SuspendLayout();
			this->panel59->SuspendLayout();
			this->panel58->SuspendLayout();
			this->panel57->SuspendLayout();
			this->panel56->SuspendLayout();
			this->panel55->SuspendLayout();
			this->panel54->SuspendLayout();
			this->panel53->SuspendLayout();
			this->panel52->SuspendLayout();
			this->panel51->SuspendLayout();
			this->panel50->SuspendLayout();
			this->panel49->SuspendLayout();
			this->panel48->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel25->SuspendLayout();
			this->panel26->SuspendLayout();
			this->panel27->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel29->SuspendLayout();
			this->panel30->SuspendLayout();
			this->panel31->SuspendLayout();
			this->panel32->SuspendLayout();
			this->panel33->SuspendLayout();
			this->panel34->SuspendLayout();
			this->panel35->SuspendLayout();
			this->panel36->SuspendLayout();
			this->panel37->SuspendLayout();
			this->panel38->SuspendLayout();
			this->panel39->SuspendLayout();
			this->panel40->SuspendLayout();
			this->panel41->SuspendLayout();
			this->panel42->SuspendLayout();
			this->panel43->SuspendLayout();
			this->panel44->SuspendLayout();
			this->panel45->SuspendLayout();
			this->panel46->SuspendLayout();
			this->panel47->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel24->SuspendLayout();
			this->groupBox_read->SuspendLayout();
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
			this->panel1->Controls->Add(this->groupBox_del);
			this->panel1->Controls->Add(this->groupBox_add);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Location = System::Drawing::Point(3, 363);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(980, 158);
			this->panel1->TabIndex = 8;
			this->panel1->Visible = false;
			this->panel1->VisibleChanged += gcnew System::EventHandler(this, &MainForm::panel1_VisibleChanged);
			// 
			// groupBox_del
			// 
			this->groupBox_del->Controls->Add(this->groupBox_read);
			this->groupBox_del->Controls->Add(this->maskedTextBox2);
			this->groupBox_del->Controls->Add(this->button_delAction);
			this->groupBox_del->Controls->Add(this->label188);
			this->groupBox_del->Location = System::Drawing::Point(390, 3);
			this->groupBox_del->Name = L"groupBox_del";
			this->groupBox_del->Size = System::Drawing::Size(587, 152);
			this->groupBox_del->TabIndex = 7;
			this->groupBox_del->TabStop = false;
			this->groupBox_del->Text = L"Удаление канала";
			this->groupBox_del->Visible = false;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(80, 26);
			this->maskedTextBox2->Mask = L"000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(101, 20);
			this->maskedTextBox2->TabIndex = 6;
			this->maskedTextBox2->TextChanged += gcnew System::EventHandler(this, &MainForm::maskedTextBox2_TextChanged);
			// 
			// button_delAction
			// 
			this->button_delAction->Enabled = false;
			this->button_delAction->Location = System::Drawing::Point(446, 118);
			this->button_delAction->Name = L"button_delAction";
			this->button_delAction->Size = System::Drawing::Size(135, 23);
			this->button_delAction->TabIndex = 4;
			this->button_delAction->Text = L"Добавить";
			this->button_delAction->UseVisualStyleBackColor = true;
			this->button_delAction->Click += gcnew System::EventHandler(this, &MainForm::button_delAction_Click);
			// 
			// label188
			// 
			this->label188->AutoSize = true;
			this->label188->Location = System::Drawing::Point(6, 29);
			this->label188->Name = L"label188";
			this->label188->Size = System::Drawing::Size(68, 13);
			this->label188->TabIndex = 0;
			this->label188->Text = L"Имя канала";
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
			this->button_addAction->Click += gcnew System::EventHandler(this, &MainForm::button_addAction_Click);
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
			this->button_write->Location = System::Drawing::Point(175, 48);
			this->button_write->Name = L"button_write";
			this->button_write->Size = System::Drawing::Size(135, 23);
			this->button_write->TabIndex = 3;
			this->button_write->Text = L"Запись в канал";
			this->button_write->UseVisualStyleBackColor = true;
			// 
			// button_read
			// 
			this->button_read->Location = System::Drawing::Point(175, 19);
			this->button_read->Name = L"button_read";
			this->button_read->Size = System::Drawing::Size(135, 23);
			this->button_read->TabIndex = 2;
			this->button_read->Text = L"Чтение из канала";
			this->button_read->UseVisualStyleBackColor = true;
			// 
			// button_delPipe
			// 
			this->button_delPipe->Location = System::Drawing::Point(6, 48);
			this->button_delPipe->Name = L"button_delPipe";
			this->button_delPipe->Size = System::Drawing::Size(135, 23);
			this->button_delPipe->TabIndex = 1;
			this->button_delPipe->Text = L"Удалить канал";
			this->button_delPipe->UseVisualStyleBackColor = true;
			this->button_delPipe->Click += gcnew System::EventHandler(this, &MainForm::button_delPipe_Click);
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
			this->panel163->Controls->Add(this->label164);
			this->panel163->Location = System::Drawing::Point(3, 3);
			this->panel163->Name = L"panel163";
			this->panel163->Size = System::Drawing::Size(36, 36);
			this->panel163->TabIndex = 4;
			// 
			// label164
			// 
			this->label164->AutoSize = true;
			this->label164->Location = System::Drawing::Point(-5, 12);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(47, 13);
			this->label164->TabIndex = 1;
			this->label164->Text = L"label164";
			// 
			// panel164
			// 
			this->panel164->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel164->Controls->Add(this->label165);
			this->panel164->Location = System::Drawing::Point(45, 3);
			this->panel164->Name = L"panel164";
			this->panel164->Size = System::Drawing::Size(36, 36);
			this->panel164->TabIndex = 20;
			// 
			// label165
			// 
			this->label165->AutoSize = true;
			this->label165->Location = System::Drawing::Point(-5, 12);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(47, 13);
			this->label165->TabIndex = 1;
			this->label165->Text = L"label165";
			// 
			// panel165
			// 
			this->panel165->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel165->Controls->Add(this->label166);
			this->panel165->Location = System::Drawing::Point(87, 3);
			this->panel165->Name = L"panel165";
			this->panel165->Size = System::Drawing::Size(36, 36);
			this->panel165->TabIndex = 19;
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->Location = System::Drawing::Point(-5, 12);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(47, 13);
			this->label166->TabIndex = 1;
			this->label166->Text = L"label166";
			// 
			// panel166
			// 
			this->panel166->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel166->Controls->Add(this->label167);
			this->panel166->Location = System::Drawing::Point(129, 3);
			this->panel166->Name = L"panel166";
			this->panel166->Size = System::Drawing::Size(36, 36);
			this->panel166->TabIndex = 18;
			// 
			// label167
			// 
			this->label167->AutoSize = true;
			this->label167->Location = System::Drawing::Point(-5, 12);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(47, 13);
			this->label167->TabIndex = 1;
			this->label167->Text = L"label167";
			// 
			// panel167
			// 
			this->panel167->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel167->Controls->Add(this->label168);
			this->panel167->Location = System::Drawing::Point(171, 3);
			this->panel167->Name = L"panel167";
			this->panel167->Size = System::Drawing::Size(36, 36);
			this->panel167->TabIndex = 17;
			// 
			// label168
			// 
			this->label168->AutoSize = true;
			this->label168->Location = System::Drawing::Point(-5, 12);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(47, 13);
			this->label168->TabIndex = 1;
			this->label168->Text = L"label168";
			// 
			// panel168
			// 
			this->panel168->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel168->Controls->Add(this->label169);
			this->panel168->Location = System::Drawing::Point(213, 3);
			this->panel168->Name = L"panel168";
			this->panel168->Size = System::Drawing::Size(36, 36);
			this->panel168->TabIndex = 16;
			// 
			// label169
			// 
			this->label169->AutoSize = true;
			this->label169->Location = System::Drawing::Point(-5, 12);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(47, 13);
			this->label169->TabIndex = 1;
			this->label169->Text = L"label169";
			// 
			// panel169
			// 
			this->panel169->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel169->Controls->Add(this->label170);
			this->panel169->Location = System::Drawing::Point(255, 3);
			this->panel169->Name = L"panel169";
			this->panel169->Size = System::Drawing::Size(36, 36);
			this->panel169->TabIndex = 15;
			// 
			// label170
			// 
			this->label170->AutoSize = true;
			this->label170->Location = System::Drawing::Point(-5, 12);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(47, 13);
			this->label170->TabIndex = 1;
			this->label170->Text = L"label170";
			// 
			// panel170
			// 
			this->panel170->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel170->Controls->Add(this->label171);
			this->panel170->Location = System::Drawing::Point(297, 3);
			this->panel170->Name = L"panel170";
			this->panel170->Size = System::Drawing::Size(36, 36);
			this->panel170->TabIndex = 14;
			// 
			// label171
			// 
			this->label171->AutoSize = true;
			this->label171->Location = System::Drawing::Point(-5, 12);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(47, 13);
			this->label171->TabIndex = 1;
			this->label171->Text = L"label171";
			// 
			// panel171
			// 
			this->panel171->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel171->Controls->Add(this->label172);
			this->panel171->Location = System::Drawing::Point(339, 3);
			this->panel171->Name = L"panel171";
			this->panel171->Size = System::Drawing::Size(36, 36);
			this->panel171->TabIndex = 21;
			// 
			// label172
			// 
			this->label172->AutoSize = true;
			this->label172->Location = System::Drawing::Point(-5, 12);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(47, 13);
			this->label172->TabIndex = 1;
			this->label172->Text = L"label172";
			// 
			// panel172
			// 
			this->panel172->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel172->Controls->Add(this->label173);
			this->panel172->Location = System::Drawing::Point(381, 3);
			this->panel172->Name = L"panel172";
			this->panel172->Size = System::Drawing::Size(36, 36);
			this->panel172->TabIndex = 12;
			// 
			// label173
			// 
			this->label173->AutoSize = true;
			this->label173->Location = System::Drawing::Point(-5, 12);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(47, 13);
			this->label173->TabIndex = 1;
			this->label173->Text = L"label173";
			// 
			// panel173
			// 
			this->panel173->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel173->Controls->Add(this->label174);
			this->panel173->Location = System::Drawing::Point(423, 3);
			this->panel173->Name = L"panel173";
			this->panel173->Size = System::Drawing::Size(36, 36);
			this->panel173->TabIndex = 11;
			// 
			// label174
			// 
			this->label174->AutoSize = true;
			this->label174->Location = System::Drawing::Point(-5, 12);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(47, 13);
			this->label174->TabIndex = 1;
			this->label174->Text = L"label174";
			// 
			// panel174
			// 
			this->panel174->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel174->Controls->Add(this->label175);
			this->panel174->Location = System::Drawing::Point(465, 3);
			this->panel174->Name = L"panel174";
			this->panel174->Size = System::Drawing::Size(36, 36);
			this->panel174->TabIndex = 13;
			// 
			// label175
			// 
			this->label175->AutoSize = true;
			this->label175->Location = System::Drawing::Point(-5, 12);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(47, 13);
			this->label175->TabIndex = 1;
			this->label175->Text = L"label175";
			// 
			// panel175
			// 
			this->panel175->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel175->Controls->Add(this->label176);
			this->panel175->Location = System::Drawing::Point(507, 3);
			this->panel175->Name = L"panel175";
			this->panel175->Size = System::Drawing::Size(36, 36);
			this->panel175->TabIndex = 10;
			// 
			// label176
			// 
			this->label176->AutoSize = true;
			this->label176->Location = System::Drawing::Point(-5, 12);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(47, 13);
			this->label176->TabIndex = 1;
			this->label176->Text = L"label176";
			// 
			// panel176
			// 
			this->panel176->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel176->Controls->Add(this->label177);
			this->panel176->Location = System::Drawing::Point(549, 3);
			this->panel176->Name = L"panel176";
			this->panel176->Size = System::Drawing::Size(36, 36);
			this->panel176->TabIndex = 9;
			// 
			// label177
			// 
			this->label177->AutoSize = true;
			this->label177->Location = System::Drawing::Point(-5, 12);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(47, 13);
			this->label177->TabIndex = 1;
			this->label177->Text = L"label177";
			// 
			// panel177
			// 
			this->panel177->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel177->Controls->Add(this->label178);
			this->panel177->Location = System::Drawing::Point(591, 3);
			this->panel177->Name = L"panel177";
			this->panel177->Size = System::Drawing::Size(36, 36);
			this->panel177->TabIndex = 8;
			// 
			// label178
			// 
			this->label178->AutoSize = true;
			this->label178->Location = System::Drawing::Point(-5, 12);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(47, 13);
			this->label178->TabIndex = 1;
			this->label178->Text = L"label178";
			// 
			// panel178
			// 
			this->panel178->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel178->Controls->Add(this->label179);
			this->panel178->Location = System::Drawing::Point(633, 3);
			this->panel178->Name = L"panel178";
			this->panel178->Size = System::Drawing::Size(36, 36);
			this->panel178->TabIndex = 7;
			// 
			// label179
			// 
			this->label179->AutoSize = true;
			this->label179->Location = System::Drawing::Point(-5, 12);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(47, 13);
			this->label179->TabIndex = 1;
			this->label179->Text = L"label179";
			// 
			// panel179
			// 
			this->panel179->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel179->Controls->Add(this->label180);
			this->panel179->Location = System::Drawing::Point(675, 3);
			this->panel179->Name = L"panel179";
			this->panel179->Size = System::Drawing::Size(36, 36);
			this->panel179->TabIndex = 6;
			// 
			// label180
			// 
			this->label180->AutoSize = true;
			this->label180->Location = System::Drawing::Point(-5, 12);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(47, 13);
			this->label180->TabIndex = 1;
			this->label180->Text = L"label180";
			// 
			// panel180
			// 
			this->panel180->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel180->Controls->Add(this->label181);
			this->panel180->Location = System::Drawing::Point(717, 3);
			this->panel180->Name = L"panel180";
			this->panel180->Size = System::Drawing::Size(36, 36);
			this->panel180->TabIndex = 5;
			// 
			// label181
			// 
			this->label181->AutoSize = true;
			this->label181->Location = System::Drawing::Point(-5, 12);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(47, 13);
			this->label181->TabIndex = 1;
			this->label181->Text = L"label181";
			// 
			// panel181
			// 
			this->panel181->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel181->Controls->Add(this->label182);
			this->panel181->Location = System::Drawing::Point(759, 3);
			this->panel181->Name = L"panel181";
			this->panel181->Size = System::Drawing::Size(36, 36);
			this->panel181->TabIndex = 22;
			// 
			// label182
			// 
			this->label182->AutoSize = true;
			this->label182->Location = System::Drawing::Point(-5, 12);
			this->label182->Name = L"label182";
			this->label182->Size = System::Drawing::Size(47, 13);
			this->label182->TabIndex = 1;
			this->label182->Text = L"label182";
			// 
			// panel182
			// 
			this->panel182->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel182->Controls->Add(this->label183);
			this->panel182->Location = System::Drawing::Point(801, 3);
			this->panel182->Name = L"panel182";
			this->panel182->Size = System::Drawing::Size(36, 36);
			this->panel182->TabIndex = 24;
			// 
			// label183
			// 
			this->label183->AutoSize = true;
			this->label183->Location = System::Drawing::Point(-5, 12);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(47, 13);
			this->label183->TabIndex = 1;
			this->label183->Text = L"label183";
			// 
			// panel183
			// 
			this->panel183->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel183->Controls->Add(this->label184);
			this->panel183->Location = System::Drawing::Point(843, 3);
			this->panel183->Name = L"panel183";
			this->panel183->Size = System::Drawing::Size(36, 36);
			this->panel183->TabIndex = 25;
			// 
			// label184
			// 
			this->label184->AutoSize = true;
			this->label184->Location = System::Drawing::Point(-5, 12);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(47, 13);
			this->label184->TabIndex = 1;
			this->label184->Text = L"label184";
			// 
			// panel184
			// 
			this->panel184->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel184->Controls->Add(this->label185);
			this->panel184->Location = System::Drawing::Point(885, 3);
			this->panel184->Name = L"panel184";
			this->panel184->Size = System::Drawing::Size(36, 36);
			this->panel184->TabIndex = 23;
			// 
			// label185
			// 
			this->label185->AutoSize = true;
			this->label185->Location = System::Drawing::Point(-5, 12);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(47, 13);
			this->label185->TabIndex = 1;
			this->label185->Text = L"label185";
			// 
			// panel185
			// 
			this->panel185->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel185->Controls->Add(this->label186);
			this->panel185->Location = System::Drawing::Point(927, 3);
			this->panel185->Name = L"panel185";
			this->panel185->Size = System::Drawing::Size(36, 36);
			this->panel185->TabIndex = 26;
			// 
			// label186
			// 
			this->label186->AutoSize = true;
			this->label186->Location = System::Drawing::Point(-5, 12);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(47, 13);
			this->label186->TabIndex = 1;
			this->label186->Text = L"label186";
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
			this->panel140->Controls->Add(this->label141);
			this->panel140->Location = System::Drawing::Point(3, 3);
			this->panel140->Name = L"panel140";
			this->panel140->Size = System::Drawing::Size(36, 36);
			this->panel140->TabIndex = 4;
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->Location = System::Drawing::Point(-5, 12);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(47, 13);
			this->label141->TabIndex = 1;
			this->label141->Text = L"label141";
			// 
			// panel141
			// 
			this->panel141->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel141->Controls->Add(this->label142);
			this->panel141->Location = System::Drawing::Point(45, 3);
			this->panel141->Name = L"panel141";
			this->panel141->Size = System::Drawing::Size(36, 36);
			this->panel141->TabIndex = 20;
			// 
			// label142
			// 
			this->label142->AutoSize = true;
			this->label142->Location = System::Drawing::Point(-5, 12);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(47, 13);
			this->label142->TabIndex = 1;
			this->label142->Text = L"label142";
			// 
			// panel142
			// 
			this->panel142->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel142->Controls->Add(this->label143);
			this->panel142->Location = System::Drawing::Point(87, 3);
			this->panel142->Name = L"panel142";
			this->panel142->Size = System::Drawing::Size(36, 36);
			this->panel142->TabIndex = 19;
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->Location = System::Drawing::Point(-5, 12);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(47, 13);
			this->label143->TabIndex = 1;
			this->label143->Text = L"label143";
			// 
			// panel143
			// 
			this->panel143->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel143->Controls->Add(this->label144);
			this->panel143->Location = System::Drawing::Point(129, 3);
			this->panel143->Name = L"panel143";
			this->panel143->Size = System::Drawing::Size(36, 36);
			this->panel143->TabIndex = 18;
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->Location = System::Drawing::Point(-5, 12);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(47, 13);
			this->label144->TabIndex = 1;
			this->label144->Text = L"label144";
			// 
			// panel144
			// 
			this->panel144->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel144->Controls->Add(this->label145);
			this->panel144->Location = System::Drawing::Point(171, 3);
			this->panel144->Name = L"panel144";
			this->panel144->Size = System::Drawing::Size(36, 36);
			this->panel144->TabIndex = 17;
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->Location = System::Drawing::Point(-5, 12);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(47, 13);
			this->label145->TabIndex = 1;
			this->label145->Text = L"label145";
			// 
			// panel145
			// 
			this->panel145->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel145->Controls->Add(this->label146);
			this->panel145->Location = System::Drawing::Point(213, 3);
			this->panel145->Name = L"panel145";
			this->panel145->Size = System::Drawing::Size(36, 36);
			this->panel145->TabIndex = 16;
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->Location = System::Drawing::Point(-5, 12);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(47, 13);
			this->label146->TabIndex = 1;
			this->label146->Text = L"label146";
			// 
			// panel146
			// 
			this->panel146->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel146->Controls->Add(this->label147);
			this->panel146->Location = System::Drawing::Point(255, 3);
			this->panel146->Name = L"panel146";
			this->panel146->Size = System::Drawing::Size(36, 36);
			this->panel146->TabIndex = 15;
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->Location = System::Drawing::Point(-5, 12);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(47, 13);
			this->label147->TabIndex = 1;
			this->label147->Text = L"label147";
			// 
			// panel147
			// 
			this->panel147->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel147->Controls->Add(this->label148);
			this->panel147->Location = System::Drawing::Point(297, 3);
			this->panel147->Name = L"panel147";
			this->panel147->Size = System::Drawing::Size(36, 36);
			this->panel147->TabIndex = 14;
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->Location = System::Drawing::Point(-5, 12);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(47, 13);
			this->label148->TabIndex = 1;
			this->label148->Text = L"label148";
			// 
			// panel148
			// 
			this->panel148->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel148->Controls->Add(this->label149);
			this->panel148->Location = System::Drawing::Point(339, 3);
			this->panel148->Name = L"panel148";
			this->panel148->Size = System::Drawing::Size(36, 36);
			this->panel148->TabIndex = 21;
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->Location = System::Drawing::Point(-5, 12);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(47, 13);
			this->label149->TabIndex = 1;
			this->label149->Text = L"label149";
			// 
			// panel149
			// 
			this->panel149->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel149->Controls->Add(this->label150);
			this->panel149->Location = System::Drawing::Point(381, 3);
			this->panel149->Name = L"panel149";
			this->panel149->Size = System::Drawing::Size(36, 36);
			this->panel149->TabIndex = 12;
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->Location = System::Drawing::Point(-5, 12);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(47, 13);
			this->label150->TabIndex = 1;
			this->label150->Text = L"label150";
			// 
			// panel150
			// 
			this->panel150->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel150->Controls->Add(this->label151);
			this->panel150->Location = System::Drawing::Point(423, 3);
			this->panel150->Name = L"panel150";
			this->panel150->Size = System::Drawing::Size(36, 36);
			this->panel150->TabIndex = 11;
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->Location = System::Drawing::Point(-5, 12);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(47, 13);
			this->label151->TabIndex = 1;
			this->label151->Text = L"label151";
			// 
			// panel151
			// 
			this->panel151->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel151->Controls->Add(this->label152);
			this->panel151->Location = System::Drawing::Point(465, 3);
			this->panel151->Name = L"panel151";
			this->panel151->Size = System::Drawing::Size(36, 36);
			this->panel151->TabIndex = 13;
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->Location = System::Drawing::Point(-5, 12);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(47, 13);
			this->label152->TabIndex = 1;
			this->label152->Text = L"label152";
			// 
			// panel152
			// 
			this->panel152->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel152->Controls->Add(this->label153);
			this->panel152->Location = System::Drawing::Point(507, 3);
			this->panel152->Name = L"panel152";
			this->panel152->Size = System::Drawing::Size(36, 36);
			this->panel152->TabIndex = 10;
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->Location = System::Drawing::Point(-5, 12);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(47, 13);
			this->label153->TabIndex = 1;
			this->label153->Text = L"label153";
			// 
			// panel153
			// 
			this->panel153->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel153->Controls->Add(this->label154);
			this->panel153->Location = System::Drawing::Point(549, 3);
			this->panel153->Name = L"panel153";
			this->panel153->Size = System::Drawing::Size(36, 36);
			this->panel153->TabIndex = 9;
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->Location = System::Drawing::Point(-5, 12);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(47, 13);
			this->label154->TabIndex = 1;
			this->label154->Text = L"label154";
			// 
			// panel154
			// 
			this->panel154->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel154->Controls->Add(this->label155);
			this->panel154->Location = System::Drawing::Point(591, 3);
			this->panel154->Name = L"panel154";
			this->panel154->Size = System::Drawing::Size(36, 36);
			this->panel154->TabIndex = 8;
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->Location = System::Drawing::Point(-5, 12);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(47, 13);
			this->label155->TabIndex = 1;
			this->label155->Text = L"label155";
			// 
			// panel155
			// 
			this->panel155->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel155->Controls->Add(this->label156);
			this->panel155->Location = System::Drawing::Point(633, 3);
			this->panel155->Name = L"panel155";
			this->panel155->Size = System::Drawing::Size(36, 36);
			this->panel155->TabIndex = 7;
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->Location = System::Drawing::Point(-5, 12);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(47, 13);
			this->label156->TabIndex = 1;
			this->label156->Text = L"label156";
			// 
			// panel156
			// 
			this->panel156->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel156->Controls->Add(this->label157);
			this->panel156->Location = System::Drawing::Point(675, 3);
			this->panel156->Name = L"panel156";
			this->panel156->Size = System::Drawing::Size(36, 36);
			this->panel156->TabIndex = 6;
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->Location = System::Drawing::Point(-5, 12);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(47, 13);
			this->label157->TabIndex = 1;
			this->label157->Text = L"label157";
			// 
			// panel157
			// 
			this->panel157->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel157->Controls->Add(this->label158);
			this->panel157->Location = System::Drawing::Point(717, 3);
			this->panel157->Name = L"panel157";
			this->panel157->Size = System::Drawing::Size(36, 36);
			this->panel157->TabIndex = 5;
			// 
			// label158
			// 
			this->label158->AutoSize = true;
			this->label158->Location = System::Drawing::Point(-5, 12);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(47, 13);
			this->label158->TabIndex = 1;
			this->label158->Text = L"label158";
			// 
			// panel158
			// 
			this->panel158->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel158->Controls->Add(this->label159);
			this->panel158->Location = System::Drawing::Point(759, 3);
			this->panel158->Name = L"panel158";
			this->panel158->Size = System::Drawing::Size(36, 36);
			this->panel158->TabIndex = 22;
			// 
			// label159
			// 
			this->label159->AutoSize = true;
			this->label159->Location = System::Drawing::Point(-5, 12);
			this->label159->Name = L"label159";
			this->label159->Size = System::Drawing::Size(47, 13);
			this->label159->TabIndex = 1;
			this->label159->Text = L"label159";
			// 
			// panel159
			// 
			this->panel159->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel159->Controls->Add(this->label160);
			this->panel159->Location = System::Drawing::Point(801, 3);
			this->panel159->Name = L"panel159";
			this->panel159->Size = System::Drawing::Size(36, 36);
			this->panel159->TabIndex = 24;
			// 
			// label160
			// 
			this->label160->AutoSize = true;
			this->label160->Location = System::Drawing::Point(-5, 12);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(47, 13);
			this->label160->TabIndex = 1;
			this->label160->Text = L"label160";
			// 
			// panel160
			// 
			this->panel160->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel160->Controls->Add(this->label161);
			this->panel160->Location = System::Drawing::Point(843, 3);
			this->panel160->Name = L"panel160";
			this->panel160->Size = System::Drawing::Size(36, 36);
			this->panel160->TabIndex = 25;
			// 
			// label161
			// 
			this->label161->AutoSize = true;
			this->label161->Location = System::Drawing::Point(-5, 12);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(47, 13);
			this->label161->TabIndex = 1;
			this->label161->Text = L"label161";
			// 
			// panel161
			// 
			this->panel161->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel161->Controls->Add(this->label162);
			this->panel161->Location = System::Drawing::Point(885, 3);
			this->panel161->Name = L"panel161";
			this->panel161->Size = System::Drawing::Size(36, 36);
			this->panel161->TabIndex = 23;
			// 
			// label162
			// 
			this->label162->AutoSize = true;
			this->label162->Location = System::Drawing::Point(-5, 12);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(47, 13);
			this->label162->TabIndex = 1;
			this->label162->Text = L"label162";
			// 
			// panel162
			// 
			this->panel162->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel162->Controls->Add(this->label163);
			this->panel162->Location = System::Drawing::Point(927, 3);
			this->panel162->Name = L"panel162";
			this->panel162->Size = System::Drawing::Size(36, 36);
			this->panel162->TabIndex = 26;
			// 
			// label163
			// 
			this->label163->AutoSize = true;
			this->label163->Location = System::Drawing::Point(-5, 12);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(47, 13);
			this->label163->TabIndex = 1;
			this->label163->Text = L"label163";
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
			this->panel117->Controls->Add(this->label118);
			this->panel117->Location = System::Drawing::Point(3, 3);
			this->panel117->Name = L"panel117";
			this->panel117->Size = System::Drawing::Size(36, 36);
			this->panel117->TabIndex = 4;
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->Location = System::Drawing::Point(-5, 12);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(47, 13);
			this->label118->TabIndex = 1;
			this->label118->Text = L"label118";
			// 
			// panel118
			// 
			this->panel118->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel118->Controls->Add(this->label119);
			this->panel118->Location = System::Drawing::Point(45, 3);
			this->panel118->Name = L"panel118";
			this->panel118->Size = System::Drawing::Size(36, 36);
			this->panel118->TabIndex = 20;
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->Location = System::Drawing::Point(-5, 12);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(47, 13);
			this->label119->TabIndex = 1;
			this->label119->Text = L"label119";
			// 
			// panel119
			// 
			this->panel119->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel119->Controls->Add(this->label120);
			this->panel119->Location = System::Drawing::Point(87, 3);
			this->panel119->Name = L"panel119";
			this->panel119->Size = System::Drawing::Size(36, 36);
			this->panel119->TabIndex = 19;
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->Location = System::Drawing::Point(-5, 12);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(47, 13);
			this->label120->TabIndex = 1;
			this->label120->Text = L"label120";
			// 
			// panel120
			// 
			this->panel120->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel120->Controls->Add(this->label121);
			this->panel120->Location = System::Drawing::Point(129, 3);
			this->panel120->Name = L"panel120";
			this->panel120->Size = System::Drawing::Size(36, 36);
			this->panel120->TabIndex = 18;
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->Location = System::Drawing::Point(-5, 12);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(47, 13);
			this->label121->TabIndex = 1;
			this->label121->Text = L"label121";
			// 
			// panel121
			// 
			this->panel121->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel121->Controls->Add(this->label122);
			this->panel121->Location = System::Drawing::Point(171, 3);
			this->panel121->Name = L"panel121";
			this->panel121->Size = System::Drawing::Size(36, 36);
			this->panel121->TabIndex = 17;
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->Location = System::Drawing::Point(-5, 12);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(47, 13);
			this->label122->TabIndex = 1;
			this->label122->Text = L"label122";
			// 
			// panel122
			// 
			this->panel122->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel122->Controls->Add(this->label123);
			this->panel122->Location = System::Drawing::Point(213, 3);
			this->panel122->Name = L"panel122";
			this->panel122->Size = System::Drawing::Size(36, 36);
			this->panel122->TabIndex = 16;
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->Location = System::Drawing::Point(-5, 12);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(47, 13);
			this->label123->TabIndex = 1;
			this->label123->Text = L"label123";
			// 
			// panel123
			// 
			this->panel123->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel123->Controls->Add(this->label124);
			this->panel123->Location = System::Drawing::Point(255, 3);
			this->panel123->Name = L"panel123";
			this->panel123->Size = System::Drawing::Size(36, 36);
			this->panel123->TabIndex = 15;
			// 
			// label124
			// 
			this->label124->AutoSize = true;
			this->label124->Location = System::Drawing::Point(-5, 12);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(47, 13);
			this->label124->TabIndex = 1;
			this->label124->Text = L"label124";
			// 
			// panel124
			// 
			this->panel124->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel124->Controls->Add(this->label125);
			this->panel124->Location = System::Drawing::Point(297, 3);
			this->panel124->Name = L"panel124";
			this->panel124->Size = System::Drawing::Size(36, 36);
			this->panel124->TabIndex = 14;
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->Location = System::Drawing::Point(-5, 12);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(47, 13);
			this->label125->TabIndex = 1;
			this->label125->Text = L"label125";
			// 
			// panel125
			// 
			this->panel125->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel125->Controls->Add(this->label126);
			this->panel125->Location = System::Drawing::Point(339, 3);
			this->panel125->Name = L"panel125";
			this->panel125->Size = System::Drawing::Size(36, 36);
			this->panel125->TabIndex = 21;
			// 
			// label126
			// 
			this->label126->AutoSize = true;
			this->label126->Location = System::Drawing::Point(-5, 12);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(47, 13);
			this->label126->TabIndex = 1;
			this->label126->Text = L"label126";
			// 
			// panel126
			// 
			this->panel126->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel126->Controls->Add(this->label127);
			this->panel126->Location = System::Drawing::Point(381, 3);
			this->panel126->Name = L"panel126";
			this->panel126->Size = System::Drawing::Size(36, 36);
			this->panel126->TabIndex = 12;
			// 
			// label127
			// 
			this->label127->AutoSize = true;
			this->label127->Location = System::Drawing::Point(-5, 12);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(47, 13);
			this->label127->TabIndex = 1;
			this->label127->Text = L"label127";
			// 
			// panel127
			// 
			this->panel127->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel127->Controls->Add(this->label128);
			this->panel127->Location = System::Drawing::Point(423, 3);
			this->panel127->Name = L"panel127";
			this->panel127->Size = System::Drawing::Size(36, 36);
			this->panel127->TabIndex = 11;
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->Location = System::Drawing::Point(-5, 12);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(47, 13);
			this->label128->TabIndex = 1;
			this->label128->Text = L"label128";
			// 
			// panel128
			// 
			this->panel128->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel128->Controls->Add(this->label129);
			this->panel128->Location = System::Drawing::Point(465, 3);
			this->panel128->Name = L"panel128";
			this->panel128->Size = System::Drawing::Size(36, 36);
			this->panel128->TabIndex = 13;
			// 
			// label129
			// 
			this->label129->AutoSize = true;
			this->label129->Location = System::Drawing::Point(-5, 12);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(47, 13);
			this->label129->TabIndex = 1;
			this->label129->Text = L"label129";
			// 
			// panel129
			// 
			this->panel129->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel129->Controls->Add(this->label130);
			this->panel129->Location = System::Drawing::Point(507, 3);
			this->panel129->Name = L"panel129";
			this->panel129->Size = System::Drawing::Size(36, 36);
			this->panel129->TabIndex = 10;
			// 
			// label130
			// 
			this->label130->AutoSize = true;
			this->label130->Location = System::Drawing::Point(-5, 12);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(47, 13);
			this->label130->TabIndex = 1;
			this->label130->Text = L"label130";
			// 
			// panel130
			// 
			this->panel130->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel130->Controls->Add(this->label131);
			this->panel130->Location = System::Drawing::Point(549, 3);
			this->panel130->Name = L"panel130";
			this->panel130->Size = System::Drawing::Size(36, 36);
			this->panel130->TabIndex = 9;
			// 
			// label131
			// 
			this->label131->AutoSize = true;
			this->label131->Location = System::Drawing::Point(-5, 12);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(47, 13);
			this->label131->TabIndex = 1;
			this->label131->Text = L"label131";
			// 
			// panel131
			// 
			this->panel131->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel131->Controls->Add(this->label132);
			this->panel131->Location = System::Drawing::Point(591, 3);
			this->panel131->Name = L"panel131";
			this->panel131->Size = System::Drawing::Size(36, 36);
			this->panel131->TabIndex = 8;
			// 
			// label132
			// 
			this->label132->AutoSize = true;
			this->label132->Location = System::Drawing::Point(-5, 12);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(47, 13);
			this->label132->TabIndex = 1;
			this->label132->Text = L"label132";
			// 
			// panel132
			// 
			this->panel132->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel132->Controls->Add(this->label133);
			this->panel132->Location = System::Drawing::Point(633, 3);
			this->panel132->Name = L"panel132";
			this->panel132->Size = System::Drawing::Size(36, 36);
			this->panel132->TabIndex = 7;
			// 
			// label133
			// 
			this->label133->AutoSize = true;
			this->label133->Location = System::Drawing::Point(-5, 12);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(47, 13);
			this->label133->TabIndex = 1;
			this->label133->Text = L"label133";
			// 
			// panel133
			// 
			this->panel133->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel133->Controls->Add(this->label134);
			this->panel133->Location = System::Drawing::Point(675, 3);
			this->panel133->Name = L"panel133";
			this->panel133->Size = System::Drawing::Size(36, 36);
			this->panel133->TabIndex = 6;
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->Location = System::Drawing::Point(-5, 12);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(47, 13);
			this->label134->TabIndex = 1;
			this->label134->Text = L"label134";
			// 
			// panel134
			// 
			this->panel134->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel134->Controls->Add(this->label135);
			this->panel134->Location = System::Drawing::Point(717, 3);
			this->panel134->Name = L"panel134";
			this->panel134->Size = System::Drawing::Size(36, 36);
			this->panel134->TabIndex = 5;
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->Location = System::Drawing::Point(-5, 12);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(47, 13);
			this->label135->TabIndex = 1;
			this->label135->Text = L"label135";
			// 
			// panel135
			// 
			this->panel135->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel135->Controls->Add(this->label136);
			this->panel135->Location = System::Drawing::Point(759, 3);
			this->panel135->Name = L"panel135";
			this->panel135->Size = System::Drawing::Size(36, 36);
			this->panel135->TabIndex = 22;
			// 
			// label136
			// 
			this->label136->AutoSize = true;
			this->label136->Location = System::Drawing::Point(-5, 12);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(47, 13);
			this->label136->TabIndex = 1;
			this->label136->Text = L"label136";
			// 
			// panel136
			// 
			this->panel136->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel136->Controls->Add(this->label137);
			this->panel136->Location = System::Drawing::Point(801, 3);
			this->panel136->Name = L"panel136";
			this->panel136->Size = System::Drawing::Size(36, 36);
			this->panel136->TabIndex = 24;
			// 
			// label137
			// 
			this->label137->AutoSize = true;
			this->label137->Location = System::Drawing::Point(-5, 12);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(47, 13);
			this->label137->TabIndex = 1;
			this->label137->Text = L"label137";
			// 
			// panel137
			// 
			this->panel137->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel137->Controls->Add(this->label138);
			this->panel137->Location = System::Drawing::Point(843, 3);
			this->panel137->Name = L"panel137";
			this->panel137->Size = System::Drawing::Size(36, 36);
			this->panel137->TabIndex = 25;
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->Location = System::Drawing::Point(-5, 12);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(47, 13);
			this->label138->TabIndex = 1;
			this->label138->Text = L"label138";
			// 
			// panel138
			// 
			this->panel138->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel138->Controls->Add(this->label139);
			this->panel138->Location = System::Drawing::Point(885, 3);
			this->panel138->Name = L"panel138";
			this->panel138->Size = System::Drawing::Size(36, 36);
			this->panel138->TabIndex = 23;
			// 
			// label139
			// 
			this->label139->AutoSize = true;
			this->label139->Location = System::Drawing::Point(-5, 12);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(47, 13);
			this->label139->TabIndex = 1;
			this->label139->Text = L"label139";
			// 
			// panel139
			// 
			this->panel139->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel139->Controls->Add(this->label140);
			this->panel139->Location = System::Drawing::Point(927, 3);
			this->panel139->Name = L"panel139";
			this->panel139->Size = System::Drawing::Size(36, 36);
			this->panel139->TabIndex = 26;
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->Location = System::Drawing::Point(-5, 12);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(47, 13);
			this->label140->TabIndex = 1;
			this->label140->Text = L"label140";
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
			this->panel94->Controls->Add(this->label95);
			this->panel94->Location = System::Drawing::Point(3, 3);
			this->panel94->Name = L"panel94";
			this->panel94->Size = System::Drawing::Size(36, 36);
			this->panel94->TabIndex = 4;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(-2, 12);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(41, 13);
			this->label95->TabIndex = 1;
			this->label95->Text = L"label95";
			// 
			// panel95
			// 
			this->panel95->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel95->Controls->Add(this->label96);
			this->panel95->Location = System::Drawing::Point(45, 3);
			this->panel95->Name = L"panel95";
			this->panel95->Size = System::Drawing::Size(36, 36);
			this->panel95->TabIndex = 20;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(-2, 12);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(41, 13);
			this->label96->TabIndex = 1;
			this->label96->Text = L"label96";
			// 
			// panel96
			// 
			this->panel96->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel96->Controls->Add(this->label97);
			this->panel96->Location = System::Drawing::Point(87, 3);
			this->panel96->Name = L"panel96";
			this->panel96->Size = System::Drawing::Size(36, 36);
			this->panel96->TabIndex = 19;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(-2, 12);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(41, 13);
			this->label97->TabIndex = 1;
			this->label97->Text = L"label97";
			// 
			// panel97
			// 
			this->panel97->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel97->Controls->Add(this->label98);
			this->panel97->Location = System::Drawing::Point(129, 3);
			this->panel97->Name = L"panel97";
			this->panel97->Size = System::Drawing::Size(36, 36);
			this->panel97->TabIndex = 18;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Location = System::Drawing::Point(-2, 12);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(41, 13);
			this->label98->TabIndex = 1;
			this->label98->Text = L"label98";
			// 
			// panel98
			// 
			this->panel98->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel98->Controls->Add(this->label99);
			this->panel98->Location = System::Drawing::Point(171, 3);
			this->panel98->Name = L"panel98";
			this->panel98->Size = System::Drawing::Size(36, 36);
			this->panel98->TabIndex = 17;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(-2, 12);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(41, 13);
			this->label99->TabIndex = 1;
			this->label99->Text = L"label99";
			// 
			// panel99
			// 
			this->panel99->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel99->Controls->Add(this->label100);
			this->panel99->Location = System::Drawing::Point(213, 3);
			this->panel99->Name = L"panel99";
			this->panel99->Size = System::Drawing::Size(36, 36);
			this->panel99->TabIndex = 16;
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(-5, 12);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(47, 13);
			this->label100->TabIndex = 1;
			this->label100->Text = L"label100";
			// 
			// panel100
			// 
			this->panel100->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel100->Controls->Add(this->label101);
			this->panel100->Location = System::Drawing::Point(255, 3);
			this->panel100->Name = L"panel100";
			this->panel100->Size = System::Drawing::Size(36, 36);
			this->panel100->TabIndex = 15;
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(-5, 12);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(47, 13);
			this->label101->TabIndex = 1;
			this->label101->Text = L"label101";
			// 
			// panel101
			// 
			this->panel101->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel101->Controls->Add(this->label102);
			this->panel101->Location = System::Drawing::Point(297, 3);
			this->panel101->Name = L"panel101";
			this->panel101->Size = System::Drawing::Size(36, 36);
			this->panel101->TabIndex = 14;
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Location = System::Drawing::Point(-5, 12);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(47, 13);
			this->label102->TabIndex = 1;
			this->label102->Text = L"label102";
			// 
			// panel102
			// 
			this->panel102->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel102->Controls->Add(this->label103);
			this->panel102->Location = System::Drawing::Point(339, 3);
			this->panel102->Name = L"panel102";
			this->panel102->Size = System::Drawing::Size(36, 36);
			this->panel102->TabIndex = 21;
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Location = System::Drawing::Point(-5, 12);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(47, 13);
			this->label103->TabIndex = 1;
			this->label103->Text = L"label103";
			// 
			// panel103
			// 
			this->panel103->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel103->Controls->Add(this->label104);
			this->panel103->Location = System::Drawing::Point(381, 3);
			this->panel103->Name = L"panel103";
			this->panel103->Size = System::Drawing::Size(36, 36);
			this->panel103->TabIndex = 12;
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->Location = System::Drawing::Point(-5, 12);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(47, 13);
			this->label104->TabIndex = 1;
			this->label104->Text = L"label104";
			// 
			// panel104
			// 
			this->panel104->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel104->Controls->Add(this->label105);
			this->panel104->Location = System::Drawing::Point(423, 3);
			this->panel104->Name = L"panel104";
			this->panel104->Size = System::Drawing::Size(36, 36);
			this->panel104->TabIndex = 11;
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->Location = System::Drawing::Point(-5, 12);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(47, 13);
			this->label105->TabIndex = 1;
			this->label105->Text = L"label105";
			// 
			// panel105
			// 
			this->panel105->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel105->Controls->Add(this->label106);
			this->panel105->Location = System::Drawing::Point(465, 3);
			this->panel105->Name = L"panel105";
			this->panel105->Size = System::Drawing::Size(36, 36);
			this->panel105->TabIndex = 13;
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->Location = System::Drawing::Point(-5, 12);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(47, 13);
			this->label106->TabIndex = 1;
			this->label106->Text = L"label106";
			// 
			// panel106
			// 
			this->panel106->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel106->Controls->Add(this->label107);
			this->panel106->Location = System::Drawing::Point(507, 3);
			this->panel106->Name = L"panel106";
			this->panel106->Size = System::Drawing::Size(36, 36);
			this->panel106->TabIndex = 10;
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->Location = System::Drawing::Point(-5, 12);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(47, 13);
			this->label107->TabIndex = 1;
			this->label107->Text = L"label107";
			// 
			// panel107
			// 
			this->panel107->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel107->Controls->Add(this->label108);
			this->panel107->Location = System::Drawing::Point(549, 3);
			this->panel107->Name = L"panel107";
			this->panel107->Size = System::Drawing::Size(36, 36);
			this->panel107->TabIndex = 9;
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->Location = System::Drawing::Point(-5, 12);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(47, 13);
			this->label108->TabIndex = 1;
			this->label108->Text = L"label108";
			// 
			// panel108
			// 
			this->panel108->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel108->Controls->Add(this->label109);
			this->panel108->Location = System::Drawing::Point(591, 3);
			this->panel108->Name = L"panel108";
			this->panel108->Size = System::Drawing::Size(36, 36);
			this->panel108->TabIndex = 8;
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->Location = System::Drawing::Point(-5, 12);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(47, 13);
			this->label109->TabIndex = 1;
			this->label109->Text = L"label109";
			// 
			// panel109
			// 
			this->panel109->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel109->Controls->Add(this->label110);
			this->panel109->Location = System::Drawing::Point(633, 3);
			this->panel109->Name = L"panel109";
			this->panel109->Size = System::Drawing::Size(36, 36);
			this->panel109->TabIndex = 7;
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->Location = System::Drawing::Point(-5, 12);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(47, 13);
			this->label110->TabIndex = 1;
			this->label110->Text = L"label110";
			// 
			// panel110
			// 
			this->panel110->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel110->Controls->Add(this->label111);
			this->panel110->Location = System::Drawing::Point(675, 3);
			this->panel110->Name = L"panel110";
			this->panel110->Size = System::Drawing::Size(36, 36);
			this->panel110->TabIndex = 6;
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->Location = System::Drawing::Point(-5, 12);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(47, 13);
			this->label111->TabIndex = 1;
			this->label111->Text = L"label111";
			// 
			// panel111
			// 
			this->panel111->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel111->Controls->Add(this->label112);
			this->panel111->Location = System::Drawing::Point(717, 3);
			this->panel111->Name = L"panel111";
			this->panel111->Size = System::Drawing::Size(36, 36);
			this->panel111->TabIndex = 5;
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Location = System::Drawing::Point(-5, 12);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(47, 13);
			this->label112->TabIndex = 1;
			this->label112->Text = L"label112";
			// 
			// panel112
			// 
			this->panel112->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel112->Controls->Add(this->label113);
			this->panel112->Location = System::Drawing::Point(759, 3);
			this->panel112->Name = L"panel112";
			this->panel112->Size = System::Drawing::Size(36, 36);
			this->panel112->TabIndex = 22;
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Location = System::Drawing::Point(-5, 12);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(47, 13);
			this->label113->TabIndex = 1;
			this->label113->Text = L"label113";
			// 
			// panel113
			// 
			this->panel113->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel113->Controls->Add(this->label114);
			this->panel113->Location = System::Drawing::Point(801, 3);
			this->panel113->Name = L"panel113";
			this->panel113->Size = System::Drawing::Size(36, 36);
			this->panel113->TabIndex = 24;
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->Location = System::Drawing::Point(-5, 12);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(47, 13);
			this->label114->TabIndex = 1;
			this->label114->Text = L"label114";
			// 
			// panel114
			// 
			this->panel114->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel114->Controls->Add(this->label115);
			this->panel114->Location = System::Drawing::Point(843, 3);
			this->panel114->Name = L"panel114";
			this->panel114->Size = System::Drawing::Size(36, 36);
			this->panel114->TabIndex = 25;
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Location = System::Drawing::Point(-5, 12);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(47, 13);
			this->label115->TabIndex = 1;
			this->label115->Text = L"label115";
			// 
			// panel115
			// 
			this->panel115->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel115->Controls->Add(this->label116);
			this->panel115->Location = System::Drawing::Point(885, 3);
			this->panel115->Name = L"panel115";
			this->panel115->Size = System::Drawing::Size(36, 36);
			this->panel115->TabIndex = 23;
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->Location = System::Drawing::Point(-5, 12);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(47, 13);
			this->label116->TabIndex = 1;
			this->label116->Text = L"label116";
			// 
			// panel116
			// 
			this->panel116->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel116->Controls->Add(this->label117);
			this->panel116->Location = System::Drawing::Point(927, 3);
			this->panel116->Name = L"panel116";
			this->panel116->Size = System::Drawing::Size(36, 36);
			this->panel116->TabIndex = 26;
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->Location = System::Drawing::Point(-5, 12);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(47, 13);
			this->label117->TabIndex = 1;
			this->label117->Text = L"label117";
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
			this->panel71->Controls->Add(this->label72);
			this->panel71->Location = System::Drawing::Point(3, 3);
			this->panel71->Name = L"panel71";
			this->panel71->Size = System::Drawing::Size(36, 36);
			this->panel71->TabIndex = 4;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(-2, 12);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(41, 13);
			this->label72->TabIndex = 1;
			this->label72->Text = L"label72";
			// 
			// panel72
			// 
			this->panel72->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel72->Controls->Add(this->label73);
			this->panel72->Location = System::Drawing::Point(45, 3);
			this->panel72->Name = L"panel72";
			this->panel72->Size = System::Drawing::Size(36, 36);
			this->panel72->TabIndex = 20;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(-2, 12);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(41, 13);
			this->label73->TabIndex = 1;
			this->label73->Text = L"label73";
			// 
			// panel73
			// 
			this->panel73->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel73->Controls->Add(this->label74);
			this->panel73->Location = System::Drawing::Point(87, 3);
			this->panel73->Name = L"panel73";
			this->panel73->Size = System::Drawing::Size(36, 36);
			this->panel73->TabIndex = 19;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(-2, 12);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(41, 13);
			this->label74->TabIndex = 1;
			this->label74->Text = L"label74";
			// 
			// panel74
			// 
			this->panel74->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel74->Controls->Add(this->label75);
			this->panel74->Location = System::Drawing::Point(129, 3);
			this->panel74->Name = L"panel74";
			this->panel74->Size = System::Drawing::Size(36, 36);
			this->panel74->TabIndex = 18;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(-2, 12);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(41, 13);
			this->label75->TabIndex = 1;
			this->label75->Text = L"label75";
			// 
			// panel75
			// 
			this->panel75->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel75->Controls->Add(this->label76);
			this->panel75->Location = System::Drawing::Point(171, 3);
			this->panel75->Name = L"panel75";
			this->panel75->Size = System::Drawing::Size(36, 36);
			this->panel75->TabIndex = 17;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(-2, 12);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(41, 13);
			this->label76->TabIndex = 1;
			this->label76->Text = L"label76";
			// 
			// panel76
			// 
			this->panel76->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel76->Controls->Add(this->label77);
			this->panel76->Location = System::Drawing::Point(213, 3);
			this->panel76->Name = L"panel76";
			this->panel76->Size = System::Drawing::Size(36, 36);
			this->panel76->TabIndex = 16;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(-2, 12);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(41, 13);
			this->label77->TabIndex = 1;
			this->label77->Text = L"label77";
			// 
			// panel77
			// 
			this->panel77->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel77->Controls->Add(this->label78);
			this->panel77->Location = System::Drawing::Point(255, 3);
			this->panel77->Name = L"panel77";
			this->panel77->Size = System::Drawing::Size(36, 36);
			this->panel77->TabIndex = 15;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(-2, 12);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(41, 13);
			this->label78->TabIndex = 1;
			this->label78->Text = L"label78";
			// 
			// panel78
			// 
			this->panel78->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel78->Controls->Add(this->label79);
			this->panel78->Location = System::Drawing::Point(297, 3);
			this->panel78->Name = L"panel78";
			this->panel78->Size = System::Drawing::Size(36, 36);
			this->panel78->TabIndex = 14;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(-2, 12);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(41, 13);
			this->label79->TabIndex = 1;
			this->label79->Text = L"label79";
			// 
			// panel79
			// 
			this->panel79->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel79->Controls->Add(this->label80);
			this->panel79->Location = System::Drawing::Point(339, 3);
			this->panel79->Name = L"panel79";
			this->panel79->Size = System::Drawing::Size(36, 36);
			this->panel79->TabIndex = 21;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(-2, 12);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(41, 13);
			this->label80->TabIndex = 1;
			this->label80->Text = L"label80";
			// 
			// panel80
			// 
			this->panel80->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel80->Controls->Add(this->label81);
			this->panel80->Location = System::Drawing::Point(381, 3);
			this->panel80->Name = L"panel80";
			this->panel80->Size = System::Drawing::Size(36, 36);
			this->panel80->TabIndex = 12;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(-2, 12);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(41, 13);
			this->label81->TabIndex = 1;
			this->label81->Text = L"label81";
			// 
			// panel81
			// 
			this->panel81->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel81->Controls->Add(this->label82);
			this->panel81->Location = System::Drawing::Point(423, 3);
			this->panel81->Name = L"panel81";
			this->panel81->Size = System::Drawing::Size(36, 36);
			this->panel81->TabIndex = 11;
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(-2, 12);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(41, 13);
			this->label82->TabIndex = 1;
			this->label82->Text = L"label82";
			// 
			// panel82
			// 
			this->panel82->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel82->Controls->Add(this->label83);
			this->panel82->Location = System::Drawing::Point(465, 3);
			this->panel82->Name = L"panel82";
			this->panel82->Size = System::Drawing::Size(36, 36);
			this->panel82->TabIndex = 13;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(-2, 12);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(41, 13);
			this->label83->TabIndex = 1;
			this->label83->Text = L"label83";
			// 
			// panel83
			// 
			this->panel83->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel83->Controls->Add(this->label84);
			this->panel83->Location = System::Drawing::Point(507, 3);
			this->panel83->Name = L"panel83";
			this->panel83->Size = System::Drawing::Size(36, 36);
			this->panel83->TabIndex = 10;
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(-2, 12);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(41, 13);
			this->label84->TabIndex = 1;
			this->label84->Text = L"label84";
			// 
			// panel84
			// 
			this->panel84->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel84->Controls->Add(this->label85);
			this->panel84->Location = System::Drawing::Point(549, 3);
			this->panel84->Name = L"panel84";
			this->panel84->Size = System::Drawing::Size(36, 36);
			this->panel84->TabIndex = 9;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(-2, 12);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(41, 13);
			this->label85->TabIndex = 1;
			this->label85->Text = L"label85";
			// 
			// panel85
			// 
			this->panel85->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel85->Controls->Add(this->label86);
			this->panel85->Location = System::Drawing::Point(591, 3);
			this->panel85->Name = L"panel85";
			this->panel85->Size = System::Drawing::Size(36, 36);
			this->panel85->TabIndex = 8;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(-2, 12);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(41, 13);
			this->label86->TabIndex = 1;
			this->label86->Text = L"label86";
			// 
			// panel86
			// 
			this->panel86->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel86->Controls->Add(this->label87);
			this->panel86->Location = System::Drawing::Point(633, 3);
			this->panel86->Name = L"panel86";
			this->panel86->Size = System::Drawing::Size(36, 36);
			this->panel86->TabIndex = 7;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(-2, 12);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(41, 13);
			this->label87->TabIndex = 1;
			this->label87->Text = L"label87";
			// 
			// panel87
			// 
			this->panel87->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel87->Controls->Add(this->label88);
			this->panel87->Location = System::Drawing::Point(675, 3);
			this->panel87->Name = L"panel87";
			this->panel87->Size = System::Drawing::Size(36, 36);
			this->panel87->TabIndex = 6;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(-2, 12);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(41, 13);
			this->label88->TabIndex = 1;
			this->label88->Text = L"label88";
			// 
			// panel88
			// 
			this->panel88->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel88->Controls->Add(this->label89);
			this->panel88->Location = System::Drawing::Point(717, 3);
			this->panel88->Name = L"panel88";
			this->panel88->Size = System::Drawing::Size(36, 36);
			this->panel88->TabIndex = 5;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Location = System::Drawing::Point(-2, 12);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(41, 13);
			this->label89->TabIndex = 1;
			this->label89->Text = L"label89";
			// 
			// panel89
			// 
			this->panel89->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel89->Controls->Add(this->label90);
			this->panel89->Location = System::Drawing::Point(759, 3);
			this->panel89->Name = L"panel89";
			this->panel89->Size = System::Drawing::Size(36, 36);
			this->panel89->TabIndex = 22;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Location = System::Drawing::Point(-2, 12);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(41, 13);
			this->label90->TabIndex = 1;
			this->label90->Text = L"label90";
			// 
			// panel90
			// 
			this->panel90->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel90->Controls->Add(this->label91);
			this->panel90->Location = System::Drawing::Point(801, 3);
			this->panel90->Name = L"panel90";
			this->panel90->Size = System::Drawing::Size(36, 36);
			this->panel90->TabIndex = 24;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(-2, 12);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(41, 13);
			this->label91->TabIndex = 1;
			this->label91->Text = L"label91";
			// 
			// panel91
			// 
			this->panel91->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel91->Controls->Add(this->label92);
			this->panel91->Location = System::Drawing::Point(843, 3);
			this->panel91->Name = L"panel91";
			this->panel91->Size = System::Drawing::Size(36, 36);
			this->panel91->TabIndex = 25;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(-2, 12);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(41, 13);
			this->label92->TabIndex = 1;
			this->label92->Text = L"label92";
			// 
			// panel92
			// 
			this->panel92->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel92->Controls->Add(this->label93);
			this->panel92->Location = System::Drawing::Point(885, 3);
			this->panel92->Name = L"panel92";
			this->panel92->Size = System::Drawing::Size(36, 36);
			this->panel92->TabIndex = 23;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(-2, 12);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(41, 13);
			this->label93->TabIndex = 1;
			this->label93->Text = L"label93";
			// 
			// panel93
			// 
			this->panel93->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel93->Controls->Add(this->label94);
			this->panel93->Location = System::Drawing::Point(927, 3);
			this->panel93->Name = L"panel93";
			this->panel93->Size = System::Drawing::Size(36, 36);
			this->panel93->TabIndex = 26;
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Location = System::Drawing::Point(-2, 12);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(41, 13);
			this->label94->TabIndex = 1;
			this->label94->Text = L"label94";
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
			// panel70
			// 
			this->panel70->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel70->Controls->Add(this->label49);
			this->panel70->Location = System::Drawing::Point(3, 3);
			this->panel70->Name = L"panel70";
			this->panel70->Size = System::Drawing::Size(36, 36);
			this->panel70->TabIndex = 26;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(-2, 12);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(41, 13);
			this->label49->TabIndex = 1;
			this->label49->Text = L"label49";
			// 
			// panel69
			// 
			this->panel69->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel69->Controls->Add(this->label50);
			this->panel69->Location = System::Drawing::Point(45, 3);
			this->panel69->Name = L"panel69";
			this->panel69->Size = System::Drawing::Size(36, 36);
			this->panel69->TabIndex = 23;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(-2, 12);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(41, 13);
			this->label50->TabIndex = 1;
			this->label50->Text = L"label50";
			// 
			// panel68
			// 
			this->panel68->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel68->Controls->Add(this->label51);
			this->panel68->Location = System::Drawing::Point(87, 3);
			this->panel68->Name = L"panel68";
			this->panel68->Size = System::Drawing::Size(36, 36);
			this->panel68->TabIndex = 25;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(-2, 12);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(41, 13);
			this->label51->TabIndex = 1;
			this->label51->Text = L"label51";
			// 
			// panel67
			// 
			this->panel67->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel67->Controls->Add(this->label52);
			this->panel67->Location = System::Drawing::Point(129, 3);
			this->panel67->Name = L"panel67";
			this->panel67->Size = System::Drawing::Size(36, 36);
			this->panel67->TabIndex = 24;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(-2, 12);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(41, 13);
			this->label52->TabIndex = 1;
			this->label52->Text = L"label52";
			// 
			// panel66
			// 
			this->panel66->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel66->Controls->Add(this->label53);
			this->panel66->Location = System::Drawing::Point(171, 3);
			this->panel66->Name = L"panel66";
			this->panel66->Size = System::Drawing::Size(36, 36);
			this->panel66->TabIndex = 22;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(-2, 12);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(41, 13);
			this->label53->TabIndex = 1;
			this->label53->Text = L"label53";
			// 
			// panel65
			// 
			this->panel65->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel65->Controls->Add(this->label54);
			this->panel65->Location = System::Drawing::Point(213, 3);
			this->panel65->Name = L"panel65";
			this->panel65->Size = System::Drawing::Size(36, 36);
			this->panel65->TabIndex = 5;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(-2, 12);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(41, 13);
			this->label54->TabIndex = 1;
			this->label54->Text = L"label54";
			// 
			// panel64
			// 
			this->panel64->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel64->Controls->Add(this->label55);
			this->panel64->Location = System::Drawing::Point(255, 3);
			this->panel64->Name = L"panel64";
			this->panel64->Size = System::Drawing::Size(36, 36);
			this->panel64->TabIndex = 6;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(-2, 12);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(41, 13);
			this->label55->TabIndex = 1;
			this->label55->Text = L"label55";
			// 
			// panel63
			// 
			this->panel63->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel63->Controls->Add(this->label56);
			this->panel63->Location = System::Drawing::Point(297, 3);
			this->panel63->Name = L"panel63";
			this->panel63->Size = System::Drawing::Size(36, 36);
			this->panel63->TabIndex = 7;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(-2, 12);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(41, 13);
			this->label56->TabIndex = 1;
			this->label56->Text = L"label56";
			// 
			// panel62
			// 
			this->panel62->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel62->Controls->Add(this->label57);
			this->panel62->Location = System::Drawing::Point(339, 3);
			this->panel62->Name = L"panel62";
			this->panel62->Size = System::Drawing::Size(36, 36);
			this->panel62->TabIndex = 8;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(-2, 12);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(41, 13);
			this->label57->TabIndex = 1;
			this->label57->Text = L"label57";
			// 
			// panel61
			// 
			this->panel61->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel61->Controls->Add(this->label58);
			this->panel61->Location = System::Drawing::Point(381, 3);
			this->panel61->Name = L"panel61";
			this->panel61->Size = System::Drawing::Size(36, 36);
			this->panel61->TabIndex = 9;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(-2, 12);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(41, 13);
			this->label58->TabIndex = 1;
			this->label58->Text = L"label58";
			// 
			// panel60
			// 
			this->panel60->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel60->Controls->Add(this->label59);
			this->panel60->Location = System::Drawing::Point(423, 3);
			this->panel60->Name = L"panel60";
			this->panel60->Size = System::Drawing::Size(36, 36);
			this->panel60->TabIndex = 10;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(-2, 12);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(41, 13);
			this->label59->TabIndex = 1;
			this->label59->Text = L"label59";
			// 
			// panel59
			// 
			this->panel59->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel59->Controls->Add(this->label60);
			this->panel59->Location = System::Drawing::Point(465, 3);
			this->panel59->Name = L"panel59";
			this->panel59->Size = System::Drawing::Size(36, 36);
			this->panel59->TabIndex = 13;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(-2, 12);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(41, 13);
			this->label60->TabIndex = 1;
			this->label60->Text = L"label60";
			// 
			// panel58
			// 
			this->panel58->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel58->Controls->Add(this->label61);
			this->panel58->Location = System::Drawing::Point(507, 3);
			this->panel58->Name = L"panel58";
			this->panel58->Size = System::Drawing::Size(36, 36);
			this->panel58->TabIndex = 11;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(-2, 12);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(41, 13);
			this->label61->TabIndex = 1;
			this->label61->Text = L"label61";
			// 
			// panel57
			// 
			this->panel57->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel57->Controls->Add(this->label62);
			this->panel57->Location = System::Drawing::Point(549, 3);
			this->panel57->Name = L"panel57";
			this->panel57->Size = System::Drawing::Size(36, 36);
			this->panel57->TabIndex = 12;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(-2, 12);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(41, 13);
			this->label62->TabIndex = 1;
			this->label62->Text = L"label62";
			// 
			// panel56
			// 
			this->panel56->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel56->Controls->Add(this->label63);
			this->panel56->Location = System::Drawing::Point(591, 3);
			this->panel56->Name = L"panel56";
			this->panel56->Size = System::Drawing::Size(36, 36);
			this->panel56->TabIndex = 21;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(-2, 12);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(41, 13);
			this->label63->TabIndex = 1;
			this->label63->Text = L"label63";
			// 
			// panel55
			// 
			this->panel55->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel55->Controls->Add(this->label64);
			this->panel55->Location = System::Drawing::Point(633, 3);
			this->panel55->Name = L"panel55";
			this->panel55->Size = System::Drawing::Size(36, 36);
			this->panel55->TabIndex = 14;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(-2, 12);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(41, 13);
			this->label64->TabIndex = 1;
			this->label64->Text = L"label64";
			// 
			// panel54
			// 
			this->panel54->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel54->Controls->Add(this->label65);
			this->panel54->Location = System::Drawing::Point(675, 3);
			this->panel54->Name = L"panel54";
			this->panel54->Size = System::Drawing::Size(36, 36);
			this->panel54->TabIndex = 15;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(-2, 12);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(41, 13);
			this->label65->TabIndex = 1;
			this->label65->Text = L"label65";
			// 
			// panel53
			// 
			this->panel53->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel53->Controls->Add(this->label66);
			this->panel53->Location = System::Drawing::Point(717, 3);
			this->panel53->Name = L"panel53";
			this->panel53->Size = System::Drawing::Size(36, 36);
			this->panel53->TabIndex = 16;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(-2, 12);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(41, 13);
			this->label66->TabIndex = 1;
			this->label66->Text = L"label66";
			// 
			// panel52
			// 
			this->panel52->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel52->Controls->Add(this->label67);
			this->panel52->Location = System::Drawing::Point(759, 3);
			this->panel52->Name = L"panel52";
			this->panel52->Size = System::Drawing::Size(36, 36);
			this->panel52->TabIndex = 17;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(-2, 12);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(41, 13);
			this->label67->TabIndex = 1;
			this->label67->Text = L"label67";
			// 
			// panel51
			// 
			this->panel51->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel51->Controls->Add(this->label68);
			this->panel51->Location = System::Drawing::Point(801, 3);
			this->panel51->Name = L"panel51";
			this->panel51->Size = System::Drawing::Size(36, 36);
			this->panel51->TabIndex = 18;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(-2, 12);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(41, 13);
			this->label68->TabIndex = 1;
			this->label68->Text = L"label68";
			// 
			// panel50
			// 
			this->panel50->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel50->Controls->Add(this->label69);
			this->panel50->Location = System::Drawing::Point(843, 3);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(36, 36);
			this->panel50->TabIndex = 19;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(-2, 12);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(41, 13);
			this->label69->TabIndex = 1;
			this->label69->Text = L"label69";
			// 
			// panel49
			// 
			this->panel49->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel49->Controls->Add(this->label70);
			this->panel49->Location = System::Drawing::Point(885, 3);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(36, 36);
			this->panel49->TabIndex = 20;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(-2, 12);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(41, 13);
			this->label70->TabIndex = 1;
			this->label70->Text = L"label70";
			// 
			// panel48
			// 
			this->panel48->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel48->Controls->Add(this->label71);
			this->panel48->Location = System::Drawing::Point(927, 3);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(36, 36);
			this->panel48->TabIndex = 4;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(-2, 12);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(41, 13);
			this->label71->TabIndex = 1;
			this->label71->Text = L"label71";
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
			this->panel25->Controls->Add(this->label26);
			this->panel25->Location = System::Drawing::Point(3, 3);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(36, 36);
			this->panel25->TabIndex = 4;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(-2, 12);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(41, 13);
			this->label26->TabIndex = 1;
			this->label26->Text = L"label26";
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel26->Controls->Add(this->label27);
			this->panel26->Location = System::Drawing::Point(45, 3);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(36, 36);
			this->panel26->TabIndex = 20;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(-2, 12);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 13);
			this->label27->TabIndex = 1;
			this->label27->Text = L"label27";
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel27->Controls->Add(this->label28);
			this->panel27->Location = System::Drawing::Point(87, 3);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(36, 36);
			this->panel27->TabIndex = 19;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(-2, 12);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 13);
			this->label28->TabIndex = 1;
			this->label28->Text = L"label28";
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel28->Controls->Add(this->label29);
			this->panel28->Location = System::Drawing::Point(129, 3);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(36, 36);
			this->panel28->TabIndex = 18;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(-2, 12);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(41, 13);
			this->label29->TabIndex = 1;
			this->label29->Text = L"label29";
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel29->Controls->Add(this->label30);
			this->panel29->Location = System::Drawing::Point(171, 3);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(36, 36);
			this->panel29->TabIndex = 17;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(-2, 12);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(41, 13);
			this->label30->TabIndex = 1;
			this->label30->Text = L"label30";
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel30->Controls->Add(this->label31);
			this->panel30->Location = System::Drawing::Point(213, 3);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(36, 36);
			this->panel30->TabIndex = 16;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(-2, 12);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(41, 13);
			this->label31->TabIndex = 1;
			this->label31->Text = L"label31";
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel31->Controls->Add(this->label32);
			this->panel31->Location = System::Drawing::Point(255, 3);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(36, 36);
			this->panel31->TabIndex = 15;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(-2, 12);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(41, 13);
			this->label32->TabIndex = 1;
			this->label32->Text = L"label32";
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel32->Controls->Add(this->label33);
			this->panel32->Location = System::Drawing::Point(297, 3);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(36, 36);
			this->panel32->TabIndex = 14;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(-2, 12);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(41, 13);
			this->label33->TabIndex = 1;
			this->label33->Text = L"label33";
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel33->Controls->Add(this->label34);
			this->panel33->Location = System::Drawing::Point(339, 3);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(36, 36);
			this->panel33->TabIndex = 21;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(-2, 12);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(41, 13);
			this->label34->TabIndex = 1;
			this->label34->Text = L"label34";
			// 
			// panel34
			// 
			this->panel34->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel34->Controls->Add(this->label35);
			this->panel34->Location = System::Drawing::Point(381, 3);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(36, 36);
			this->panel34->TabIndex = 12;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(-2, 12);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(41, 13);
			this->label35->TabIndex = 1;
			this->label35->Text = L"label35";
			// 
			// panel35
			// 
			this->panel35->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel35->Controls->Add(this->label36);
			this->panel35->Location = System::Drawing::Point(423, 3);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(36, 36);
			this->panel35->TabIndex = 11;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(-2, 12);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(41, 13);
			this->label36->TabIndex = 1;
			this->label36->Text = L"label36";
			// 
			// panel36
			// 
			this->panel36->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel36->Controls->Add(this->label37);
			this->panel36->Location = System::Drawing::Point(465, 3);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(36, 36);
			this->panel36->TabIndex = 13;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(-2, 12);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(41, 13);
			this->label37->TabIndex = 1;
			this->label37->Text = L"label37";
			// 
			// panel37
			// 
			this->panel37->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel37->Controls->Add(this->label38);
			this->panel37->Location = System::Drawing::Point(507, 3);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(36, 36);
			this->panel37->TabIndex = 10;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(-2, 12);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(41, 13);
			this->label38->TabIndex = 1;
			this->label38->Text = L"label38";
			// 
			// panel38
			// 
			this->panel38->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel38->Controls->Add(this->label39);
			this->panel38->Location = System::Drawing::Point(549, 3);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(36, 36);
			this->panel38->TabIndex = 9;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(-2, 12);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(41, 13);
			this->label39->TabIndex = 1;
			this->label39->Text = L"label39";
			// 
			// panel39
			// 
			this->panel39->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel39->Controls->Add(this->label40);
			this->panel39->Location = System::Drawing::Point(591, 3);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(36, 36);
			this->panel39->TabIndex = 8;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(-2, 12);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(41, 13);
			this->label40->TabIndex = 1;
			this->label40->Text = L"label40";
			// 
			// panel40
			// 
			this->panel40->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel40->Controls->Add(this->label41);
			this->panel40->Location = System::Drawing::Point(633, 3);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(36, 36);
			this->panel40->TabIndex = 7;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(-2, 12);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(41, 13);
			this->label41->TabIndex = 1;
			this->label41->Text = L"label41";
			// 
			// panel41
			// 
			this->panel41->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel41->Controls->Add(this->label42);
			this->panel41->Location = System::Drawing::Point(675, 3);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(36, 36);
			this->panel41->TabIndex = 6;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(-2, 12);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(41, 13);
			this->label42->TabIndex = 1;
			this->label42->Text = L"label42";
			// 
			// panel42
			// 
			this->panel42->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel42->Controls->Add(this->label43);
			this->panel42->Location = System::Drawing::Point(717, 3);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(36, 36);
			this->panel42->TabIndex = 5;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(-2, 12);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(41, 13);
			this->label43->TabIndex = 1;
			this->label43->Text = L"label43";
			// 
			// panel43
			// 
			this->panel43->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel43->Controls->Add(this->label44);
			this->panel43->Location = System::Drawing::Point(759, 3);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(36, 36);
			this->panel43->TabIndex = 22;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(-2, 12);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(41, 13);
			this->label44->TabIndex = 1;
			this->label44->Text = L"label44";
			// 
			// panel44
			// 
			this->panel44->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel44->Controls->Add(this->label45);
			this->panel44->Location = System::Drawing::Point(801, 3);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(36, 36);
			this->panel44->TabIndex = 24;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(-2, 12);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(41, 13);
			this->label45->TabIndex = 1;
			this->label45->Text = L"label45";
			// 
			// panel45
			// 
			this->panel45->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel45->Controls->Add(this->label46);
			this->panel45->Location = System::Drawing::Point(843, 3);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(36, 36);
			this->panel45->TabIndex = 25;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(-2, 12);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(41, 13);
			this->label46->TabIndex = 1;
			this->label46->Text = L"label46";
			// 
			// panel46
			// 
			this->panel46->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel46->Controls->Add(this->label47);
			this->panel46->Location = System::Drawing::Point(885, 3);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(36, 36);
			this->panel46->TabIndex = 23;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(-2, 12);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(41, 13);
			this->label47->TabIndex = 1;
			this->label47->Text = L"label47";
			// 
			// panel47
			// 
			this->panel47->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel47->Controls->Add(this->label48);
			this->panel47->Location = System::Drawing::Point(927, 3);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(36, 36);
			this->panel47->TabIndex = 26;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(-2, 12);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(41, 13);
			this->label48->TabIndex = 1;
			this->label48->Text = L"label48";
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
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(36, 36);
			this->panel2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 36);
			this->label3->TabIndex = 0;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(45, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(36, 36);
			this->panel3->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"label4";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel4->Controls->Add(this->label5);
			this->panel4->Location = System::Drawing::Point(87, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(36, 36);
			this->panel4->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"label5";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel5->Controls->Add(this->label6);
			this->panel5->Location = System::Drawing::Point(129, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(36, 36);
			this->panel5->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"label6";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel6->Controls->Add(this->label7);
			this->panel6->Location = System::Drawing::Point(171, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(36, 36);
			this->panel6->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"label7";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel7->Controls->Add(this->label8);
			this->panel7->Location = System::Drawing::Point(213, 3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(36, 36);
			this->panel7->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"label8";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel8->Controls->Add(this->label9);
			this->panel8->Location = System::Drawing::Point(255, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(36, 36);
			this->panel8->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"label9";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel9->Controls->Add(this->label10);
			this->panel9->Location = System::Drawing::Point(297, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(36, 36);
			this->panel9->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(-2, 12);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"label10";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel10->Controls->Add(this->label11);
			this->panel10->Location = System::Drawing::Point(339, 3);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(36, 36);
			this->panel10->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(-2, 12);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"label11";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel11->Controls->Add(this->label12);
			this->panel11->Location = System::Drawing::Point(381, 3);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(36, 36);
			this->panel11->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(-2, 12);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"label12";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel12->Controls->Add(this->label13);
			this->panel12->Location = System::Drawing::Point(423, 3);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(36, 36);
			this->panel12->TabIndex = 1;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(-2, 12);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"label13";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel13->Controls->Add(this->label14);
			this->panel13->Location = System::Drawing::Point(465, 3);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(36, 36);
			this->panel13->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(-2, 12);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 1;
			this->label14->Text = L"label14";
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel14->Controls->Add(this->label15);
			this->panel14->Location = System::Drawing::Point(507, 3);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(36, 36);
			this->panel14->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(-2, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"label15";
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel15->Controls->Add(this->label16);
			this->panel15->Location = System::Drawing::Point(549, 3);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(36, 36);
			this->panel15->TabIndex = 1;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(-2, 12);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 1;
			this->label16->Text = L"label16";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel16->Controls->Add(this->label17);
			this->panel16->Location = System::Drawing::Point(591, 3);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(36, 36);
			this->panel16->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(-2, 12);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = L"label17";
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel17->Controls->Add(this->label18);
			this->panel17->Location = System::Drawing::Point(633, 3);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(36, 36);
			this->panel17->TabIndex = 1;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(-2, 12);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 1;
			this->label18->Text = L"label18";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel18->Controls->Add(this->label19);
			this->panel18->Location = System::Drawing::Point(675, 3);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(36, 36);
			this->panel18->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(-2, 12);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 1;
			this->label19->Text = L"label19";
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel19->Controls->Add(this->label20);
			this->panel19->Location = System::Drawing::Point(717, 3);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(36, 36);
			this->panel19->TabIndex = 1;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(-2, 12);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 1;
			this->label20->Text = L"label20";
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel20->Controls->Add(this->label21);
			this->panel20->Location = System::Drawing::Point(759, 3);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(36, 36);
			this->panel20->TabIndex = 2;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(-2, 12);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 13);
			this->label21->TabIndex = 1;
			this->label21->Text = L"label21";
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel21->Controls->Add(this->label22);
			this->panel21->Location = System::Drawing::Point(801, 3);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(36, 36);
			this->panel21->TabIndex = 3;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(-2, 12);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 13);
			this->label22->TabIndex = 1;
			this->label22->Text = L"label22";
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel22->Controls->Add(this->label23);
			this->panel22->Location = System::Drawing::Point(843, 3);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(36, 36);
			this->panel22->TabIndex = 3;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(-2, 12);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 1;
			this->label23->Text = L"label23";
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel23->Controls->Add(this->label24);
			this->panel23->Location = System::Drawing::Point(885, 3);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(36, 36);
			this->panel23->TabIndex = 3;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(-2, 12);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 13);
			this->label24->TabIndex = 1;
			this->label24->Text = L"label24";
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel24->Controls->Add(this->label25);
			this->panel24->Location = System::Drawing::Point(927, 3);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(36, 36);
			this->panel24->TabIndex = 3;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(-2, 12);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 13);
			this->label25->TabIndex = 1;
			this->label25->Text = L"label25";
			// 
			// groupBox_read
			// 
			this->groupBox_read->Controls->Add(this->maskedTextBox3);
			this->groupBox_read->Controls->Add(this->button1);
			this->groupBox_read->Controls->Add(this->label187);
			this->groupBox_read->Location = System::Drawing::Point(0, 3);
			this->groupBox_read->Name = L"groupBox_read";
			this->groupBox_read->Size = System::Drawing::Size(587, 152);
			this->groupBox_read->TabIndex = 8;
			this->groupBox_read->TabStop = false;
			this->groupBox_read->Text = L"Чтение из канала";
			this->groupBox_read->Visible = false;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(80, 26);
			this->maskedTextBox3->Mask = L"000";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(101, 20);
			this->maskedTextBox3->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(446, 118);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label187
			// 
			this->label187->AutoSize = true;
			this->label187->Location = System::Drawing::Point(6, 29);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(68, 13);
			this->label187->TabIndex = 0;
			this->label187->Text = L"Имя канала";
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
			this->groupBox_del->ResumeLayout(false);
			this->groupBox_del->PerformLayout();
			this->groupBox_add->ResumeLayout(false);
			this->groupBox_add->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->flowLayoutPanel8->ResumeLayout(false);
			this->panel163->ResumeLayout(false);
			this->panel163->PerformLayout();
			this->panel164->ResumeLayout(false);
			this->panel164->PerformLayout();
			this->panel165->ResumeLayout(false);
			this->panel165->PerformLayout();
			this->panel166->ResumeLayout(false);
			this->panel166->PerformLayout();
			this->panel167->ResumeLayout(false);
			this->panel167->PerformLayout();
			this->panel168->ResumeLayout(false);
			this->panel168->PerformLayout();
			this->panel169->ResumeLayout(false);
			this->panel169->PerformLayout();
			this->panel170->ResumeLayout(false);
			this->panel170->PerformLayout();
			this->panel171->ResumeLayout(false);
			this->panel171->PerformLayout();
			this->panel172->ResumeLayout(false);
			this->panel172->PerformLayout();
			this->panel173->ResumeLayout(false);
			this->panel173->PerformLayout();
			this->panel174->ResumeLayout(false);
			this->panel174->PerformLayout();
			this->panel175->ResumeLayout(false);
			this->panel175->PerformLayout();
			this->panel176->ResumeLayout(false);
			this->panel176->PerformLayout();
			this->panel177->ResumeLayout(false);
			this->panel177->PerformLayout();
			this->panel178->ResumeLayout(false);
			this->panel178->PerformLayout();
			this->panel179->ResumeLayout(false);
			this->panel179->PerformLayout();
			this->panel180->ResumeLayout(false);
			this->panel180->PerformLayout();
			this->panel181->ResumeLayout(false);
			this->panel181->PerformLayout();
			this->panel182->ResumeLayout(false);
			this->panel182->PerformLayout();
			this->panel183->ResumeLayout(false);
			this->panel183->PerformLayout();
			this->panel184->ResumeLayout(false);
			this->panel184->PerformLayout();
			this->panel185->ResumeLayout(false);
			this->panel185->PerformLayout();
			this->flowLayoutPanel7->ResumeLayout(false);
			this->panel140->ResumeLayout(false);
			this->panel140->PerformLayout();
			this->panel141->ResumeLayout(false);
			this->panel141->PerformLayout();
			this->panel142->ResumeLayout(false);
			this->panel142->PerformLayout();
			this->panel143->ResumeLayout(false);
			this->panel143->PerformLayout();
			this->panel144->ResumeLayout(false);
			this->panel144->PerformLayout();
			this->panel145->ResumeLayout(false);
			this->panel145->PerformLayout();
			this->panel146->ResumeLayout(false);
			this->panel146->PerformLayout();
			this->panel147->ResumeLayout(false);
			this->panel147->PerformLayout();
			this->panel148->ResumeLayout(false);
			this->panel148->PerformLayout();
			this->panel149->ResumeLayout(false);
			this->panel149->PerformLayout();
			this->panel150->ResumeLayout(false);
			this->panel150->PerformLayout();
			this->panel151->ResumeLayout(false);
			this->panel151->PerformLayout();
			this->panel152->ResumeLayout(false);
			this->panel152->PerformLayout();
			this->panel153->ResumeLayout(false);
			this->panel153->PerformLayout();
			this->panel154->ResumeLayout(false);
			this->panel154->PerformLayout();
			this->panel155->ResumeLayout(false);
			this->panel155->PerformLayout();
			this->panel156->ResumeLayout(false);
			this->panel156->PerformLayout();
			this->panel157->ResumeLayout(false);
			this->panel157->PerformLayout();
			this->panel158->ResumeLayout(false);
			this->panel158->PerformLayout();
			this->panel159->ResumeLayout(false);
			this->panel159->PerformLayout();
			this->panel160->ResumeLayout(false);
			this->panel160->PerformLayout();
			this->panel161->ResumeLayout(false);
			this->panel161->PerformLayout();
			this->panel162->ResumeLayout(false);
			this->panel162->PerformLayout();
			this->flowLayoutPanel6->ResumeLayout(false);
			this->panel117->ResumeLayout(false);
			this->panel117->PerformLayout();
			this->panel118->ResumeLayout(false);
			this->panel118->PerformLayout();
			this->panel119->ResumeLayout(false);
			this->panel119->PerformLayout();
			this->panel120->ResumeLayout(false);
			this->panel120->PerformLayout();
			this->panel121->ResumeLayout(false);
			this->panel121->PerformLayout();
			this->panel122->ResumeLayout(false);
			this->panel122->PerformLayout();
			this->panel123->ResumeLayout(false);
			this->panel123->PerformLayout();
			this->panel124->ResumeLayout(false);
			this->panel124->PerformLayout();
			this->panel125->ResumeLayout(false);
			this->panel125->PerformLayout();
			this->panel126->ResumeLayout(false);
			this->panel126->PerformLayout();
			this->panel127->ResumeLayout(false);
			this->panel127->PerformLayout();
			this->panel128->ResumeLayout(false);
			this->panel128->PerformLayout();
			this->panel129->ResumeLayout(false);
			this->panel129->PerformLayout();
			this->panel130->ResumeLayout(false);
			this->panel130->PerformLayout();
			this->panel131->ResumeLayout(false);
			this->panel131->PerformLayout();
			this->panel132->ResumeLayout(false);
			this->panel132->PerformLayout();
			this->panel133->ResumeLayout(false);
			this->panel133->PerformLayout();
			this->panel134->ResumeLayout(false);
			this->panel134->PerformLayout();
			this->panel135->ResumeLayout(false);
			this->panel135->PerformLayout();
			this->panel136->ResumeLayout(false);
			this->panel136->PerformLayout();
			this->panel137->ResumeLayout(false);
			this->panel137->PerformLayout();
			this->panel138->ResumeLayout(false);
			this->panel138->PerformLayout();
			this->panel139->ResumeLayout(false);
			this->panel139->PerformLayout();
			this->flowLayoutPanel5->ResumeLayout(false);
			this->panel94->ResumeLayout(false);
			this->panel94->PerformLayout();
			this->panel95->ResumeLayout(false);
			this->panel95->PerformLayout();
			this->panel96->ResumeLayout(false);
			this->panel96->PerformLayout();
			this->panel97->ResumeLayout(false);
			this->panel97->PerformLayout();
			this->panel98->ResumeLayout(false);
			this->panel98->PerformLayout();
			this->panel99->ResumeLayout(false);
			this->panel99->PerformLayout();
			this->panel100->ResumeLayout(false);
			this->panel100->PerformLayout();
			this->panel101->ResumeLayout(false);
			this->panel101->PerformLayout();
			this->panel102->ResumeLayout(false);
			this->panel102->PerformLayout();
			this->panel103->ResumeLayout(false);
			this->panel103->PerformLayout();
			this->panel104->ResumeLayout(false);
			this->panel104->PerformLayout();
			this->panel105->ResumeLayout(false);
			this->panel105->PerformLayout();
			this->panel106->ResumeLayout(false);
			this->panel106->PerformLayout();
			this->panel107->ResumeLayout(false);
			this->panel107->PerformLayout();
			this->panel108->ResumeLayout(false);
			this->panel108->PerformLayout();
			this->panel109->ResumeLayout(false);
			this->panel109->PerformLayout();
			this->panel110->ResumeLayout(false);
			this->panel110->PerformLayout();
			this->panel111->ResumeLayout(false);
			this->panel111->PerformLayout();
			this->panel112->ResumeLayout(false);
			this->panel112->PerformLayout();
			this->panel113->ResumeLayout(false);
			this->panel113->PerformLayout();
			this->panel114->ResumeLayout(false);
			this->panel114->PerformLayout();
			this->panel115->ResumeLayout(false);
			this->panel115->PerformLayout();
			this->panel116->ResumeLayout(false);
			this->panel116->PerformLayout();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->panel71->ResumeLayout(false);
			this->panel71->PerformLayout();
			this->panel72->ResumeLayout(false);
			this->panel72->PerformLayout();
			this->panel73->ResumeLayout(false);
			this->panel73->PerformLayout();
			this->panel74->ResumeLayout(false);
			this->panel74->PerformLayout();
			this->panel75->ResumeLayout(false);
			this->panel75->PerformLayout();
			this->panel76->ResumeLayout(false);
			this->panel76->PerformLayout();
			this->panel77->ResumeLayout(false);
			this->panel77->PerformLayout();
			this->panel78->ResumeLayout(false);
			this->panel78->PerformLayout();
			this->panel79->ResumeLayout(false);
			this->panel79->PerformLayout();
			this->panel80->ResumeLayout(false);
			this->panel80->PerformLayout();
			this->panel81->ResumeLayout(false);
			this->panel81->PerformLayout();
			this->panel82->ResumeLayout(false);
			this->panel82->PerformLayout();
			this->panel83->ResumeLayout(false);
			this->panel83->PerformLayout();
			this->panel84->ResumeLayout(false);
			this->panel84->PerformLayout();
			this->panel85->ResumeLayout(false);
			this->panel85->PerformLayout();
			this->panel86->ResumeLayout(false);
			this->panel86->PerformLayout();
			this->panel87->ResumeLayout(false);
			this->panel87->PerformLayout();
			this->panel88->ResumeLayout(false);
			this->panel88->PerformLayout();
			this->panel89->ResumeLayout(false);
			this->panel89->PerformLayout();
			this->panel90->ResumeLayout(false);
			this->panel90->PerformLayout();
			this->panel91->ResumeLayout(false);
			this->panel91->PerformLayout();
			this->panel92->ResumeLayout(false);
			this->panel92->PerformLayout();
			this->panel93->ResumeLayout(false);
			this->panel93->PerformLayout();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->panel70->ResumeLayout(false);
			this->panel70->PerformLayout();
			this->panel69->ResumeLayout(false);
			this->panel69->PerformLayout();
			this->panel68->ResumeLayout(false);
			this->panel68->PerformLayout();
			this->panel67->ResumeLayout(false);
			this->panel67->PerformLayout();
			this->panel66->ResumeLayout(false);
			this->panel66->PerformLayout();
			this->panel65->ResumeLayout(false);
			this->panel65->PerformLayout();
			this->panel64->ResumeLayout(false);
			this->panel64->PerformLayout();
			this->panel63->ResumeLayout(false);
			this->panel63->PerformLayout();
			this->panel62->ResumeLayout(false);
			this->panel62->PerformLayout();
			this->panel61->ResumeLayout(false);
			this->panel61->PerformLayout();
			this->panel60->ResumeLayout(false);
			this->panel60->PerformLayout();
			this->panel59->ResumeLayout(false);
			this->panel59->PerformLayout();
			this->panel58->ResumeLayout(false);
			this->panel58->PerformLayout();
			this->panel57->ResumeLayout(false);
			this->panel57->PerformLayout();
			this->panel56->ResumeLayout(false);
			this->panel56->PerformLayout();
			this->panel55->ResumeLayout(false);
			this->panel55->PerformLayout();
			this->panel54->ResumeLayout(false);
			this->panel54->PerformLayout();
			this->panel53->ResumeLayout(false);
			this->panel53->PerformLayout();
			this->panel52->ResumeLayout(false);
			this->panel52->PerformLayout();
			this->panel51->ResumeLayout(false);
			this->panel51->PerformLayout();
			this->panel50->ResumeLayout(false);
			this->panel50->PerformLayout();
			this->panel49->ResumeLayout(false);
			this->panel49->PerformLayout();
			this->panel48->ResumeLayout(false);
			this->panel48->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			this->panel28->ResumeLayout(false);
			this->panel28->PerformLayout();
			this->panel29->ResumeLayout(false);
			this->panel29->PerformLayout();
			this->panel30->ResumeLayout(false);
			this->panel30->PerformLayout();
			this->panel31->ResumeLayout(false);
			this->panel31->PerformLayout();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			this->panel33->ResumeLayout(false);
			this->panel33->PerformLayout();
			this->panel34->ResumeLayout(false);
			this->panel34->PerformLayout();
			this->panel35->ResumeLayout(false);
			this->panel35->PerformLayout();
			this->panel36->ResumeLayout(false);
			this->panel36->PerformLayout();
			this->panel37->ResumeLayout(false);
			this->panel37->PerformLayout();
			this->panel38->ResumeLayout(false);
			this->panel38->PerformLayout();
			this->panel39->ResumeLayout(false);
			this->panel39->PerformLayout();
			this->panel40->ResumeLayout(false);
			this->panel40->PerformLayout();
			this->panel41->ResumeLayout(false);
			this->panel41->PerformLayout();
			this->panel42->ResumeLayout(false);
			this->panel42->PerformLayout();
			this->panel43->ResumeLayout(false);
			this->panel43->PerformLayout();
			this->panel44->ResumeLayout(false);
			this->panel44->PerformLayout();
			this->panel45->ResumeLayout(false);
			this->panel45->PerformLayout();
			this->panel46->ResumeLayout(false);
			this->panel46->PerformLayout();
			this->panel47->ResumeLayout(false);
			this->panel47->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->groupBox_read->ResumeLayout(false);
			this->groupBox_read->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: 
	int selected_process = -1;
	cliext::vector<int> actions;

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
private: System::Void button_addAction_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_delPipe_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void maskedTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_delAction_Click(System::Object^ sender, System::EventArgs^ e);
};
}
