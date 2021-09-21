#pragma once

#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <algorithm>
#define SIZE 200000	
using namespace std;

int list[SIZE];
int global_n;	
double time_selection;
double time_bubble;	

namespace My0513353 {

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
	private: System::Windows::Forms::ListBox^  listBox1;
	protected: 
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button4;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(280, 60);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(350, 490);
			this->listBox1->TabIndex = 0;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(24, 214);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(110, 26);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Echo Print";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Number of Data = ";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button1->Location = System::Drawing::Point(24, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 60);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Data Generation";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Info;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button2->Location = System::Drawing::Point(24, 395);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 60);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Selection Sort";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Info;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button3->Location = System::Drawing::Point(24, 475);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 60);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Bubble Sort";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 18;
			this->listBox2->Location = System::Drawing::Point(680, 60);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(350, 490);
			this->listBox2->TabIndex = 6;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 18;
			this->listBox3->Location = System::Drawing::Point(1080, 60);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(350, 490);
			this->listBox3->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 29);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"5000";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 24);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Range of Data = ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(24, 160);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 29);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(328, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(254, 27);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Data Randomly Generated";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(787, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 27);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Selection Sort";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1196, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 27);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Bubble Sort";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(369, 590);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(251, 39);
			this->label6->TabIndex = 14;
			this->label6->Text = L"CPU time (sec.)：";
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 18;
			this->listBox5->Location = System::Drawing::Point(680, 590);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(350, 58);
			this->listBox5->TabIndex = 16;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 18;
			this->listBox6->Location = System::Drawing::Point(1080, 590);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(350, 58);
			this->listBox6->TabIndex = 17;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(24, 260);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(182, 26);
			this->checkBox2->TabIndex = 18;
			this->checkBox2->Text = L"Clean Previous Data";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart1->Legends->Add(legend5);
			this->chart1->Location = System::Drawing::Point(118, 659);
			this->chart1->Name = L"chart1";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			series5->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Time;
			this->chart1->Series->Add(series5);
			this->chart1->Size = System::Drawing::Size(1272, 357);
			this->chart1->TabIndex = 19;
			this->chart1->Text = L"chart1";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button4->Location = System::Drawing::Point(24, 590);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 60);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Chart Generation";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1479, 1028);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form1";
			this->Text = L"Selection Sort & Bubble Sort  by R. Y. Huang  2017/10/01 Version 0.1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	void SelectionSort(int list[], int n)
	{
		int min;		
		
		for (int i = 0; i < n; i++)
		{
			min = i;
			for (int j = i+1; j < n; j++)
			{
				if (list[j] < list[min])
				min = j;
			}
			swap(list[i], list[min]);
		}
	}

	void BubbleSort(int list[], int n)
	{
		for (int i = n-1; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (list[j] > list[j+1])
					swap(list[j], list[j+1]);
			}
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int n = int::Parse(textBox1->Text);		
		global_n = n;								
		int range = int::Parse(textBox2->Text);		
		srand(time(NULL));

		for (int i = 0; i < n; i++)
		{
			list[i] = rand() % (range+1);
		}

		if (checkBox2->Checked)	
		{
			listBox1->Items->Clear();
			listBox2->Items->Clear();
			listBox3->Items->Clear();
			listBox5->Items->Clear();
			listBox6->Items->Clear();
		}

		if (checkBox1->Checked)
		{
			for (int i = 0; i < n; i++)
			{
				listBox1->Items->Add(list[i]);
			}
		}
		listBox1->Items->Add("n = " + n + " random numbers are generated.");

		chart1->Series->Clear();				
		String ^ name1 = "Selection Sort"; 
		chart1->Series->Add(name1);
		String ^ name2 = "Bubble Sort";  
		chart1->Series->Add(name2);
		chart1->Series[name1]->Points->Clear();
		chart1->Series[name2]->Points->Clear();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int n = int::Parse(textBox1->Text);
		int sorted[SIZE];
		clock_t start, end;

		for (int i = 0; i < n; i++)
			sorted[i] = list[i];

		start = clock();
		SelectionSort(sorted, n);
		end = clock();
		time_selection = (double)(end - start) / CLOCKS_PER_SEC;
		
		if (checkBox1->Checked)
		{
			for (int i = 0; i < n; i++)
			{
				listBox2->Items->Add(sorted[i]);
			}
		}
		listBox2->Items->Add("n = " + n + " SelectionSort takes " + time_selection + " sec.");
		listBox5->Items->Add(time_selection);
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int n = int::Parse(textBox1->Text);
		int sorted[SIZE];
		clock_t start, end;

		for (int i = 0; i < n; i++)
			sorted[i] = list[i];

		start = clock();
		BubbleSort(sorted, n);
		end = clock();
		time_bubble = (double)(end - start) / CLOCKS_PER_SEC;

		if (checkBox1->Checked)
		{
			for (int i = 0; i < n; i++)
			{
				listBox3->Items->Add(sorted[i]);
			}
		}		
		listBox3->Items->Add("n = " + n + " BubbleSort takes " + time_bubble + " sec.");
		listBox6->Items->Add(time_bubble);
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double Y1, Y2;
		int X;
		
		chart1->Series->Clear();
		String ^ name1 = "Selection Sort";    // String in VSC++
		chart1->Series->Add(name1);
		String ^ name2 = "Bubble Sort";  
		chart1->Series->Add(name2);

		Y1 = time_selection;
		X = global_n;
		chart1->Series[name1]->Points->AddXY(X, Y1);
		Y2 = time_bubble;
		chart1->Series[name2]->Points->AddXY(X, Y2);
	}

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) 	{
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

