#include <cmath>
#include <iostream>


#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;


	protected:

























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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(1, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 56);
			this->button1->TabIndex = 0;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Erase);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->Location = System::Drawing::Point(84, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 56);
			this->button2->TabIndex = 2;
			this->button2->Text = L"⌫";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::EraseLast);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button3->Location = System::Drawing::Point(167, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 56);
			this->button3->TabIndex = 3;
			this->button3->Text = L"+/-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::SignChange);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button4->Location = System::Drawing::Point(251, 407);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 56);
			this->button4->TabIndex = 4;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::GetOperator);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button5->Location = System::Drawing::Point(251, 248);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 56);
			this->button5->TabIndex = 8;
			this->button5->Text = L"*";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::GetOperator);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button6->Location = System::Drawing::Point(167, 301);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 56);
			this->button6->TabIndex = 7;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button7->Location = System::Drawing::Point(83, 301);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 56);
			this->button7->TabIndex = 6;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button8->Location = System::Drawing::Point(0, 301);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(85, 56);
			this->button8->TabIndex = 5;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button9->Location = System::Drawing::Point(251, 354);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(86, 56);
			this->button9->TabIndex = 12;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::GetOperator);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button10->Location = System::Drawing::Point(167, 354);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(86, 56);
			this->button10->TabIndex = 11;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button11->Location = System::Drawing::Point(83, 354);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(86, 56);
			this->button11->TabIndex = 10;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button12->Location = System::Drawing::Point(0, 354);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 56);
			this->button12->TabIndex = 9;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button13->Location = System::Drawing::Point(251, 301);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(86, 56);
			this->button13->TabIndex = 16;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::GetOperator);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button14->Location = System::Drawing::Point(167, 407);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(86, 56);
			this->button14->TabIndex = 15;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button15->Location = System::Drawing::Point(83, 407);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(86, 56);
			this->button15->TabIndex = 14;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button16->Location = System::Drawing::Point(0, 407);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(86, 56);
			this->button16->TabIndex = 13;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button17->Location = System::Drawing::Point(83, 461);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(86, 56);
			this->button17->TabIndex = 17;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button_click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button18->Location = System::Drawing::Point(251, 461);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(86, 56);
			this->button18->TabIndex = 19;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::Equation);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button19->Location = System::Drawing::Point(0, 461);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(86, 56);
			this->button19->TabIndex = 18;
			this->button19->Text = L".";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::Point);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(83, 78);
			this->textBox1->MaxLength = 10;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 66);
			this->textBox1->TabIndex = 20;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70));
			this->textBox2->Location = System::Drawing::Point(0, -3);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(85, 147);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox3->Location = System::Drawing::Point(83, -3);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(253, 84);
			this->textBox3->TabIndex = 22;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(0, 0);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 0;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Linen;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button21->Location = System::Drawing::Point(167, 195);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(86, 56);
			this->button21->TabIndex = 26;
			this->button21->Text = L"tan";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::Trigonometrical);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Linen;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button22->Location = System::Drawing::Point(84, 195);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(85, 56);
			this->button22->TabIndex = 25;
			this->button22->Text = L"cos";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::Trigonometrical);
			// 
			// button23
			// 
			this->button23->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button23->BackColor = System::Drawing::Color::Linen;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button23->Location = System::Drawing::Point(0, 195);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(86, 56);
			this->button23->TabIndex = 24;
			this->button23->Text = L"sin";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::Trigonometrical);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Linen;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button24->Location = System::Drawing::Point(251, 142);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(86, 56);
			this->button24->TabIndex = 27;
			this->button24->Text = L"xʸ";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::GetPow);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Linen;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button25->Location = System::Drawing::Point(-1, 142);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(87, 56);
			this->button25->TabIndex = 28;
			this->button25->Text = L"x!";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::GetFact);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Linen;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button26->Location = System::Drawing::Point(84, 142);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(86, 56);
			this->button26->TabIndex = 29;
			this->button26->Text = L"ln";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::Trigonometrical);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Linen;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button20->Location = System::Drawing::Point(167, 142);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(86, 56);
			this->button20->TabIndex = 30;
			this->button20->Text = L"e";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::GetExp);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button27->Location = System::Drawing::Point(167, 461);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(86, 56);
			this->button27->TabIndex = 31;
			this->button27->Text = L"√";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::GetSqrt);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Linen;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button28->Location = System::Drawing::Point(251, 195);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(86, 56);
			this->button28->TabIndex = 32;
			this->button28->Text = L"ctg";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::Trigonometrical);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(337, 516);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox3);
			this->MaximumSize = System::Drawing::Size(353, 555);
			this->MinimumSize = System::Drawing::Size(353, 555);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double first = 1, second;
		String^ op;
		String^ op1;
		double result;
		double p1;

	
	private: System::Void button_click(System::Object^ sender, System::EventArgs^ e) {

		Button^ Numbers = safe_cast<Button^>(sender);

		

		if (textBox1->Text == "0"|| textBox1->Text == "не число")
		{
			textBox1->Text = Numbers->Text;
		}
		else
			textBox1->Text = textBox1->Text + Numbers->Text;

	}
	private: System::Void GetOperator(System::Object^ sender, System::EventArgs^ e) {
		Button^ NumOp = safe_cast<Button^>(sender);
		if (textBox3->Text != "")
		{
			
			first = Double::Parse(textBox3->Text);
			second = Double::Parse(textBox1->Text);
			
			if (op1 == "sin") {
				double x = second * 3.14 / 180;
				result = round(sin(x) * 1000) / 1000 ;
				textBox3->Text = System::Convert::ToString(result);
				second = result;	
			}
			else if (op1 == "cos") {
				double x = second * 3.14 / 180;
				result = round(cos(x) * 1000) / 1000 ;
				textBox3->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "tan") {
				double x = second * 3.14 / 180;
				result = round(tan(x) * 1000) / 1000 ;
				textBox3->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "ctg") {
				double x = second * 3.14 / 180;
				result = round(1/tan(x) * 1000) / 1000 ;
				textBox3->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "ln") {
				result = round(log(second) * 1000) / 1000;
				textBox3->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "sqrt") {
				result = round(sqrt(second) * 1000) / 1000;
				textBox3->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "pow") {
				result = round(pow(p1,second) * 1000) / 1000;
				textBox3->Text = System::Convert::ToString(result);
				second = result;
			}
			
			if (op == "+")
				textBox3->Text = System::Convert::ToString(first + second);
			else if (op == "-")
				textBox3->Text = System::Convert::ToString(first - second);
			else if (op == "*"|| (op1 != ""&& first !=0))
				textBox3->Text = System::Convert::ToString(first * second);
			else if (op == "/")
				textBox3->Text = System::Convert::ToString(first / second);
			
			op1 = "";
			first = Double::Parse(textBox3->Text);

			op = NumOp->Text;
			textBox2->Text = op;
			textBox1->Text = "0";
		}
		else if (textBox1->Text != "")
		{
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70));
			
			first = Double::Parse(textBox1->Text);
			textBox3->Text = textBox1->Text;
			op = NumOp->Text;
			textBox1->Text ="0";
			textBox2->Text = op;
			
		}
		
		
	}
	private: System::Void Equation(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox1->Text != "")
		{
			second = Double::Parse(textBox1->Text);
			
			if (op1 == "sin") {
				double x = second * 3.14 / 180;
				result = round(sin(x) * 1000) / 1000;
				textBox1->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "cos") {
				double x = second * 3.14 / 180;
				result = round(cos(x) * 1000) / 1000 ;
				textBox1->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "tan") {
				double x = second * 3.14 / 180;
				result = round(tan(x) * 1000) / 1000 ;
				textBox1->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "ctg") {
				double x = second * 3.14 / 180;
				result = round((1 / tan(x)) * 1000) / 1000 ;
				textBox1->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "ln") {
				result = round(log(second) * 1000) / 1000;
				textBox1->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "sqrt") {
				result = round(sqrt(second) * 1000) / 1000;
				textBox3->Text = System::Convert::ToString(result);
				second = result;
			}
			else if (op1 == "pow") {
				result = round(pow(p1, second) * 1000) / 1000;
				textBox3->Text = System::Convert::ToString(result);
				second = result;
			}
			if (op == "+")
				textBox1->Text = System::Convert::ToString(first + second);
			else if (op == "-")
				textBox1->Text = System::Convert::ToString(first - second);
			else if (op == "*"|| (op1 != ""&& first !=0))
				textBox1->Text = System::Convert::ToString(first * second);
			else if (op == "/")
				textBox1->Text = System::Convert::ToString(first / second);
			textBox2->Text = "";
			textBox3->Text = "";
			op = "";
			op1 = "";
		}

	}
	private: System::Void Erase(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text = "0";
		textBox2->Text = "";
		textBox3->Text = "";
	}
	private: System::Void EraseLast(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox1->Text->Length > 0)
		{
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
			if (textBox1->Text->Length == 0)
				textBox1->Text = "0";

		}
	}
	private: System::Void SignChange(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox1->Text->Contains("-"))
			textBox1->Text = textBox1->Text->Remove(0, 1);
		else
			textBox1->Text = "-" + textBox1->Text;
	}
	private: System::Void Point(System::Object^ sender, System::EventArgs^ e) 
	{

		if (!textBox1->Text->Contains(","))
		{
			textBox1->Text = textBox1->Text + ",";
		}
	}

	private: System::Void Trigonometrical(System::Object^ sender, System::EventArgs^ e) 
	{
		Button^ NumOp = safe_cast<Button^>(sender);
		this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
		op1 = NumOp->Text;
		textBox2->Text = op + op1+"()";
		if (textBox1->Text != "0")
		{
			first = Double::Parse(textBox1->Text);
			textBox3->Text = textBox1->Text;
			textBox1->Text = "0";
		}

	}	
	
	private: System::Void GetFact(System::Object^ sender, System::EventArgs^ e) 
	{
		int n = System::Convert::ToInt16(textBox1->Text);
		result = 1;
		for (; n > 1; n--)
			result *= n;
		textBox1->Text = System::Convert::ToString(result);
	}
	private: System::Void GetExp(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text = "2,718282";
	}

	private: System::Void GetSqrt(System::Object^ sender, System::EventArgs^ e) 
	{
		op1 = "sqrt";
		textBox2->Text = op + "sqrt()";
		this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
	}
	private: System::Void GetPow(System::Object^ sender, System::EventArgs^ e) 
	{
		op1 = "pow";
		this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
		p1 = Double::Parse(textBox1->Text);
		textBox2->Text = op + textBox1->Text+"^";
		textBox1->Text = "0";
	}
	};
}
