#pragma once

#define SIZE 150
int square_RightTop[SIZE][SIZE];
int square_LeftTop[SIZE][SIZE];
int square_RightBottom[SIZE][SIZE];
int square_LeftBottom[SIZE][SIZE];
int square_4n[SIZE][SIZE];

namespace MagicSquare {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected: 
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;












	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::DataGridView^  dataGridView4;




	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;






	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->BeginInit();
			this->tabPage9->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			this->splitContainer1->Panel1->Controls->Add(this->textBox2);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(1479, 693);
			this->splitContainer1->SplitterDistance = 115;
			this->splitContainer1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button2->Location = System::Drawing::Point(1080, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 51);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Execute";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(940, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 29);
			this->textBox2->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(691, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 22);
			this->label3->TabIndex = 7;
			this->label3->Text = L"For mutiple of 4 (4 ≤ n ≤ 100)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(734, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 22);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Size of Magic Square：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(86, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"For odd (3 ≤ n ≤ 99)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(78, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Size of Magic Square：";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(275, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 29);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button1->Location = System::Drawing::Point(415, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Execute";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1479, 574);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1471, 539);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"right-top";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1465, 533);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1471, 539);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"right-top(with column)";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Highlight;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(1465, 533);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->richTextBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 31);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1471, 539);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"left-top";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->richTextBox2->Location = System::Drawing::Point(3, 3);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(1465, 533);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView2);
			this->tabPage4->Location = System::Drawing::Point(4, 31);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1471, 539);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"left-top(with column)";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::Highlight;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowTemplate->Height = 31;
			this->dataGridView2->Size = System::Drawing::Size(1465, 533);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->richTextBox3);
			this->tabPage5->Location = System::Drawing::Point(4, 31);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1471, 539);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"right-bottom";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->richTextBox3->Location = System::Drawing::Point(3, 3);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(1465, 533);
			this->richTextBox3->TabIndex = 0;
			this->richTextBox3->Text = L"";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->dataGridView3);
			this->tabPage6->Location = System::Drawing::Point(4, 31);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1471, 539);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"right-bottom(with column)";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::Highlight;
			this->dataGridView3->Location = System::Drawing::Point(3, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowTemplate->Height = 31;
			this->dataGridView3->Size = System::Drawing::Size(1465, 533);
			this->dataGridView3->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->richTextBox4);
			this->tabPage7->Location = System::Drawing::Point(4, 31);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1471, 539);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"left-bottom";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->richTextBox4->Location = System::Drawing::Point(3, 3);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(1465, 533);
			this->richTextBox4->TabIndex = 0;
			this->richTextBox4->Text = L"";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->dataGridView4);
			this->tabPage8->Location = System::Drawing::Point(4, 31);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(1471, 539);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"left-bottom(with column)";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->ColumnHeadersVisible = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView4->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView4->GridColor = System::Drawing::SystemColors::Highlight;
			this->dataGridView4->Location = System::Drawing::Point(3, 3);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowTemplate->Height = 31;
			this->dataGridView4->Size = System::Drawing::Size(1465, 533);
			this->dataGridView4->TabIndex = 0;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->richTextBox5);
			this->tabPage9->Location = System::Drawing::Point(4, 31);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(1471, 539);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"n = 4k";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// richTextBox5
			// 
			this->richTextBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->richTextBox5->Location = System::Drawing::Point(3, 3);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(1465, 533);
			this->richTextBox5->TabIndex = 0;
			this->richTextBox5->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1479, 693);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"Magic Square  by R. Y. Huang  2017/10/13 Version 0.1";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->EndInit();
			this->tabPage9->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	void MagicSquare(int n)
	{
		int i, j, k, l, data;

        for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				square_RightTop[i][j] = 0;
				square_LeftTop[i][j] = 0;
				square_RightBottom[i][j] = 0;
				square_LeftBottom[i][j] = 0;
			}
		}

		//1擺上方，往右上
		i = 0; 
		j = (n-1)/2;
		square_RightTop[i][j] = 1;		
		data = 2;
		while (data <= n*n)
		{			
			k = (i-1 < 0) ? n-1 : i-1;
			l = (j+1 == n) ? 0 : j+1;
			if (square_RightTop[k][l] > 0)
				i = (i+1) % n;
			else
			{
				i = k;
				j = l;
			}
			square_RightTop[i][j] = data++;
		}		
		//1擺上方，往左上
		i = 0; 
		j = (n-1)/2;
		square_LeftTop[i][j] = 1;
		data = 2;
		while (data <= n*n)
		{
			k = (i-1 < 0) ? n-1 : i-1;
			l = (j-1 < 0) ? n-1 : j-1;
			if (square_LeftTop[k][l] > 0)
				i = (i+1) % n;
			else
			{
				i = k;
				j = l;
			}
			square_LeftTop[i][j] = data++;
		}	
		//1擺下方，往右下
		i = n-1;
		j = (n-1)/2;
		square_RightBottom[i][j] = 1;
		data = 2;
		while (data <= n*n)
		{
			k = (i+1 == n) ? 0 : i+1;
			l = (j+1 == n) ? 0 : j+1;
			if (square_RightBottom[k][l] > 0)
				i = (i-1 < 0) ? n-1 : i-1;
			else
			{
				i = k;
				j = l;
			}
			square_RightBottom[i][j] = data++;
		}
		//1擺下方，往左下
		i = n-1;
		j = (n-1)/2;
		square_LeftBottom[i][j] = 1;
		data = 2;
		while (data <= n*n)
		{							
			k = (i+1 == n) ? 0 : i+1;
			l = (j-1 < 0) ? n-1 : j-1;
			if (square_LeftBottom[k][l] > 0)
				i = (i-1 < 0) ? n-1 : i-1;
			else
			{
				i = k;
				j = l;
			}
			square_LeftBottom[i][j] = data++;
		}
	}

	void printSquare(int n)
	{
		if (n > 99)			
		{
			richTextBox1->AppendText("輸入值太大，請重新輸入");
			richTextBox2->AppendText("輸入值太大，請重新輸入");
			richTextBox3->AppendText("輸入值太大，請重新輸入");
			richTextBox4->AppendText("輸入值太大，請重新輸入");
		}
		else if (n % 2 == 0)
		{
			richTextBox1->AppendText("輸入為偶數，請到右邊框框處理");
			richTextBox2->AppendText("輸入為偶數，請到右邊框框處理");
			richTextBox3->AppendText("輸入為偶數，請到右邊框框處理");
			richTextBox4->AppendText("輸入為偶數，請到右邊框框處理");
		}
		else
		{
			richTextBox1->AppendText("--- Magic Square " + Convert::ToString(n) + "x" + Convert::ToString(n) + " ---\n");
			richTextBox2->AppendText("--- Magic Square " + Convert::ToString(n) + "x" + Convert::ToString(n) + " ---\n");
			richTextBox3->AppendText("--- Magic Square " + Convert::ToString(n) + "x" + Convert::ToString(n) + " ---\n");
			richTextBox4->AppendText("--- Magic Square " + Convert::ToString(n) + "x" + Convert::ToString(n) + " ---\n");
		
			String ^ line_RightTop;
			String ^ line_LeftTop;
			String ^ line_RightBottom;
			String ^ line_LeftBottom;
			String ^ data_str;
			int block_len = Convert::ToString(n*n)->Length +2;	
			int blank_len;	
				
			for (int i = 0; i < n; i++)
			{
				line_RightTop = "";
				line_LeftTop = "";
				line_RightBottom = "";
				line_LeftBottom = "";
				for (int j = 0; j < n; j++)
				{
					data_str = Convert::ToString(square_RightTop[i][j]);		
					blank_len = block_len - data_str->Length;	
					for (int k = 0; k < blank_len; k++)
						line_RightTop += " ";	
				
					data_str = Convert::ToString(square_LeftTop[i][j]);		
					blank_len = block_len - data_str->Length;	
					for (int k = 0; k < blank_len; k++)
						line_LeftTop += " ";
				
					data_str = Convert::ToString(square_RightBottom[i][j]);		
					blank_len = block_len - data_str->Length;
					for (int k = 0; k < blank_len; k++)
						line_RightBottom += " ";
				
					data_str = Convert::ToString(square_LeftBottom[i][j]);		
					blank_len = block_len - data_str->Length;	
					for (int k = 0; k < blank_len; k++)
						line_LeftBottom += " ";
				
					line_RightTop += square_RightTop[i][j];
					line_LeftTop += square_LeftTop[i][j];
					line_RightBottom += square_RightBottom[i][j];
					line_LeftBottom += square_LeftBottom[i][j];
				}
				richTextBox1->AppendText(line_RightTop + "\n");
				richTextBox2->AppendText(line_LeftTop + "\n");
				richTextBox3->AppendText(line_RightBottom + "\n");
				richTextBox4->AppendText(line_LeftBottom + "\n");
			}
			dataGridView1->ColumnCount = n;		
			dataGridView1->RowCount = n;		
			dataGridView2->ColumnCount = n;
			dataGridView2->RowCount = n;
			dataGridView3->ColumnCount = n;
			dataGridView3->RowCount = n;
			dataGridView4->ColumnCount = n;
			dataGridView4->RowCount = n;
			for (int i = 0; i < n; i++)
			{
				dataGridView1->Columns[i]->Width = 45;	
				dataGridView1->Rows[i]->Height = 20;	
				dataGridView2->Columns[i]->Width = 45;	
				dataGridView2->Rows[i]->Height = 20;
				dataGridView3->Columns[i]->Width = 45;	
				dataGridView3->Rows[i]->Height = 20;	
				dataGridView4->Columns[i]->Width = 45;	
				dataGridView4->Rows[i]->Height = 20;	
				for (int j = 0; j < n; j++)
				{
					dataGridView1->Rows[i]->Cells[j]->Value = square_RightTop[i][j];	
					dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Honeydew;	
					dataGridView2->Rows[i]->Cells[j]->Value = square_LeftTop[i][j];	
					dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::Honeydew;	
					dataGridView3->Rows[i]->Cells[j]->Value = square_RightBottom[i][j];	
					dataGridView3->Rows[i]->Cells[j]->Style->BackColor = Color::Honeydew;	
					dataGridView4->Rows[i]->Cells[j]->Value = square_LeftBottom[i][j];	
					dataGridView4->Rows[i]->Cells[j]->Style->BackColor = Color::Honeydew;	
				}
			}
		}
	}

	void MagicSquare_4n(int n)
	{
		int i, j;
		
        for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				square_4n[i][j] = 0;
			}
		}

		for(i = 0; i < n; i++) 
		{
			for(j = 0; j < n; j++)
			{
				if(j % 4 == i % 4 || (j % 4 + i) % 4 == 3)
					square_4n[i][j] = (n-i) * n - j;
				else
					square_4n[i][j] = i * n + j + 1;
			}
		}
	}

	void printSquare_4n(int n)
	{
		if (n > 100)			
			richTextBox5->AppendText("輸入值太大，請重新輸入");
		else if (n % 2 == 1)	
			richTextBox5->AppendText("輸入為奇數，請到左邊框框處理");
		else
		{
			richTextBox5->AppendText("--- Magic Square " + Convert::ToString(n) + "x" + Convert::ToString(n) + " ---\n");
		
			String ^ line;
			String ^ data_str;
			int block_len = Convert::ToString(n*n)->Length +2;	
			int blank_len;	
				
			for (int i = 0; i < n; i++)
			{
				line = "";
				for (int j = 0; j < n; j++)
				{
					data_str = Convert::ToString(square_4n[i][j]);		
					blank_len = block_len - data_str->Length;	
					for (int k = 0; k < blank_len; k++)
						line += " ";	
				
					line += square_4n[i][j];
				}
				richTextBox5->AppendText(line + "\n");
			}
		}	
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		richTextBox1->Clear();	
		richTextBox2->Clear();
		richTextBox3->Clear();
		richTextBox4->Clear();
		int n1 = int::Parse(textBox1->Text);
		MagicSquare(n1);
		printSquare(n1);
	}

	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox5->Clear();
		int n2 = int::Parse(textBox2->Text);
		MagicSquare_4n(n2);
		printSquare_4n(n2);
	}
};
}

