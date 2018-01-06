#pragma once
#include <sstream>
#include <string> 
#include <msclr\marshal_cppstd.h>
#include <stdlib.h>
#include "datastruct.h"


namespace BDMatch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace DataStruct;

	/// <summary>
	/// Settings 摘要
	/// </summary>
	enum SettingType { FFTNum, OutputPCM, FindField, MinFindDb, MaxLength, MinCheckNum, Draw, MatchAss, ParallelDecode };
	public delegate void SettingIntCallback(SettingType type, int val);
	public delegate void SettingBoolCallback(SettingType type, bool val);
	public delegate void NullCallback();
	
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings(SettingIntCallback^ setintbackin, SettingBoolCallback^ setboolbackin, NullCallback^ nullbackin, SettingVals ^ settingin);

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: SettingVals ^ setting = nullptr;
	private: SettingIntCallback ^ setintback = nullptr;
	private: SettingBoolCallback ^ setboolback = nullptr;
	private: NullCallback ^ nullback = nullptr;
	private: System::Windows::Forms::CheckBox^  OutPCM;



	private: System::Windows::Forms::NumericUpDown^  FindSec;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  MindB;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  MaxLengthSet;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  FFTnumList;
	private: System::Windows::Forms::CheckBox^  DrawSet;
	private: System::Windows::Forms::CheckBox^  MatchAssSet;


	private: System::Windows::Forms::NumericUpDown^  MinCheckNumSet;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  ParaDecode;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TableLayoutPanel^  DecodeLayoutPanel;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TableLayoutPanel^  MatchLayoutPanel;


	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TableLayoutPanel^  SpectrumLayoutPanel;





	public:


	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Settings::typeid));
			this->OutPCM = (gcnew System::Windows::Forms::CheckBox());
			this->FindSec = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MindB = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MaxLengthSet = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->FFTnumList = (gcnew System::Windows::Forms::ComboBox());
			this->DrawSet = (gcnew System::Windows::Forms::CheckBox());
			this->MatchAssSet = (gcnew System::Windows::Forms::CheckBox());
			this->MinCheckNumSet = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ParaDecode = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->DecodeLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->MatchLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->SpectrumLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FindSec))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MindB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MaxLengthSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MinCheckNumSet))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->DecodeLayoutPanel->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->MatchLayoutPanel->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SpectrumLayoutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// OutPCM
			// 
			this->OutPCM->AutoSize = true;
			this->DecodeLayoutPanel->SetColumnSpan(this->OutPCM, 3);
			this->OutPCM->Dock = System::Windows::Forms::DockStyle::Left;
			this->OutPCM->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F));
			this->OutPCM->Location = System::Drawing::Point(10, 202);
			this->OutPCM->Margin = System::Windows::Forms::Padding(7, 3, 3, 3);
			this->OutPCM->Name = L"OutPCM";
			this->OutPCM->Size = System::Drawing::Size(228, 35);
			this->OutPCM->TabIndex = 3;
			this->OutPCM->Text = L"输出解码后的音频";
			this->OutPCM->UseVisualStyleBackColor = true;
			this->OutPCM->CheckedChanged += gcnew System::EventHandler(this, &Settings::OutPCM_CheckedChanged);
			// 
			// FindSec
			// 
			this->FindSec->Dock = System::Windows::Forms::DockStyle::Left;
			this->FindSec->Font = (gcnew System::Drawing::Font(L"微软雅黑", 11.8F));
			this->FindSec->Location = System::Drawing::Point(210, 78);
			this->FindSec->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->FindSec->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->FindSec->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->FindSec->Name = L"FindSec";
			this->FindSec->Size = System::Drawing::Size(92, 33);
			this->FindSec->TabIndex = 4;
			this->FindSec->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->FindSec->ValueChanged += gcnew System::EventHandler(this, &Settings::FindSec_ValueChanged);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(6, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 44);
			this->label2->TabIndex = 5;
			this->label2->Text = L"查找范围：前后";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MindB
			// 
			this->MindB->Dock = System::Windows::Forms::DockStyle::Left;
			this->MindB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 11.8F));
			this->MindB->Location = System::Drawing::Point(150, 135);
			this->MindB->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->MindB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->MindB->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, System::Int32::MinValue });
			this->MindB->Name = L"MindB";
			this->MindB->Size = System::Drawing::Size(92, 33);
			this->MindB->TabIndex = 6;
			this->MindB->ValueChanged += gcnew System::EventHandler(this, &Settings::MindB_ValueChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(6, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 44);
			this->label1->TabIndex = 7;
			this->label1->Text = L"最小响度：";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MaxLengthSet
			// 
			this->MaxLengthSet->Dock = System::Windows::Forms::DockStyle::Left;
			this->MaxLengthSet->Font = (gcnew System::Drawing::Font(L"微软雅黑", 11.8F));
			this->MaxLengthSet->Location = System::Drawing::Point(210, 176);
			this->MaxLengthSet->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->MaxLengthSet->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->MaxLengthSet->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->MaxLengthSet->Name = L"MaxLengthSet";
			this->MaxLengthSet->Size = System::Drawing::Size(92, 33);
			this->MaxLengthSet->TabIndex = 8;
			this->MaxLengthSet->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->MaxLengthSet->ValueChanged += gcnew System::EventHandler(this, &Settings::MaxLengthSet_ValueChanged);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(6, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(198, 44);
			this->label3->TabIndex = 9;
			this->label3->Text = L"最大查找句长：";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(6, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 44);
			this->label4->TabIndex = 10;
			this->label4->Text = L"FFT个数：";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// FFTnumList
			// 
			this->DecodeLayoutPanel->SetColumnSpan(this->FFTnumList, 2);
			this->FFTnumList->Dock = System::Windows::Forms::DockStyle::Left;
			this->FFTnumList->Font = (gcnew System::Drawing::Font(L"微软雅黑", 11.8F));
			this->FFTnumList->FormattingEnabled = true;
			this->FFTnumList->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"64", L"128", L"256", L"512", L"1024", L"2048",
					L"4096", L"8192", L"16384"
			});
			this->FFTnumList->Location = System::Drawing::Point(150, 8);
			this->FFTnumList->Margin = System::Windows::Forms::Padding(3, 5, 3, 3);
			this->FFTnumList->Name = L"FFTnumList";
			this->FFTnumList->Size = System::Drawing::Size(197, 35);
			this->FFTnumList->TabIndex = 11;
			this->FFTnumList->SelectedIndexChanged += gcnew System::EventHandler(this, &Settings::FFTnumList_SelectedIndexChanged);
			// 
			// DrawSet
			// 
			this->DrawSet->AutoSize = true;
			this->SpectrumLayoutPanel->SetColumnSpan(this->DrawSet, 2);
			this->DrawSet->Dock = System::Windows::Forms::DockStyle::Left;
			this->DrawSet->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F));
			this->DrawSet->Location = System::Drawing::Point(13, 6);
			this->DrawSet->Margin = System::Windows::Forms::Padding(10, 3, 3, 3);
			this->DrawSet->Name = L"DrawSet";
			this->DrawSet->Size = System::Drawing::Size(132, 35);
			this->DrawSet->TabIndex = 12;
			this->DrawSet->Text = L"作声谱图";
			this->DrawSet->UseVisualStyleBackColor = true;
			this->DrawSet->CheckedChanged += gcnew System::EventHandler(this, &Settings::DrawSet_CheckedChanged);
			// 
			// MatchAssSet
			// 
			this->MatchAssSet->AutoSize = true;
			this->MatchLayoutPanel->SetColumnSpan(this->MatchAssSet, 3);
			this->MatchAssSet->Dock = System::Windows::Forms::DockStyle::Left;
			this->MatchAssSet->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F));
			this->MatchAssSet->Location = System::Drawing::Point(10, 6);
			this->MatchAssSet->Margin = System::Windows::Forms::Padding(7, 3, 3, 3);
			this->MatchAssSet->Name = L"MatchAssSet";
			this->MatchAssSet->Size = System::Drawing::Size(204, 35);
			this->MatchAssSet->TabIndex = 13;
			this->MatchAssSet->Text = L"对字幕进行匹配";
			this->MatchAssSet->UseVisualStyleBackColor = true;
			this->MatchAssSet->CheckedChanged += gcnew System::EventHandler(this, &Settings::MatchAssSet_CheckedChanged);
			// 
			// MinCheckNumSet
			// 
			this->MinCheckNumSet->Dock = System::Windows::Forms::DockStyle::Left;
			this->MinCheckNumSet->Font = (gcnew System::Drawing::Font(L"微软雅黑", 11.8F));
			this->MinCheckNumSet->Location = System::Drawing::Point(210, 247);
			this->MinCheckNumSet->Margin = System::Windows::Forms::Padding(3, 7, 3, 3);
			this->MinCheckNumSet->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->MinCheckNumSet->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->MinCheckNumSet->Name = L"MinCheckNumSet";
			this->MinCheckNumSet->Size = System::Drawing::Size(92, 33);
			this->MinCheckNumSet->TabIndex = 14;
			this->MinCheckNumSet->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->MinCheckNumSet->ValueChanged += gcnew System::EventHandler(this, &Settings::MinCheckNumSet_ValueChanged);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(6, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(198, 44);
			this->label5->TabIndex = 15;
			this->label5->Text = L"选点确认次数：";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ParaDecode
			// 
			this->ParaDecode->AutoSize = true;
			this->DecodeLayoutPanel->SetColumnSpan(this->ParaDecode, 3);
			this->ParaDecode->Dock = System::Windows::Forms::DockStyle::Left;
			this->ParaDecode->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F));
			this->ParaDecode->Location = System::Drawing::Point(10, 297);
			this->ParaDecode->Margin = System::Windows::Forms::Padding(7, 3, 3, 3);
			this->ParaDecode->Name = L"ParaDecode";
			this->ParaDecode->Size = System::Drawing::Size(132, 35);
			this->ParaDecode->TabIndex = 16;
			this->ParaDecode->Text = L"并行解码";
			this->ParaDecode->UseVisualStyleBackColor = true;
			this->ParaDecode->CheckedChanged += gcnew System::EventHandler(this, &Settings::ParaDecode_CheckedChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14));
			this->tabControl1->Location = System::Drawing::Point(5, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(875, 492);
			this->tabControl1->TabIndex = 17;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->DecodeLayoutPanel);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12));
			this->tabPage1->Location = System::Drawing::Point(4, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 3, 30, 3);
			this->tabPage1->Size = System::Drawing::Size(867, 449);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"解码设置";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// DecodeLayoutPanel
			// 
			this->DecodeLayoutPanel->AutoScroll = true;
			this->DecodeLayoutPanel->AutoSize = true;
			this->DecodeLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->DecodeLayoutPanel->ColumnCount = 3;
			this->DecodeLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				144)));
			this->DecodeLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				99)));
			this->DecodeLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->DecodeLayoutPanel->Controls->Add(this->label15, 2, 2);
			this->DecodeLayoutPanel->Controls->Add(this->label8, 0, 5);
			this->DecodeLayoutPanel->Controls->Add(this->label7, 0, 3);
			this->DecodeLayoutPanel->Controls->Add(this->label6, 0, 1);
			this->DecodeLayoutPanel->Controls->Add(this->OutPCM, 0, 4);
			this->DecodeLayoutPanel->Controls->Add(this->ParaDecode, 0, 6);
			this->DecodeLayoutPanel->Controls->Add(this->label1, 0, 2);
			this->DecodeLayoutPanel->Controls->Add(this->MindB, 1, 2);
			this->DecodeLayoutPanel->Controls->Add(this->label9, 0, 7);
			this->DecodeLayoutPanel->Controls->Add(this->label4, 0, 0);
			this->DecodeLayoutPanel->Controls->Add(this->FFTnumList, 1, 0);
			this->DecodeLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->DecodeLayoutPanel->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->DecodeLayoutPanel->Location = System::Drawing::Point(3, 3);
			this->DecodeLayoutPanel->Name = L"DecodeLayoutPanel";
			this->DecodeLayoutPanel->Padding = System::Windows::Forms::Padding(3);
			this->DecodeLayoutPanel->RowCount = 8;
			this->DecodeLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->DecodeLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->DecodeLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->DecodeLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->DecodeLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->DecodeLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->DecodeLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->DecodeLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->DecodeLayoutPanel->Size = System::Drawing::Size(834, 443);
			this->DecodeLayoutPanel->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label15->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(249, 128);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(579, 44);
			this->label15->TabIndex = 21;
			this->label15->Text = L"dB";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->AutoEllipsis = true;
			this->label8->AutoSize = true;
			this->DecodeLayoutPanel->SetColumnSpan(this->label8, 3);
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Location = System::Drawing::Point(48, 240);
			this->label8->Margin = System::Windows::Forms::Padding(45, 0, 3, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(780, 54);
			this->label8->TabIndex = 19;
			this->label8->Text = L"生成WAV格式文件，用以检查解码是否正常工作。重采样生成的音频会有噪声，但不会影响匹配。";
			// 
			// label7
			// 
			this->label7->AutoEllipsis = true;
			this->label7->AutoSize = true;
			this->DecodeLayoutPanel->SetColumnSpan(this->label7, 3);
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(48, 172);
			this->label7->Margin = System::Windows::Forms::Padding(45, 0, 3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(780, 27);
			this->label7->TabIndex = 18;
			this->label7->Text = L"最小响度以下的噪声会被过滤，以保证解码生成的声谱不被噪声干扰。";
			// 
			// label6
			// 
			this->label6->AutoEllipsis = true;
			this->label6->AutoSize = true;
			this->DecodeLayoutPanel->SetColumnSpan(this->label6, 3);
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Location = System::Drawing::Point(48, 47);
			this->label6->Margin = System::Windows::Forms::Padding(45, 0, 3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(780, 81);
			this->label6->TabIndex = 17;
			this->label6->Text = L"进行一次快速傅里叶变换（Fast Fourier Transform）所输入的采样点个数。请设置为接近采样率百分之一的数值。FFT个数过小会导致解码时间缓慢，FF"
				L"T个数过大会导致匹配精度下降。";
			// 
			// label9
			// 
			this->label9->AutoEllipsis = true;
			this->label9->AutoSize = true;
			this->DecodeLayoutPanel->SetColumnSpan(this->label9, 3);
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(48, 335);
			this->label9->Margin = System::Windows::Forms::Padding(45, 0, 3, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(780, 105);
			this->label9->TabIndex = 20;
			this->label9->Text = L"同时进行TV和BD文件的解码，请在拥有高性能硬盘的设备上开启此选项，否则可能会导致在硬盘负载较大时解码速度急剧下降。";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->MatchLayoutPanel);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12));
			this->tabPage2->Location = System::Drawing::Point(4, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 3, 30, 3);
			this->tabPage2->Size = System::Drawing::Size(867, 449);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"匹配设置";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// MatchLayoutPanel
			// 
			this->MatchLayoutPanel->AutoScroll = true;
			this->MatchLayoutPanel->AutoSize = true;
			this->MatchLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->MatchLayoutPanel->ColumnCount = 3;
			this->MatchLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				204)));
			this->MatchLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				99)));
			this->MatchLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->MatchLayoutPanel->Controls->Add(this->label17, 2, 4);
			this->MatchLayoutPanel->Controls->Add(this->label14, 0, 7);
			this->MatchLayoutPanel->Controls->Add(this->label16, 2, 2);
			this->MatchLayoutPanel->Controls->Add(this->MinCheckNumSet, 1, 6);
			this->MatchLayoutPanel->Controls->Add(this->label13, 0, 5);
			this->MatchLayoutPanel->Controls->Add(this->label5, 0, 6);
			this->MatchLayoutPanel->Controls->Add(this->MatchAssSet, 0, 0);
			this->MatchLayoutPanel->Controls->Add(this->label10, 0, 1);
			this->MatchLayoutPanel->Controls->Add(this->label11, 0, 3);
			this->MatchLayoutPanel->Controls->Add(this->label2, 0, 2);
			this->MatchLayoutPanel->Controls->Add(this->MaxLengthSet, 1, 4);
			this->MatchLayoutPanel->Controls->Add(this->FindSec, 1, 2);
			this->MatchLayoutPanel->Controls->Add(this->label3, 0, 4);
			this->MatchLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MatchLayoutPanel->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->MatchLayoutPanel->Location = System::Drawing::Point(3, 3);
			this->MatchLayoutPanel->Name = L"MatchLayoutPanel";
			this->MatchLayoutPanel->Padding = System::Windows::Forms::Padding(3);
			this->MatchLayoutPanel->RowCount = 8;
			this->MatchLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MatchLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MatchLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MatchLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MatchLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MatchLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MatchLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MatchLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MatchLayoutPanel->Size = System::Drawing::Size(834, 443);
			this->MatchLayoutPanel->TabIndex = 25;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label17->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(309, 169);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(519, 44);
			this->label17->TabIndex = 23;
			this->label17->Text = L"秒";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->AutoEllipsis = true;
			this->label14->AutoSize = true;
			this->MatchLayoutPanel->SetColumnSpan(this->label14, 3);
			this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label14->Location = System::Drawing::Point(48, 284);
			this->label14->Margin = System::Windows::Forms::Padding(45, 0, 3, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(780, 156);
			this->label14->TabIndex = 24;
			this->label14->Text = L"对搜索到的暂优选点进行确认，确认足够次数后即会取作最佳选点。过小的确认次数会导致匹配不精确，过大的确认次数会加长匹配时间。";
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label16->Font = (gcnew System::Drawing::Font(L"微软雅黑", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(309, 71);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(519, 44);
			this->label16->TabIndex = 22;
			this->label16->Text = L"秒";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->AutoEllipsis = true;
			this->label13->AutoSize = true;
			this->MatchLayoutPanel->SetColumnSpan(this->label13, 3);
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->Location = System::Drawing::Point(48, 213);
			this->label13->Margin = System::Windows::Forms::Padding(45, 0, 3, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(780, 27);
			this->label13->TabIndex = 23;
			this->label13->Text = L"超过最大查找句长的时间轴将不会进行匹配，以防止过长的空行影响匹配速度。";
			// 
			// label10
			// 
			this->label10->AutoEllipsis = true;
			this->label10->AutoSize = true;
			this->MatchLayoutPanel->SetColumnSpan(this->label10, 3);
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(48, 44);
			this->label10->Margin = System::Windows::Forms::Padding(45, 0, 3, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(780, 27);
			this->label10->TabIndex = 21;
			this->label10->Text = L"取消勾选则会只进行音频解码，不会进行匹配。";
			// 
			// label11
			// 
			this->label11->AutoEllipsis = true;
			this->label11->AutoSize = true;
			this->MatchLayoutPanel->SetColumnSpan(this->label11, 3);
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Location = System::Drawing::Point(48, 115);
			this->label11->Margin = System::Windows::Forms::Padding(45, 0, 3, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(780, 54);
			this->label11->TabIndex = 22;
			this->label11->Text = L"决定在ASS时间轴多大时间范围内查找最佳匹配时间。查找范围增加会加长匹配时间，过小的查找范围会导致无法匹配到正确的时间。";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->SpectrumLayoutPanel);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12));
			this->tabPage3->Location = System::Drawing::Point(4, 39);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 3, 30, 3);
			this->tabPage3->Size = System::Drawing::Size(867, 449);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"声谱设置";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// SpectrumLayoutPanel
			// 
			this->SpectrumLayoutPanel->AutoScroll = true;
			this->SpectrumLayoutPanel->AutoSize = true;
			this->SpectrumLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->SpectrumLayoutPanel->ColumnCount = 2;
			this->SpectrumLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				150)));
			this->SpectrumLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->SpectrumLayoutPanel->Controls->Add(this->DrawSet, 0, 0);
			this->SpectrumLayoutPanel->Controls->Add(this->label12, 0, 1);
			this->SpectrumLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SpectrumLayoutPanel->Location = System::Drawing::Point(3, 3);
			this->SpectrumLayoutPanel->Name = L"SpectrumLayoutPanel";
			this->SpectrumLayoutPanel->Padding = System::Windows::Forms::Padding(3);
			this->SpectrumLayoutPanel->RowCount = 2;
			this->SpectrumLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->SpectrumLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->SpectrumLayoutPanel->Size = System::Drawing::Size(834, 443);
			this->SpectrumLayoutPanel->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoEllipsis = true;
			this->label12->AutoSize = true;
			this->SpectrumLayoutPanel->SetColumnSpan(this->label12, 2);
			this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label12->Location = System::Drawing::Point(48, 44);
			this->label12->Margin = System::Windows::Forms::Padding(45, 0, 3, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(780, 396);
			this->label12->TabIndex = 22;
			this->label12->Text = L"打开此选项可以查看解码得到的声谱图，并对原字幕时间轴和匹配生成的时间轴对应的声谱进行对比。";
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(885, 502);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Settings";
			this->Padding = System::Windows::Forms::Padding(5);
			this->Text = L"Settings";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Settings::Settings_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FindSec))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MindB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MaxLengthSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MinCheckNumSet))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->DecodeLayoutPanel->ResumeLayout(false);
			this->DecodeLayoutPanel->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->MatchLayoutPanel->ResumeLayout(false);
			this->MatchLayoutPanel->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->SpectrumLayoutPanel->ResumeLayout(false);
			this->SpectrumLayoutPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Settings_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e);

	private: System::Void OutPCM_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void FindSec_ValueChanged(System::Object^  sender, System::EventArgs^  e);

	private: System::Void FFTnumList_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MindB_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MaxLengthSet_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MinCheckNumSet_ValueChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void DrawSet_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MatchAssSet_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ParaDecode_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
};

}
