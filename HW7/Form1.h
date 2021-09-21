#pragma once

#include <stdlib.h>
#include <time.h>

struct BSTNode 
{
	struct BSTNode *leftchild;
	int data;
	struct BSTNode *rightchild;
};
struct BSTNode *root;
struct QNode
{   
	struct BSTNode *treenode;
	struct QNode *next;
};
struct QNode *front, *rear;


namespace BinarySearchTree {

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
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;





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
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::SystemColors::Control;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->radioButton4);
			this->splitContainer1->Panel1->Controls->Add(this->radioButton3);
			this->splitContainer1->Panel1->Controls->Add(this->radioButton2);
			this->splitContainer1->Panel1->Controls->Add(this->radioButton1);
			this->splitContainer1->Panel1->Controls->Add(this->button7);
			this->splitContainer1->Panel1->Controls->Add(this->button4);
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->button6);
			this->splitContainer1->Panel1->Controls->Add(this->textBox2);
			this->splitContainer1->Panel1->Controls->Add(this->button5);
			this->splitContainer1->Panel1->Controls->Add(this->button3);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->textBox4);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->textBox3);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(1678, 844);
			this->splitContainer1->SplitterDistance = 362;
			this->splitContainer1->TabIndex = 0;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->radioButton4->Location = System::Drawing::Point(623, 314);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(203, 28);
			this->radioButton4->TabIndex = 18;
			this->radioButton4->Text = L"Levelorder Traversal";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->radioButton3->Location = System::Drawing::Point(391, 314);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(197, 28);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->Text = L"Postorder Traversal";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->radioButton2->Location = System::Drawing::Point(623, 270);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(188, 28);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->Text = L"Preorder Traversal";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->radioButton1->Location = System::Drawing::Point(391, 270);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(177, 28);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Inorder Traversal";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button7->Location = System::Drawing::Point(64, 335);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(200, 51);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Levelorder Traversal";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button4->ForeColor = System::Drawing::Color::MediumBlue;
			this->button4->Location = System::Drawing::Point(1479, 127);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(160, 70);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Clear Data";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button2->Location = System::Drawing::Point(1032, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 51);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Delete from BST";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 9.5F));
			this->label4->Location = System::Drawing::Point(38, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 23);
			this->label4->TabIndex = 13;
			this->label4->Text = L"add number :";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button6->Location = System::Drawing::Point(64, 255);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(200, 51);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Postorder Traversal";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1139, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(130, 29);
			this->textBox2->TabIndex = 2;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button5->Location = System::Drawing::Point(64, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 51);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Preorder Traversal";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button3->Location = System::Drawing::Point(475, 186);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 51);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Random Intergers";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 9.5F));
			this->label3->Location = System::Drawing::Point(979, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 23);
			this->label3->TabIndex = 12;
			this->label3->Text = L"delete number :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(610, 117);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(130, 29);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"100";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->label2->Location = System::Drawing::Point(397, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 48);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Range of intergers :\r\n          (0 ~ n)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(610, 40);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 29);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->label1->Location = System::Drawing::Point(397, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Number of intergers :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 10));
			this->button1->Location = System::Drawing::Point(64, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Inorder Traversal";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(173, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"12";
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
			this->splitContainer2->Panel2MinSize = 500;
			this->splitContainer2->Size = System::Drawing::Size(1678, 478);
			this->splitContainer2->SplitterDistance = 784;
			this->splitContainer2->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(784, 478);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 9));
			this->richTextBox2->Location = System::Drawing::Point(0, 0);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(890, 478);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1678, 844);
			this->Controls->Add(this->splitContainer1);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(1700, 900);
			this->Name = L"Form1";
			this->Text = L"Binary Search Tree  by R. Y. Huang  2017/12/23 Version 0.1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	struct BSTNode *searchBST(struct BSTNode *tree, int x)
	{
		if (tree == NULL)
			return NULL;
		else if (x == tree->data)
			return tree;
		else if (x < tree->data)
			return searchBST(tree->leftchild, x);
		else
			return searchBST(tree->rightchild, x);
	}

	struct BSTNode *newBST(int x)
	{
		struct BSTNode *node = new struct BSTNode;
		node->data = x;
		node->leftchild = NULL;
		node->rightchild = NULL;
		return node;
	}

	struct BSTNode *insertBST(struct BSTNode *node, int x)
	{
		if (node == NULL)
			return newBST(x);
		else if (x < node->data)
			node->leftchild = insertBST(node->leftchild, x);
		else
			node->rightchild = insertBST(node->rightchild, x);
		return node;
	}

	void clearBST(struct BSTNode *node)
	{   
		if (node != NULL)
		{   
			clearBST(node->leftchild);
			clearBST(node->rightchild);
			delete(node);
		}
	}

	int deleteBST(int x)
	{
		struct BSTNode *p , *father, *k, *f;
		p = root; 
		father = NULL;
		while (p != NULL)
		{  
			if (x == p->data)		//找到 x 所在的節點 p 了
			{  
				if ((p->leftchild == NULL) && (p->rightchild == NULL))
					k = NULL;		//p 為樹葉節點
				else if (p->leftchild != NULL )			//p 含有左子樹
				{  
					f = p;			//找出 p 左子樹的最右樹葉
					k = p->leftchild;
					while (k->rightchild !=NULL)
					{  
						f = k;
						k = k->rightchild;
					}				//k 即為 p 左子樹的最右樹葉
					if (p == f)     //k 即為 p 的左兒子
						f->leftchild = k->leftchild;
					else
						f->rightchild = k->leftchild;
				}
				else				//p 無左子樹, 檢查右子樹
				{   
					f = p;			//找出 p 右子樹的最左樹葉
					k = p->rightchild;
					while (k->leftchild != NULL)
					{  
						f = k;
						k = k ->leftchild;
					}				//k 即為 p 右子樹的最左樹葉
				if (p == f)			//k 即為 p 的右兒子
					f->rightchild = k->rightchild;
				else
					f->leftchild = k->rightchild;
				}
				if (k != NULL)		//k 挪至原 p 處, 繼承 p 的左右指標
				{   
					k->leftchild = p->leftchild;
					k->rightchild = p->rightchild;
				}
				if (father == NULL) 
					root = k;
				else
				{  
					if (x < father->data)		//決定k是father的左或右兒子
						father->leftchild = k;
					else
						father->rightchild = k;
				}
				free(p);
				//count_node--;
				return 1;			//成功地刪除 x，於此傳回1返回呼叫處
			}
			else					//尚未找到 x，繼續往下一階層找
			{ 
				father = p;
				if (x < p->data)
					p = p->leftchild;
				else
					p = p->rightchild;
			}
		}
		return 0;					//未找到x，傳回0
	}

	void inorder(BSTNode *node)
	{
		if (node != NULL)
		{
			inorder(node->leftchild);
			traversal += node->data + " _ ";
			inorder(node->rightchild);
		}
	}

	void preorder(BSTNode *node)
	{
		if (node != NULL)
		{
			traversal += node->data + " _ ";
			preorder(node->leftchild);
			preorder(node->rightchild);
		}
	}

	void postorder(BSTNode *node)
	{
		if (node != NULL)
		{
			postorder(node->leftchild);
			postorder(node->rightchild);
			traversal += node->data + " _ ";
		}
	}

	void addQueue(struct BSTNode *Tnode)
	{  
		struct QNode *node;
		node = (struct QNode *) malloc(sizeof(struct QNode));
		node->treenode = Tnode;
		node->next = NULL;
		if (front == NULL) 
			front = node;
		else 
			rear->next = node;
		rear = node;
	}

	struct BSTNode *deleteQueue()
	{ 
		struct BSTNode *Tnode;
		struct QNode *old_front;
		if (front == NULL)
		; //QueueEmpty();
		else
		{   
			Tnode = front->treenode;
			old_front = front;
			front = front->next;
			free(old_front);
			return Tnode;
		}
	}

	void levelorder(BSTNode *node)
	{ 
		addQueue(node);
		while (front != NULL)
		{  
			node = deleteQueue();
			traversal += node->data + " _ ";
			if (node->leftchild != NULL) 
				addQueue(node->leftchild);
			if (node->rightchild != NULL) 
				addQueue(node->rightchild);
		}
	}

	String ^traversal;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int element = int::Parse(textBox1->Text);
		root = insertBST(root, element);
		traversal = "";
		inorder(root);
		richTextBox1->SelectionColor = Color::OrangeRed;
		richTextBox1->AppendText("Inorder traversal:  " + traversal + "\n\n");
	}
				
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int element = int::Parse(textBox2->Text);
		int success = deleteBST(element);
		if (success)
			richTextBox1->AppendText(element + " has been deleted.\n\n");
		else
			richTextBox1->AppendText(element + " has not been found.\n\n");
	}
				
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int n = int::Parse(textBox3->Text);
		int range = int::Parse(textBox4->Text);
		int *data = new int [n];
		String ^s = "";
		srand(time(NULL));
		
		for (int i = 0; i < n; i++)
		{
			data[i] = rand() % (range+1);
			s += data[i] + " _ ";
			root = insertBST(root, data[i]);
			traversal = "";
			//inorder(root);
		}
		richTextBox2->AppendText("Added random numbers:  " + s + "\n\n");

		if (radioButton1->Checked)
		{
			inorder(root);
			richTextBox1->SelectionColor = Color::OrangeRed;
			richTextBox1->AppendText("Inorder traversal:  " + traversal + "\n\n");
		}
		if (radioButton2->Checked)
		{
			preorder(root);
			richTextBox1->SelectionColor = Color::BlueViolet;
			richTextBox1->AppendText("Preorder traversal:  " + traversal + "\n\n");
		}
		if (radioButton3->Checked)
		{
			postorder(root);
			richTextBox1->SelectionColor = Color::DarkCyan;
			richTextBox1->AppendText("Postorder traversal:  " + traversal + "\n\n");
		}
		if (radioButton4->Checked)
		{
			levelorder(root);
			richTextBox1->SelectionColor = Color::Blue;
			richTextBox1->AppendText("Levelorder traversal:  " + traversal + "\n\n");
		}
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		richTextBox1->Clear();
		richTextBox2->Clear();
		clearBST(root);
		newBST(NULL);
		deleteBST(0);
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int element = int::Parse(textBox1->Text);
		root = insertBST(root, element);
		traversal = "";
		preorder(root);
		richTextBox1->SelectionColor = Color::BlueViolet;
		richTextBox1->AppendText("Preorder traversal:  " + traversal + "\n\n");
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int element = int::Parse(textBox1->Text);
		root = insertBST(root, element);
		traversal = "";
		postorder(root);
		richTextBox1->SelectionColor = Color::DarkCyan;
		richTextBox1->AppendText("Postorder traversal:  " + traversal + "\n\n");
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int element = int::Parse(textBox1->Text);
		root = insertBST(root, element);
		traversal = "";
		levelorder(root);
		richTextBox1->SelectionColor = Color::Blue;
		richTextBox1->AppendText("Levelorder traversal:  " + traversal + "\n\n");
	}
};
}

