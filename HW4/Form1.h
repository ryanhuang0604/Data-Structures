#pragma once

#define MaxStack 1000
int **maze;

struct offset
{ 
	int x, y;
};
enum direction {E, S, W, N};
struct position
{    
	int x, y;
	direction dir;
};
position stack[MaxStack];
int top;


namespace Maze {

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
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;


	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TabControl^  tabControl1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label1;


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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(1436, 909);
			this->splitContainer1->SplitterDistance = 300;
			this->splitContainer1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(64, 328);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 60);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Run Maze";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(64, 208);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load Maze";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->HotTrack = true;
			this->tabControl1->ItemSize = System::Drawing::Size(314, 33);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1132, 909);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1074, 866);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Maze(0-accessible, 1-inaccessible, 2-wall)";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1068, 860);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->richTextBox2);
			this->tabPage4->Location = System::Drawing::Point(4, 37);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1124, 868);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Trail";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox2->Location = System::Drawing::Point(0, 0);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(1124, 868);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Location = System::Drawing::Point(4, 37);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1124, 868);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Drawing for Maze";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Transparent;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(1118, 862);
			this->dataGridView1->TabIndex = 0;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MHGHagoromoTHK-Medium", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(128)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(99, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Maze";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1436, 909);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"Mouse in a Maze  by R. Y. Huang  2017/10/28 Version 0.1";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}


		



#pragma endregion

	void push(position step)
	{   
		stack[++top] = step;
	}

	position pop()
	{	
		if (top == -1) 
			richTextBox2->AppendText("Stack is empty");
		return stack[top--];
	}

	void MouseInMaze(int Height, int Width)
	{   
		int i, j, u, v;
		bool found = false;
		offset move[4];
		move[E].x = 0; move[E].y = 1;
		move[S].x = 1; move[S].y = 0;
		move[W].x = 0; move[W].y = -1;
		move[N].x = -1; move[N].y = 0;
		//move[NE].x = -1; move[NE].y = 1;
		//move[SE].x = 1; move[SE].y = 1;
		//move[NW].x = -1; move[NW].y = -1;
		//move[SW].x = 1; move[SW].y = -1;
		position step;
		maze[1][0] = 3;
		step.x = 1; step.y = 1; step.dir = E;     // define the first step
		maze[1][1] = 3;
		dataGridView1->Rows[1]->Cells[0]->Style->BackColor = Color::Orange;
			dataGridView1->Refresh();
		dataGridView1->Rows[1]->Cells[1]->Style->BackColor = Color::Orange;
			dataGridView1->Refresh();
		push(step);
		while (top != -1 && !found)     // keep moving till stack empty OR found
		{   

			step = pop();
			i = step.x; 
			j = step.y; 
			step.dir = step.dir;
			while (step.dir <= N && !found)
			{   
				u = i + move[step.dir].x;
				v = j + move[step.dir].y;
				if (u == Height - 2 && v == Width - 1)    // whether the EXIT is found
				{ 
					found = true;
					step.x = i; 
					step.y = j;
					push(step);
					maze[u][v] = 3;
					dataGridView1->Rows[u]->Cells[v]->Style->BackColor = Color::Orange;
						dataGridView1->Refresh();
					while (top != -1)        // all positions in stack constitute the tour from entrance to exit
					{   
						position s = pop();
						richTextBox2->AppendText("Step:(" + s.x + "," + s.y + ")\n");
					}
					//return maze;
				}
				else if (maze[u][v] == 0)       // a feasible step has been found
				{ 
					maze[u][v] = 3;        // mark this position
					dataGridView1->Rows[u]->Cells[v]->Style->BackColor = Color::Orange;
						dataGridView1->Refresh();
					step.x = i; 
					step.y = j; 
					step.dir = direction(step.dir + 1);
					push(step);                // push previous position/next direction into stack
					i = u; 
					j = v; 
					step.dir = E;// move to the feasible position
				}
				else
					step.dir = direction(step.dir + 1);
			}
			if (!found)
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::NavajoWhite;	// no more feasible step for this position
				dataGridView1->Refresh();
		}
		//return maze;
	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^ s;
		int m, p, pos;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)		
		{ 
			richTextBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
			s = richTextBox1->Lines[0];
			pos = s->IndexOf(" ");
			m = int::Parse(s->Substring(0, pos));
			p = int::Parse(s->Substring(pos+1, s->Length-pos-1));
			maze = new int *[m];
			for (int i = 0; i < m; i++)
				maze[i] = new int [p];
			for (int i = 1; i <= m; i++)
			{
				s = richTextBox1->Lines[i];
				for (int j = 0; j <p; j++)
					maze[i-1][j] = int::Parse(s->Substring(2*j, 1));
			}
			dataGridView1->RowCount = m;		
			dataGridView1->ColumnCount = p;
			for (int i = 0; i < m; i++)		
				dataGridView1->Rows[i]->Height = 30;
			for (int i = 0; i < p; i++)			
				dataGridView1->Columns[i]->Width = 30;
			for (int i = 0; i < m; i++)
			{ 
				for (int j = 0; j < p; j++)
				{ 
					if (maze[i][j] == 2)
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Olive;
					else if (maze[i][j] == 1) 
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::DarkKhaki;             
					else 
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::White; 
				}  
			}
		}
		for (int i = 0; i < m; i++)
			delete maze[i];
		delete maze;
	}

	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) 
	{
		richTextBox2->Clear();		
		String ^ s;
		int m, p, pos;
		{ 
			s = richTextBox1->Lines[0];
			pos = s->IndexOf(" ");
			m = int::Parse(s->Substring(0, pos));
			p = int::Parse(s->Substring(pos+1, s->Length-pos-1));
			maze = new int *[m];
			for (int i = 0; i < m; i++)
				maze[i] = new int [p];
			for (int i = 1; i <= m; i++)
			{
				s = richTextBox1->Lines[i];
				for (int j = 0; j <p; j++)
					maze[i-1][j] = int::Parse(s->Substring(2*j, 1));
			}
			dataGridView1->RowCount = m;		
			dataGridView1->ColumnCount = p;
			for (int i = 0; i < m; i++)			
				dataGridView1->Rows[i]->Height = 30;
			for (int i = 0; i < p; i++)			
				dataGridView1->Columns[i]->Width = 30;
			for (int i = 0; i < m; i++)
			{ 
				for (int j = 0; j < p; j++)
				{ 
					if (maze[i][j] == 2)
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Olive; 
					else if (maze[i][j] == 1) 
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::DarkKhaki;        
					else 
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::White; 
				}  
			}
		}
		MouseInMaze(p, m);
		for (int i = 0; i < m; i++)
			delete maze[i];
		delete maze;
	}


};
}

