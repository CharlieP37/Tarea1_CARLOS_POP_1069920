#pragma once
#include "Exercise1.h";
#include "Exercise2.h";
#include "Exercise3.h";
#include "Exercise4.h";
namespace Tarea1CARLOSPOP1069920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::Button^ Exit;









	private: System::Windows::Forms::ComboBox^ MN;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Instructions;

	private: System::Windows::Forms::Button^ Enter;
	private: System::Windows::Forms::Label^ label2;














	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->MN = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Instructions = (gcnew System::Windows::Forms::Label());
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Red;
			this->Exit->Cursor = System::Windows::Forms::Cursors::No;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Location = System::Drawing::Point(12, 215);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(110, 24);
			this->Exit->TabIndex = 9;
			this->Exit->Text = L"Salir";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// MN
			// 
			this->MN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MN->FormattingEnabled = true;
			this->MN->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Ejercicio 1", L"Ejercicio 2", L"Ejercicio 3", L"Ejercicio 4" });
			this->MN->Location = System::Drawing::Point(61, 118);
			this->MN->Name = L"MN";
			this->MN->Size = System::Drawing::Size(205, 21);
			this->MN->TabIndex = 24;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(122, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Tarea No 1";
			// 
			// Instructions
			// 
			this->Instructions->AutoSize = true;
			this->Instructions->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Instructions->Location = System::Drawing::Point(39, 50);
			this->Instructions->Name = L"Instructions";
			this->Instructions->Size = System::Drawing::Size(257, 57);
			this->Instructions->TabIndex = 26;
			this->Instructions->Text = L"                           Menú\r\n\r\nSeleccione el ejercicio al que desea ir\r\n";
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::Color::Lime;
			this->Enter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Enter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter->Location = System::Drawing::Point(108, 167);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(110, 24);
			this->Enter->TabIndex = 27;
			this->Enter->Text = L"Entrar";
			this->Enter->UseVisualStyleBackColor = false;
			this->Enter->Click += gcnew System::EventHandler(this, &MyForm::Enter_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Orange;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(128, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 16);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Carlos Antonio Pop Arroyo";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Red;
			this->ClientSize = System::Drawing::Size(326, 251);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->Instructions);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MN);
			this->Controls->Add(this->Exit);
			this->Name = L"MyForm";
			this->Text = L"Laboratorio No. 1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (MN->SelectedIndex) {
	case 0:
	{Exercise1^ EX1 = gcnew Exercise1; EX1->ShowDialog(); }
		break;
	case 1:
	{Exercise2^ EX2 = gcnew Exercise2; EX2->ShowDialog(); }
		break;
	case 2:
	{Exercise3^ EX3 = gcnew Exercise3; EX3->ShowDialog(); }
		break;
	default:
	{Exercise4^ EX4 = gcnew Exercise4; EX4->ShowDialog(); }
		break;
	};
}
};
}
