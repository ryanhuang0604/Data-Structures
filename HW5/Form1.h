#pragma once

#define SIZE 1000

namespace InfixTransformation {

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
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label7;

	protected: 

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
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
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(1494, 710);
			this->splitContainer1->SplitterDistance = 335;
			this->splitContainer1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1494, 335);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1486, 300);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Infix";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(342, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(217, 50);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Operator Constraint：\r\n+、-、*、/、(、)、^、|";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::PeachPuff;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cooper Std Black", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(660, 262);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(171, 26);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Infix → Prefix";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::PeachPuff;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Std Black", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(3, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 26);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Infix → Postfix";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(686, 72);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(119, 28);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"clear data";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(317, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 27);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Infix =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(391, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 29);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"A+B*C+(D+E)^F/G^H";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(60, 138);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Infix → Prefix";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(60, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Infix → Postfix";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox3);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1486, 300);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Prefix";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(752, 32);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(449, 246);
			this->richTextBox3->TabIndex = 3;
			this->richTextBox3->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(410, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 29);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"++A*B^CD/EF";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 11));
			this->label5->Location = System::Drawing::Point(317, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 27);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Prefix =";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button3->Location = System::Drawing::Point(60, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 48);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Prefix → Postfix";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->richTextBox4);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Location = System::Drawing::Point(4, 31);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1486, 300);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Postfix";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(718, 71);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(406, 212);
			this->richTextBox4->TabIndex = 3;
			this->richTextBox4->Text = L"";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(410, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 29);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"ABCD^*+EF/+";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button4->Location = System::Drawing::Point(60, 50);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 48);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Postfix → Infix";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 11));
			this->label6->Location = System::Drawing::Point(317, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 27);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Postfix =";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->richTextBox1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->richTextBox2);
			this->splitContainer2->Size = System::Drawing::Size(1494, 371);
			this->splitContainer2->SplitterDistance = 500;
			this->splitContainer2->TabIndex = 1;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(500, 371);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(0, 0);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(990, 371);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::PeachPuff;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cooper Std Black", 11, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label7->Location = System::Drawing::Point(738, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 26);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Postfix → Infix";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1494, 710);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Infix Transformation  by R. Y. Huang  2017/11/24 Version 0.1";
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
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	static array<String ^> ^Stack_1 = gcnew array<String ^>(SIZE);
	static int top_1 = -1;
	static array<String ^> ^Stack_2 = gcnew array<String ^>(SIZE);
	static int top_2 = -1;
	static array<String ^> ^Stack = gcnew array<String ^>(SIZE);
	static int top = -1;

	void push(int flag, String ^data)
	{   
		switch(flag)
		{
			case 1:
				Stack_1[++top_1] = data;
				break;
			case 2:
				Stack_2[++top_2] = data;
				break;
		}
	}

	String ^pop(int flag)
	{
		switch(flag)
		{
			case 1:
				return Stack_1[top_1--];		
				break;
			case 2:
				return Stack_2[top_2--];
				break;
		}
	}

	void push1(String ^data)
	{   
		Stack[++top] = data;
	}

	String ^pop1()
	{
		return Stack[top--];
	}

	int p(String ^op)
	{
		if ((op == "+") || (op == "-"))
			return 3;
		if ((op == "*") || (op == "/")) 
			return 4;
		if ((op == "^") || (op == "&") || (op == "|"))
			return 5;
		if ((op == "("))	
			return 8;
		if ((op == "#"))
			return 0;
	}

	int q(String ^op)
	{
		if ((op == "+") || (op == "-"))
			return 3;
		if ((op == "*") || (op == "/")) 
			return 4;
		if ((op == "^") || (op == "&") || (op == "|"))
			return 5;
		if ((op == "("))	
			return 1;
		if ((op == "#"))
			return 0;
	}

	bool IsOperand(String ^s)
	{  
		if ((s != "+") && (s != "-") && (s != "*") && (s != "/") && (s != "(") 
		&& (s != ")") && (s != "&") && (s != "|") && (s != "^") && (s != "#"))
			return true;
		return false;
	}

	/*String ^Infix_to_Postfix(String ^infix)
	{
		String ^postfix = "";
		String ^s, ^x, ^y;
		push(2, "#");
		for (int i = 0; i < infix->Length; i++)
		{
			s = "";
			s += infix[i];
			if (IsOperand(s))
				postfix += s;
			else if (s == ")")
			{
				x = pop(2);
				while (x != "(")
					postfix += x;
					x = pop(2);
			}
			else
			{
				while (p(s) <= q(y = pop(2)))
					postfix += y;
				push(2, y);
				push(2, s);
			}
		}
		s = pop(2);
		while (s != "#")
		{
			postfix += s;
			s = pop(2);
		}
		return postfix;
	}*/

	String ^Infix_transformation(String ^infix, int flag)	//flag==1：postfix  flag==2：prefix
	{
		String ^s, ^x, ^y, ^opn1, ^opn2;
		push(1, "#");
		for (int i = 0; i < infix->Length; i++)
		{
			s = "";
			s += infix[i];
			if (IsOperand(s))
				push(2, s);
			else if (s == ")")
			{
				x = pop(1);
				while (x != "(")
				{
					opn2 = pop(2);
					opn1 = pop(2);
					if (flag == 1)
						push(2, opn1+opn2+x);
					else
						push(2, x+opn1+opn2);
					x = pop(1);
				}
			}
			else
			{
				while (p(s) <= q(y = pop(1)))
				{
					opn2 = pop(2);
					opn1 = pop(2);
					if (flag == 1)
						push(2, opn1+opn2+y);
					else
						push(2, y+opn1+opn2);
				}
				push(1, y);
				push(1, s);
			}
		}
		x = pop(1);
		while (x != "#")
		{
			opn2 = pop(2);
			opn1 = pop(2);
			if (flag == 1)
				push(2, opn1+opn2+x);
			else
				push(2, x+opn1+opn2);
			x = pop(1);
		}
		return pop(2);
	}

	String ^Prefix_to_Postfix(String ^prefix) 
	{ 
		String ^ s, ^ x, ^ y;
		for (int i = 0; i < prefix->Length; i++)
		{ 
			s = ""; 
			s += prefix[i];	
			if (IsOperand(s))
			{ 
				while (IsOperand(Stack[top])) 
				{ 
					y = pop1(); // pop 出前一個 operand
					x = pop1(); // pop 出對應的 operator
					s = y+s+x; // ==> operator x 所對應的 postfix 
				} // 若 Stack[top] 又是 operand, s 須再與之結合
				push1(s); // push 所得的 operand (in postfix form)
			}
			else 
				push1(s); // push operator s
		}
		return pop1(); // final result 
	}


	String ^Postfix_to_Infix(String ^postfix) 
	{ 
		String ^ s, ^ x, ^ y, ^s1, ^s2;
		for (int i = 0; i < postfix->Length; i++)
		{ 
			s = ""; 
			s += postfix[i];	
			if (IsOperand(s))
			{ 
				push(2, s);
				push(1, "#");
			}
			else 
			{
				s1 = pop(1);
				s2 = pop(1);
				x = pop(2);
				y = pop(2);
				push(2, y+s+x);
				push(1, x);
			}
		}
		while (top != -1)
			x = pop(1);
		return pop(2);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checkBox1->Checked)
			richTextBox1->Clear();
		String ^infix = textBox1->Text;
		String ^postfix;
		postfix = Infix_transformation(infix, 1);
		richTextBox1->AppendText(infix + " ----------> " + postfix + "\n");
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (checkBox1->Checked)
			richTextBox2->Clear();
		String ^infix = textBox1->Text;
		String ^prefix;
		prefix = Infix_transformation(infix, 2);
		richTextBox2->AppendText(infix + " ----------> " + prefix + "\n");
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^prefix = textBox2->Text;
		String ^postfix;
		postfix = Prefix_to_Postfix(prefix);
		richTextBox3->AppendText(prefix + " ----------> " + postfix + "\n");
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^postfix = textBox3->Text;
		String ^infix;
		infix = Postfix_to_Infix(postfix);
		richTextBox4->AppendText(postfix + " ----------> " + infix + "\n");
	}
};
}

