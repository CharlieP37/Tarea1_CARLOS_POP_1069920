#pragma once

namespace Tarea1CARLOSPOP1069920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ NumTB2;
	protected:
	private: System::Windows::Forms::TextBox^ NumTB1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ ResLB;
	private: System::Windows::Forms::Label^ Name1;
	private: System::Windows::Forms::Label^ NumLB2;
	private: System::Windows::Forms::Label^ Num2LB;
	private: System::Windows::Forms::Label^ ExLB1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NumTB2 = (gcnew System::Windows::Forms::TextBox());
			this->NumTB1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ResLB = (gcnew System::Windows::Forms::Label());
			this->Name1 = (gcnew System::Windows::Forms::Label());
			this->NumLB2 = (gcnew System::Windows::Forms::Label());
			this->Num2LB = (gcnew System::Windows::Forms::Label());
			this->ExLB1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// NumTB2
			// 
			this->NumTB2->Location = System::Drawing::Point(170, 125);
			this->NumTB2->Name = L"NumTB2";
			this->NumTB2->Size = System::Drawing::Size(97, 20);
			this->NumTB2->TabIndex = 15;
			// 
			// NumTB1
			// 
			this->NumTB1->Location = System::Drawing::Point(170, 90);
			this->NumTB1->Name = L"NumTB1";
			this->NumTB1->Size = System::Drawing::Size(97, 20);
			this->NumTB1->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(91, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 24);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Operar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// ResLB
			// 
			this->ResLB->AutoSize = true;
			this->ResLB->Location = System::Drawing::Point(43, 214);
			this->ResLB->Name = L"ResLB";
			this->ResLB->Size = System::Drawing::Size(61, 13);
			this->ResLB->TabIndex = 12;
			this->ResLB->Text = L"Resultado: ";
			// 
			// Name1
			// 
			this->Name1->AutoSize = true;
			this->Name1->Location = System::Drawing::Point(113, 49);
			this->Name1->Name = L"Name1";
			this->Name1->Size = System::Drawing::Size(71, 13);
			this->Name1->TabIndex = 11;
			this->Name1->Text = L"Multiplicación";
			// 
			// NumLB2
			// 
			this->NumLB2->AutoSize = true;
			this->NumLB2->Location = System::Drawing::Point(18, 128);
			this->NumLB2->Name = L"NumLB2";
			this->NumLB2->Size = System::Drawing::Size(142, 13);
			this->NumLB2->TabIndex = 10;
			this->NumLB2->Text = L"Ingrese segundo un número:";
			// 
			// Num2LB
			// 
			this->Num2LB->AutoSize = true;
			this->Num2LB->Location = System::Drawing::Point(18, 93);
			this->Num2LB->Name = L"Num2LB";
			this->Num2LB->Size = System::Drawing::Size(129, 13);
			this->Num2LB->TabIndex = 9;
			this->Num2LB->Text = L"Ingrese un primer número:";
			// 
			// ExLB1
			// 
			this->ExLB1->AutoSize = true;
			this->ExLB1->Location = System::Drawing::Point(18, 18);
			this->ExLB1->Name = L"ExLB1";
			this->ExLB1->Size = System::Drawing::Size(76, 13);
			this->ExLB1->TabIndex = 8;
			this->ExLB1->Text = L"Ejercicio No. 1";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->NumTB2);
			this->Controls->Add(this->NumTB1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ResLB);
			this->Controls->Add(this->Name1);
			this->Controls->Add(this->NumLB2);
			this->Controls->Add(this->Num2LB);
			this->Controls->Add(this->ExLB1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int A = Convert::ToInt32(NumTB1->Text);
		int B = Convert::ToInt32(NumTB2->Text);
		int Count = 0;
		int Sum = 0;
		Multiplication(A, B, Count, Sum);
	}
	catch (Exception^ e) {
		MessageBox::Show("Ha ocurrido un error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
	private: System::Void Multiplication(int M, int m, int cnt, int Sum) {
		if (cnt == M) {
			ResLB->Text = ("Resultado: " + System::Convert::ToString(Sum));
		}
		else
		{
			Sum = Sum + m;
			cnt++;
			Multiplication(M, m, cnt, Sum);
		}
	}
};
}
