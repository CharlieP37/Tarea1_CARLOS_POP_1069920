#pragma once
#include <chrono>
namespace Tarea1CARLOSPOP1069920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Exercise1
	/// </summary>
	public ref class Exercise1 : public System::Windows::Forms::Form
	{
	public:
		Exercise1(void)
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
		~Exercise1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ ExLB1;
	private: System::Windows::Forms::Label^ ResLB;
	private: System::Windows::Forms::Button^ Operate;
	private: System::Windows::Forms::Label^ NumLB2;
	private: System::Windows::Forms::TextBox^ NumTB1;
	private: System::Windows::Forms::Label^ Num2LB;
	private: System::Windows::Forms::TextBox^ NumTB2;
	private: System::Windows::Forms::Label^ Name1;
	private: System::Windows::Forms::GroupBox^ Recursive;
	private: System::Windows::Forms::GroupBox^ Iterative;
	private: System::Windows::Forms::Label^ Name1I;
	private: System::Windows::Forms::TextBox^ Num1TB2;

	private: System::Windows::Forms::Label^ Name2BLI;
	private: System::Windows::Forms::TextBox^ Num1TB1;

	private: System::Windows::Forms::Label^ NameLBI2;
	private: System::Windows::Forms::Button^ OperateI;
	private: System::Windows::Forms::Label^ ResLBI;

	private: System::Windows::Forms::ComboBox^ Selection;
	private: System::Windows::Forms::Label^ Inst;
	private: System::Windows::Forms::Button^ Return;
	private: System::Windows::Forms::Label^ ExecuteTR;
	private: System::Windows::Forms::Label^ ExecuteTI;









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
			this->ExLB1 = (gcnew System::Windows::Forms::Label());
			this->ResLB = (gcnew System::Windows::Forms::Label());
			this->Operate = (gcnew System::Windows::Forms::Button());
			this->NumLB2 = (gcnew System::Windows::Forms::Label());
			this->NumTB1 = (gcnew System::Windows::Forms::TextBox());
			this->Num2LB = (gcnew System::Windows::Forms::Label());
			this->NumTB2 = (gcnew System::Windows::Forms::TextBox());
			this->Name1 = (gcnew System::Windows::Forms::Label());
			this->Recursive = (gcnew System::Windows::Forms::GroupBox());
			this->ExecuteTR = (gcnew System::Windows::Forms::Label());
			this->Iterative = (gcnew System::Windows::Forms::GroupBox());
			this->ExecuteTI = (gcnew System::Windows::Forms::Label());
			this->Name1I = (gcnew System::Windows::Forms::Label());
			this->Num1TB2 = (gcnew System::Windows::Forms::TextBox());
			this->Name2BLI = (gcnew System::Windows::Forms::Label());
			this->Num1TB1 = (gcnew System::Windows::Forms::TextBox());
			this->NameLBI2 = (gcnew System::Windows::Forms::Label());
			this->OperateI = (gcnew System::Windows::Forms::Button());
			this->ResLBI = (gcnew System::Windows::Forms::Label());
			this->Selection = (gcnew System::Windows::Forms::ComboBox());
			this->Inst = (gcnew System::Windows::Forms::Label());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->Recursive->SuspendLayout();
			this->Iterative->SuspendLayout();
			this->SuspendLayout();
			// 
			// ExLB1
			// 
			this->ExLB1->AutoSize = true;
			this->ExLB1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExLB1->Location = System::Drawing::Point(12, 18);
			this->ExLB1->Name = L"ExLB1";
			this->ExLB1->Size = System::Drawing::Size(109, 16);
			this->ExLB1->TabIndex = 24;
			this->ExLB1->Text = L"Ejercicio No. 1";
			// 
			// ResLB
			// 
			this->ResLB->AutoSize = true;
			this->ResLB->Location = System::Drawing::Point(74, 181);
			this->ResLB->Name = L"ResLB";
			this->ResLB->Size = System::Drawing::Size(73, 15);
			this->ResLB->TabIndex = 28;
			this->ResLB->Text = L"Resultado: ";
			// 
			// Operate
			// 
			this->Operate->BackColor = System::Drawing::Color::Lime;
			this->Operate->Location = System::Drawing::Point(122, 145);
			this->Operate->Name = L"Operate";
			this->Operate->Size = System::Drawing::Size(110, 24);
			this->Operate->TabIndex = 29;
			this->Operate->Text = L"Operar";
			this->Operate->UseVisualStyleBackColor = false;
			this->Operate->Click += gcnew System::EventHandler(this, &Exercise1::Operate_Click);
			// 
			// NumLB2
			// 
			this->NumLB2->AutoSize = true;
			this->NumLB2->Location = System::Drawing::Point(19, 107);
			this->NumLB2->Name = L"NumLB2";
			this->NumLB2->Size = System::Drawing::Size(176, 15);
			this->NumLB2->TabIndex = 26;
			this->NumLB2->Text = L"Ingrese segundo un número:";
			// 
			// NumTB1
			// 
			this->NumTB1->Location = System::Drawing::Point(201, 69);
			this->NumTB1->Name = L"NumTB1";
			this->NumTB1->Size = System::Drawing::Size(97, 21);
			this->NumTB1->TabIndex = 30;
			// 
			// Num2LB
			// 
			this->Num2LB->AutoSize = true;
			this->Num2LB->Location = System::Drawing::Point(25, 72);
			this->Num2LB->Name = L"Num2LB";
			this->Num2LB->Size = System::Drawing::Size(170, 15);
			this->Num2LB->TabIndex = 25;
			this->Num2LB->Text = L"Ingrese un primer número:";
			// 
			// NumTB2
			// 
			this->NumTB2->Location = System::Drawing::Point(201, 104);
			this->NumTB2->Name = L"NumTB2";
			this->NumTB2->Size = System::Drawing::Size(97, 21);
			this->NumTB2->TabIndex = 31;
			// 
			// Name1
			// 
			this->Name1->AutoSize = true;
			this->Name1->Location = System::Drawing::Point(129, 28);
			this->Name1->Name = L"Name1";
			this->Name1->Size = System::Drawing::Size(92, 15);
			this->Name1->TabIndex = 27;
			this->Name1->Text = L"Multiplicación";
			// 
			// Recursive
			// 
			this->Recursive->Controls->Add(this->ExecuteTR);
			this->Recursive->Controls->Add(this->Name1);
			this->Recursive->Controls->Add(this->NumTB2);
			this->Recursive->Controls->Add(this->Num2LB);
			this->Recursive->Controls->Add(this->NumTB1);
			this->Recursive->Controls->Add(this->NumLB2);
			this->Recursive->Controls->Add(this->Operate);
			this->Recursive->Controls->Add(this->ResLB);
			this->Recursive->Font = (gcnew System::Drawing::Font(L"Magneto", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Recursive->Location = System::Drawing::Point(15, 106);
			this->Recursive->Name = L"Recursive";
			this->Recursive->Size = System::Drawing::Size(348, 237);
			this->Recursive->TabIndex = 32;
			this->Recursive->TabStop = false;
			this->Recursive->Text = L"Recursivo";
			this->Recursive->Visible = false;
			// 
			// ExecuteTR
			// 
			this->ExecuteTR->AutoSize = true;
			this->ExecuteTR->Font = (gcnew System::Drawing::Font(L"Magneto", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExecuteTR->Location = System::Drawing::Point(47, 210);
			this->ExecuteTR->Name = L"ExecuteTR";
			this->ExecuteTR->Size = System::Drawing::Size(130, 15);
			this->ExecuteTR->TabIndex = 32;
			this->ExecuteTR->Text = L"Tiempo de ejecición:";
			// 
			// Iterative
			// 
			this->Iterative->Controls->Add(this->ExecuteTI);
			this->Iterative->Controls->Add(this->Name1I);
			this->Iterative->Controls->Add(this->Num1TB2);
			this->Iterative->Controls->Add(this->Name2BLI);
			this->Iterative->Controls->Add(this->Num1TB1);
			this->Iterative->Controls->Add(this->NameLBI2);
			this->Iterative->Controls->Add(this->OperateI);
			this->Iterative->Controls->Add(this->ResLBI);
			this->Iterative->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Iterative->Location = System::Drawing::Point(15, 106);
			this->Iterative->Name = L"Iterative";
			this->Iterative->Size = System::Drawing::Size(348, 237);
			this->Iterative->TabIndex = 33;
			this->Iterative->TabStop = false;
			this->Iterative->Text = L"Iterativo";
			this->Iterative->Visible = false;
			// 
			// ExecuteTI
			// 
			this->ExecuteTI->AutoSize = true;
			this->ExecuteTI->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExecuteTI->Location = System::Drawing::Point(49, 209);
			this->ExecuteTI->Name = L"ExecuteTI";
			this->ExecuteTI->Size = System::Drawing::Size(110, 16);
			this->ExecuteTI->TabIndex = 37;
			this->ExecuteTI->Text = L"Tiempo de ejecición:";
			// 
			// Name1I
			// 
			this->Name1I->AutoSize = true;
			this->Name1I->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name1I->Location = System::Drawing::Point(127, 17);
			this->Name1I->Name = L"Name1I";
			this->Name1I->Size = System::Drawing::Size(105, 20);
			this->Name1I->TabIndex = 27;
			this->Name1I->Text = L"Multiplicación";
			// 
			// Num1TB2
			// 
			this->Num1TB2->Location = System::Drawing::Point(201, 91);
			this->Num1TB2->Name = L"Num1TB2";
			this->Num1TB2->Size = System::Drawing::Size(97, 22);
			this->Num1TB2->TabIndex = 31;
			// 
			// Name2BLI
			// 
			this->Name2BLI->AutoSize = true;
			this->Name2BLI->Location = System::Drawing::Point(49, 59);
			this->Name2BLI->Name = L"Name2BLI";
			this->Name2BLI->Size = System::Drawing::Size(139, 16);
			this->Name2BLI->TabIndex = 25;
			this->Name2BLI->Text = L"Ingrese un primer número:";
			// 
			// Num1TB1
			// 
			this->Num1TB1->Location = System::Drawing::Point(201, 56);
			this->Num1TB1->Name = L"Num1TB1";
			this->Num1TB1->Size = System::Drawing::Size(97, 22);
			this->Num1TB1->TabIndex = 30;
			// 
			// NameLBI2
			// 
			this->NameLBI2->AutoSize = true;
			this->NameLBI2->Location = System::Drawing::Point(49, 94);
			this->NameLBI2->Name = L"NameLBI2";
			this->NameLBI2->Size = System::Drawing::Size(150, 16);
			this->NameLBI2->TabIndex = 26;
			this->NameLBI2->Text = L"Ingrese segundo un número:";
			// 
			// OperateI
			// 
			this->OperateI->BackColor = System::Drawing::Color::Lime;
			this->OperateI->Location = System::Drawing::Point(122, 132);
			this->OperateI->Name = L"OperateI";
			this->OperateI->Size = System::Drawing::Size(110, 24);
			this->OperateI->TabIndex = 29;
			this->OperateI->Text = L"Operar";
			this->OperateI->UseVisualStyleBackColor = false;
			this->OperateI->Click += gcnew System::EventHandler(this, &Exercise1::OperateI_Click);
			// 
			// ResLBI
			// 
			this->ResLBI->AutoSize = true;
			this->ResLBI->Location = System::Drawing::Point(74, 180);
			this->ResLBI->Name = L"ResLBI";
			this->ResLBI->Size = System::Drawing::Size(62, 16);
			this->ResLBI->TabIndex = 28;
			this->ResLBI->Text = L"Resultado: ";
			// 
			// Selection
			// 
			this->Selection->FormattingEnabled = true;
			this->Selection->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Iterativo", L"Recursivo" });
			this->Selection->Location = System::Drawing::Point(79, 70);
			this->Selection->Name = L"Selection";
			this->Selection->Size = System::Drawing::Size(231, 21);
			this->Selection->TabIndex = 34;
			this->Selection->SelectedIndexChanged += gcnew System::EventHandler(this, &Exercise1::Selection_SelectedIndexChanged);
			this->Selection->Click += gcnew System::EventHandler(this, &Exercise1::Selection_Click);
			// 
			// Inst
			// 
			this->Inst->AutoSize = true;
			this->Inst->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Inst->Location = System::Drawing::Point(76, 51);
			this->Inst->Name = L"Inst";
			this->Inst->Size = System::Drawing::Size(242, 16);
			this->Inst->TabIndex = 35;
			this->Inst->Text = L"Seleccione que tipo de estructura desea";
			// 
			// Return
			// 
			this->Return->BackColor = System::Drawing::Color::Red;
			this->Return->Location = System::Drawing::Point(15, 364);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(119, 26);
			this->Return->TabIndex = 36;
			this->Return->Text = L"Regresar";
			this->Return->UseVisualStyleBackColor = false;
			this->Return->Click += gcnew System::EventHandler(this, &Exercise1::Return_Click);
			// 
			// Exercise1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(371, 400);
			this->Controls->Add(this->Return);
			this->Controls->Add(this->Iterative);
			this->Controls->Add(this->Inst);
			this->Controls->Add(this->Selection);
			this->Controls->Add(this->Recursive);
			this->Controls->Add(this->ExLB1);
			this->Name = L"Exercise1";
			this->Text = L"Exercise1";
			this->Recursive->ResumeLayout(false);
			this->Recursive->PerformLayout();
			this->Iterative->ResumeLayout(false);
			this->Iterative->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Operate_Click(System::Object^ sender, System::EventArgs^ e) {
			auto startR = std::chrono::steady_clock::now();
			try {
				int A = Convert::ToInt32(NumTB1->Text);
				int B = Convert::ToInt32(NumTB2->Text);
				int Count = 0;
				int Sum = 0;
				Multiplication(A, B, Count, Sum);
				auto endR = std::chrono::steady_clock::now();
				double elapsed_timensR = double(std::chrono::duration_cast <std::chrono::nanoseconds> (endR - startR).count());
				ExecuteTR->Text = "Tiempo de ejecición (s): " + Convert::ToString(elapsed_timensR/1e9);
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
private: System::Void Selection_Click(System::Object^ sender, System::EventArgs^ e) {
	Recursive->Hide();
	Iterative->Hide();
	Num1TB1->Clear();
	Num1TB2->Clear();
	NumTB1->Clear();
	NumTB2->Clear();
}
private: System::Void Selection_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (Selection->SelectedIndex) {
	case 0:
		Iterative->Show();
		break;
	default:
		Recursive->Show();
		break;
	}
}
private: System::Void OperateI_Click(System::Object^ sender, System::EventArgs^ e) {
	auto start = std::chrono::steady_clock::now();
	try {
		int A1 = Convert::ToInt32(Num1TB1->Text);
		int B1 = Convert::ToInt32(Num1TB2->Text);
		int Sum1 = 0;
		for (int i = 0; i < A1; i++) {
			Sum1 = Sum1 + B1;
		}
		ResLBI->Text = ("Resultado: " + System::Convert::ToString(Sum1));
		auto end = std::chrono::steady_clock::now();
		double elapsed_timens = double(std::chrono::duration_cast <std::chrono::nanoseconds> (end - start).count());
		ExecuteTI->Text = "Tiempo de ejecición (s): " + Convert::ToString(elapsed_timens / 1e9);
	}
	catch (Exception ^ e) {
		MessageBox::Show("Ha ocurrido un error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
