#pragma once

#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *first, *last;
struct node *top;
struct node *front, *rear;

namespace LinkedList {

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
			first = newNode(0);
			first->next = first;	//for 環狀
			last = first;

			top = newNode(0);
			top->next = top;

			//rear = newNode(0);
			//rear->next = rear;
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
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;





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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
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
			this->splitContainer1->Panel1->Controls->Add(this->tabControl1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl2);
			this->splitContainer1->Size = System::Drawing::Size(1478, 744);
			this->splitContainer1->SplitterDistance = 357;
			this->splitContainer1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1478, 357);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1470, 322);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Singly Linked List";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(805, 240);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 40);
			this->button8->TabIndex = 15;
			this->button8->Text = L"clear list";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(525, 240);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(250, 40);
			this->button7->TabIndex = 14;
			this->button7->Text = L"insert n random numbers";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(350, 251);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(116, 29);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"100";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(270, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 24);
			this->label4->TabIndex = 12;
			this->label4->Text = L"range :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(98, 251);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(116, 29);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"10";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(52, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 24);
			this->label3->TabIndex = 10;
			this->label3->Text = L"n :";
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1012, 167);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(240, 40);
			this->button6->TabIndex = 9;
			this->button6->Text = L"search and delete";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(687, 167);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(300, 40);
			this->button5->TabIndex = 8;
			this->button5->Text = L"search and insert before target";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(365, 167);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(300, 40);
			this->button4->TabIndex = 7;
			this->button4->Text = L"search and insert after target";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 109);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(142, 29);
			this->textBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(54, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"target :";
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(365, 102);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"search target";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(540, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"insert in last";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(156, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 29);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"33";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"element :";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(365, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"insert in first";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1470, 322);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Linked Stack";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->label6->Location = System::Drawing::Point(106, 226);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 26);
			this->label6->TabIndex = 4;
			this->label6->Text = L"pop result =";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button10->Location = System::Drawing::Point(267, 122);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(142, 40);
			this->button10->TabIndex = 3;
			this->button10->Text = L"pop";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button9->Location = System::Drawing::Point(84, 122);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(142, 40);
			this->button9->TabIndex = 2;
			this->button9->Text = L"push";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(196, 41);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(142, 29);
			this->textBox5->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->label5->Location = System::Drawing::Point(80, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 24);
			this->label5->TabIndex = 0;
			this->label5->Text = L"element :";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Location = System::Drawing::Point(4, 31);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1470, 322);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Linked Queue";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button12->Location = System::Drawing::Point(267, 122);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(142, 40);
			this->button12->TabIndex = 3;
			this->button12->Text = L"delete queue";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button11->Location = System::Drawing::Point(84, 122);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(142, 40);
			this->button11->TabIndex = 2;
			this->button11->Text = L"insert queue";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(196, 41);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(142, 29);
			this->textBox6->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->label7->Location = System::Drawing::Point(80, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 24);
			this->label7->TabIndex = 0;
			this->label7->Text = L"element :";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1478, 383);
			this->tabControl2->TabIndex = 0;
			this->tabControl2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl2_SelectedIndexChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 31);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1470, 348);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"linked list output";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 22;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1464, 342);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->listBox2);
			this->tabPage5->Location = System::Drawing::Point(4, 31);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1470, 348);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"linked stack output";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 22;
			this->listBox2->Location = System::Drawing::Point(3, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(1464, 342);
			this->listBox2->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->listBox3);
			this->tabPage6->Location = System::Drawing::Point(4, 31);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(1470, 348);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"linked queue output";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 22;
			this->listBox3->Location = System::Drawing::Point(0, 0);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(1470, 348);
			this->listBox3->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1478, 744);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"Linked List  by R. Y. Huang  2017/12/10 Version 0.1";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	struct node *newNode(int element)
	{
		struct node *p;
		p = (struct node *) malloc(sizeof(struct node));
		p->data = element;
		p->next = NULL;
		return p;
	}

	void insertFirst(int element)
	{
		struct node *p = newNode(element);
		p->next = first->next;
		first->next = p;
		if (last == first)
			last = p;
	}

	void insertLast(int element)
	{
		struct node *p = newNode(element);
		p->next = last->next;
		last->next = p;
		last = p;
	}

	void printList(struct node *first)
	{
		struct node *p;
		String ^list = "";
		for (p = first->next; p != first; p = p->next)
			list += p->data + " ---> ";
		listBox1->Items->Add(list + "end");
	}

	struct node *searchTarget(int target)
	{
		struct node *p;
		for (p = first->next; (p != first && p->data != target); p = p->next);
			if (p == first)
				return NULL;
		return p;
	}

	struct node *searchTargetBefore(int target)
	{
		struct node *p, *q;
		for (q = first, p = first->next; (p != first && p->data != target); q = p, p = p->next);
		if (p == first)
			return NULL;
		return q;
	}

	void insertAfter(int element, struct node *x)
	{
		struct node *p = newNode(element);
		p->next = x->next;
		x->next = p;
	}

	void deleteAfter(struct node *x)
	{
		struct node *p = x->next;
		x->next = p->next;
		if (p == last)
			last = x;
		free(p);
	}

	void clearList(struct node *first)
	{
		struct node *p;
		for (p = first->next; p != first; p = first->next)
		{
			first->next = p->next;
			free(p);
		}
		last = first;	//last
	}

	void push(int element)
	{
		struct node *p = newNode(element);
		p->next = top->next;
		top->next = p;
	}

	int pop()
	{
		struct node *p = top->next;
		if (p == top)
			return -1;
		int result = p->data;
		top->next = p->next;
		free(p);
		return result; 
	}

	void printStack(struct node *first)
	{
		struct node *p;
		String ^list = "";
		for (p = first->next; p != first; p = p->next)
			list += p->data + " ---> ";
		listBox2->Items->Add(list + "end");
	}

	void insertQ(int element)
	{
		struct node *p = newNode(element);
		if (rear == NULL)
			front = p;
		else
			rear->next = p;
		rear = p;
	}

	int deleteQ()
	{
		struct node *p;
		int result;
		if (front == NULL)
			return -1;
		else if (front == rear)
			return -1;
		else
		{
			p = front;
			front = front->next;
			result = p->data;
			free(p);
			return result;
		}
	}

	void printQueue(struct node *first)
	{
		struct node *p;
		String ^list = "";
		for (p = first->next; p != rear->next; p = p->next)
			list += p->data + " ---> ";
		listBox3->Items->Add(list + "end");
	}

	private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		tabControl2->SelectedIndex = tabControl1->SelectedIndex;
	}

	private: System::Void tabControl2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		tabControl1->SelectedIndex = tabControl2->SelectedIndex;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int element = int::Parse(textBox1->Text);
		insertFirst(element);
		printList(first);
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int element = int::Parse(textBox1->Text);
		insertLast(element);
		printList(first);
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int target = int::Parse(textBox2->Text);
		struct node *x;
		x = searchTarget(target);
		if (x)
			listBox1->Items->Add(x->data + " has been found.");
		else
			listBox1->Items->Add(target + " hasn't been found.");
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int target = int::Parse(textBox2->Text);
		int element = int::Parse(textBox1->Text);
		struct node *x;
		x = searchTarget(target);
		if (x)
			insertAfter(element, x);
		else
			listBox1->Items->Add(target + " hasn't been found.");
		printList(first);
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int target = int::Parse(textBox2->Text);
		int element = int::Parse(textBox1->Text);
		struct node *x;
		x = searchTargetBefore(target);
		if (x)
			insertAfter(element, x);
		else
			listBox1->Items->Add(target + " hasn't been found.");
		printList(first);
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int target = int::Parse(textBox2->Text);
		struct node *x;
		x = searchTargetBefore(target);
		if (x)
			deleteAfter(x);
		else
			listBox1->Items->Add(target + " hasn't been found.");
		printList(first);
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int n = int::Parse(textBox3->Text);
		int range = int::Parse(textBox4->Text);
		int *data = new int [n];
		String ^line = "";
		for (int i = 0; i < n; i++)
		{
			data[i] = rand()%range + 1;
			line += data[i] + "_";
			insertLast(data[i]);
		}
		listBox1->Items->Add(n + " random numbers: " + line);
		printList(first);
	}

	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		clearList(first);
		printList(first);
	}

	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int element = int::Parse(textBox5->Text);
		push(element);
		printStack(top);
	}

	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int result = pop();
		if (result != -1)
			printStack(top);
		else
			listBox2->Items->Add("Stack is empty.");
		label6->Text = "pop result =   " + result;
	}

	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int element = int::Parse(textBox6->Text);
		insertQ(element);
		printQueue(front);
	}

	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int result = deleteQ();
		if (result != -1)
			printQueue(front);
		else
			listBox3->Items->Add("Queue is empty.");
	}
};
}

