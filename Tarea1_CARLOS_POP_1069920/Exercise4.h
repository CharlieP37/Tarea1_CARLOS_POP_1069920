#pragma once
#include<cmath>
#include <iostream> 
#include <string> 

namespace Tarea1CARLOSPOP1069920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions; 

	/// <summary>
	/// Summary for Exercise4
	/// </summary>
	public ref class Exercise4 : public System::Windows::Forms::Form
	{
	public:
		Exercise4(void)
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
		~Exercise4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Recursive;
	protected:

	private: System::Windows::Forms::ComboBox^ Selection;
	private: System::Windows::Forms::Label^ Inst;
	private: System::Windows::Forms::Label^ EX3LB;
	private: System::Windows::Forms::Label^ Inst1;
	private: System::Windows::Forms::Label^ Inst2;
	private: System::Windows::Forms::MaskedTextBox^ OriginBase;
	private: System::Windows::Forms::MaskedTextBox^ DestinyBase;
	private: System::Windows::Forms::Button^ Validate;



	private: System::Windows::Forms::Label^ Inst3;
	private: System::Windows::Forms::TextBox^ Number;
	private: System::Windows::Forms::Button^ Convert;


	private: System::Windows::Forms::Button^ Return;
	private: System::Windows::Forms::Label^ ResLB;
	private: System::Windows::Forms::RichTextBox^ ResultRTB;
	private: System::Windows::Forms::GroupBox^ IterativeS;
	private: System::Windows::Forms::RichTextBox^ ResultTB;
	private: System::Windows::Forms::Label^ Inst2I;
	private: System::Windows::Forms::Label^ ResLBI;





	private: System::Windows::Forms::Label^ InstI;

	private: System::Windows::Forms::MaskedTextBox^ OriginBaseI;

	private: System::Windows::Forms::MaskedTextBox^ DestinyBaseI;
	private: System::Windows::Forms::Button^ ConvertI;


	private: System::Windows::Forms::Button^ ValidateI;
	private: System::Windows::Forms::TextBox^ NumberI;
	private: System::Windows::Forms::Label^ Inst3I;




















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
			this->Recursive = (gcnew System::Windows::Forms::GroupBox());
			this->ResultRTB = (gcnew System::Windows::Forms::RichTextBox());
			this->Inst2 = (gcnew System::Windows::Forms::Label());
			this->ResLB = (gcnew System::Windows::Forms::Label());
			this->Inst1 = (gcnew System::Windows::Forms::Label());
			this->OriginBase = (gcnew System::Windows::Forms::MaskedTextBox());
			this->DestinyBase = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Convert = (gcnew System::Windows::Forms::Button());
			this->Validate = (gcnew System::Windows::Forms::Button());
			this->Number = (gcnew System::Windows::Forms::TextBox());
			this->Inst3 = (gcnew System::Windows::Forms::Label());
			this->IterativeS = (gcnew System::Windows::Forms::GroupBox());
			this->ResultTB = (gcnew System::Windows::Forms::RichTextBox());
			this->Inst2I = (gcnew System::Windows::Forms::Label());
			this->ResLBI = (gcnew System::Windows::Forms::Label());
			this->InstI = (gcnew System::Windows::Forms::Label());
			this->OriginBaseI = (gcnew System::Windows::Forms::MaskedTextBox());
			this->DestinyBaseI = (gcnew System::Windows::Forms::MaskedTextBox());
			this->ConvertI = (gcnew System::Windows::Forms::Button());
			this->ValidateI = (gcnew System::Windows::Forms::Button());
			this->NumberI = (gcnew System::Windows::Forms::TextBox());
			this->Inst3I = (gcnew System::Windows::Forms::Label());
			this->Selection = (gcnew System::Windows::Forms::ComboBox());
			this->Inst = (gcnew System::Windows::Forms::Label());
			this->EX3LB = (gcnew System::Windows::Forms::Label());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->Recursive->SuspendLayout();
			this->IterativeS->SuspendLayout();
			this->SuspendLayout();
			// 
			// Recursive
			// 
			this->Recursive->Controls->Add(this->ResultRTB);
			this->Recursive->Controls->Add(this->Inst2);
			this->Recursive->Controls->Add(this->ResLB);
			this->Recursive->Controls->Add(this->Inst1);
			this->Recursive->Controls->Add(this->OriginBase);
			this->Recursive->Controls->Add(this->DestinyBase);
			this->Recursive->Controls->Add(this->Convert);
			this->Recursive->Controls->Add(this->Validate);
			this->Recursive->Controls->Add(this->Number);
			this->Recursive->Controls->Add(this->Inst3);
			this->Recursive->Location = System::Drawing::Point(12, 102);
			this->Recursive->Name = L"Recursive";
			this->Recursive->Size = System::Drawing::Size(511, 247);
			this->Recursive->TabIndex = 44;
			this->Recursive->TabStop = false;
			this->Recursive->Text = L"Recursivo";
			// 
			// ResultRTB
			// 
			this->ResultRTB->Location = System::Drawing::Point(123, 180);
			this->ResultRTB->Name = L"ResultRTB";
			this->ResultRTB->Size = System::Drawing::Size(260, 49);
			this->ResultRTB->TabIndex = 55;
			this->ResultRTB->Text = L"";
			// 
			// Inst2
			// 
			this->Inst2->AutoSize = true;
			this->Inst2->Location = System::Drawing::Point(208, 31);
			this->Inst2->Name = L"Inst2";
			this->Inst2->Size = System::Drawing::Size(134, 13);
			this->Inst2->TabIndex = 46;
			this->Inst2->Text = L"Ingrese la base de destino:\r\n";
			// 
			// ResLB
			// 
			this->ResLB->AutoSize = true;
			this->ResLB->Location = System::Drawing::Point(228, 164);
			this->ResLB->Name = L"ResLB";
			this->ResLB->Size = System::Drawing::Size(58, 13);
			this->ResLB->TabIndex = 54;
			this->ResLB->Text = L"Resultado:";
			// 
			// Inst1
			// 
			this->Inst1->AutoSize = true;
			this->Inst1->Location = System::Drawing::Point(11, 31);
			this->Inst1->Name = L"Inst1";
			this->Inst1->Size = System::Drawing::Size(129, 13);
			this->Inst1->TabIndex = 45;
			this->Inst1->Text = L"Ingrese la base de origen:";
			// 
			// OriginBase
			// 
			this->OriginBase->Location = System::Drawing::Point(146, 28);
			this->OriginBase->Mask = L"99999";
			this->OriginBase->Name = L"OriginBase";
			this->OriginBase->Size = System::Drawing::Size(35, 20);
			this->OriginBase->TabIndex = 47;
			this->OriginBase->ValidatingType = System::Int32::typeid;
			// 
			// DestinyBase
			// 
			this->DestinyBase->Location = System::Drawing::Point(348, 28);
			this->DestinyBase->Mask = L"99999";
			this->DestinyBase->Name = L"DestinyBase";
			this->DestinyBase->Size = System::Drawing::Size(35, 20);
			this->DestinyBase->TabIndex = 48;
			this->DestinyBase->ValidatingType = System::Int32::typeid;
			// 
			// Convert
			// 
			this->Convert->Location = System::Drawing::Point(211, 113);
			this->Convert->Name = L"Convert";
			this->Convert->Size = System::Drawing::Size(94, 20);
			this->Convert->TabIndex = 52;
			this->Convert->Text = L"CONVERTIR";
			this->Convert->UseVisualStyleBackColor = true;
			this->Convert->Click += gcnew System::EventHandler(this, &Exercise4::Convert_Click);
			// 
			// Validate
			// 
			this->Validate->Location = System::Drawing::Point(407, 27);
			this->Validate->Name = L"Validate";
			this->Validate->Size = System::Drawing::Size(94, 20);
			this->Validate->TabIndex = 49;
			this->Validate->Text = L"CONTINUAR\r\n";
			this->Validate->UseVisualStyleBackColor = true;
			this->Validate->Click += gcnew System::EventHandler(this, &Exercise4::Validate_Click);
			// 
			// Number
			// 
			this->Number->Location = System::Drawing::Point(249, 73);
			this->Number->Name = L"Number";
			this->Number->Size = System::Drawing::Size(103, 20);
			this->Number->TabIndex = 51;
			// 
			// Inst3
			// 
			this->Inst3->AutoSize = true;
			this->Inst3->Location = System::Drawing::Point(134, 76);
			this->Inst3->Name = L"Inst3";
			this->Inst3->Size = System::Drawing::Size(94, 13);
			this->Inst3->TabIndex = 50;
			this->Inst3->Text = L"Ingrese el número:\r\n";
			// 
			// IterativeS
			// 
			this->IterativeS->Controls->Add(this->ResultTB);
			this->IterativeS->Controls->Add(this->Inst2I);
			this->IterativeS->Controls->Add(this->ResLBI);
			this->IterativeS->Controls->Add(this->InstI);
			this->IterativeS->Controls->Add(this->OriginBaseI);
			this->IterativeS->Controls->Add(this->DestinyBaseI);
			this->IterativeS->Controls->Add(this->ConvertI);
			this->IterativeS->Controls->Add(this->ValidateI);
			this->IterativeS->Controls->Add(this->NumberI);
			this->IterativeS->Controls->Add(this->Inst3I);
			this->IterativeS->Location = System::Drawing::Point(12, 102);
			this->IterativeS->Name = L"IterativeS";
			this->IterativeS->Size = System::Drawing::Size(511, 247);
			this->IterativeS->TabIndex = 44;
			this->IterativeS->TabStop = false;
			this->IterativeS->Text = L"Iterativo";
			// 
			// ResultTB
			// 
			this->ResultTB->Location = System::Drawing::Point(123, 180);
			this->ResultTB->Name = L"ResultTB";
			this->ResultTB->Size = System::Drawing::Size(260, 49);
			this->ResultTB->TabIndex = 55;
			this->ResultTB->Text = L"";
			// 
			// Inst2I
			// 
			this->Inst2I->AutoSize = true;
			this->Inst2I->Location = System::Drawing::Point(208, 31);
			this->Inst2I->Name = L"Inst2I";
			this->Inst2I->Size = System::Drawing::Size(134, 13);
			this->Inst2I->TabIndex = 46;
			this->Inst2I->Text = L"Ingrese la base de destino:\r\n";
			// 
			// ResLBI
			// 
			this->ResLBI->AutoSize = true;
			this->ResLBI->Location = System::Drawing::Point(228, 164);
			this->ResLBI->Name = L"ResLBI";
			this->ResLBI->Size = System::Drawing::Size(58, 13);
			this->ResLBI->TabIndex = 54;
			this->ResLBI->Text = L"Resultado:";
			// 
			// InstI
			// 
			this->InstI->AutoSize = true;
			this->InstI->Location = System::Drawing::Point(11, 31);
			this->InstI->Name = L"InstI";
			this->InstI->Size = System::Drawing::Size(129, 13);
			this->InstI->TabIndex = 45;
			this->InstI->Text = L"Ingrese la base de origen:";
			// 
			// OriginBaseI
			// 
			this->OriginBaseI->Location = System::Drawing::Point(146, 28);
			this->OriginBaseI->Mask = L"99999";
			this->OriginBaseI->Name = L"OriginBaseI";
			this->OriginBaseI->Size = System::Drawing::Size(35, 20);
			this->OriginBaseI->TabIndex = 47;
			this->OriginBaseI->ValidatingType = System::Int32::typeid;
			// 
			// DestinyBaseI
			// 
			this->DestinyBaseI->Location = System::Drawing::Point(348, 28);
			this->DestinyBaseI->Mask = L"99999";
			this->DestinyBaseI->Name = L"DestinyBaseI";
			this->DestinyBaseI->Size = System::Drawing::Size(35, 20);
			this->DestinyBaseI->TabIndex = 48;
			this->DestinyBaseI->ValidatingType = System::Int32::typeid;
			// 
			// ConvertI
			// 
			this->ConvertI->Location = System::Drawing::Point(211, 113);
			this->ConvertI->Name = L"ConvertI";
			this->ConvertI->Size = System::Drawing::Size(94, 20);
			this->ConvertI->TabIndex = 52;
			this->ConvertI->Text = L"CONVERTIR";
			this->ConvertI->UseVisualStyleBackColor = true;
			// 
			// ValidateI
			// 
			this->ValidateI->Location = System::Drawing::Point(407, 27);
			this->ValidateI->Name = L"ValidateI";
			this->ValidateI->Size = System::Drawing::Size(94, 20);
			this->ValidateI->TabIndex = 49;
			this->ValidateI->Text = L"CONTINUAR\r\n";
			this->ValidateI->UseVisualStyleBackColor = true;
			// 
			// NumberI
			// 
			this->NumberI->Location = System::Drawing::Point(249, 73);
			this->NumberI->Name = L"NumberI";
			this->NumberI->Size = System::Drawing::Size(103, 20);
			this->NumberI->TabIndex = 51;
			// 
			// Inst3I
			// 
			this->Inst3I->AutoSize = true;
			this->Inst3I->Location = System::Drawing::Point(134, 76);
			this->Inst3I->Name = L"Inst3I";
			this->Inst3I->Size = System::Drawing::Size(94, 13);
			this->Inst3I->TabIndex = 50;
			this->Inst3I->Text = L"Ingrese el número:\r\n";
			// 
			// Selection
			// 
			this->Selection->FormattingEnabled = true;
			this->Selection->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Recursivo", L"Iterativo" });
			this->Selection->Location = System::Drawing::Point(151, 58);
			this->Selection->Name = L"Selection";
			this->Selection->Size = System::Drawing::Size(231, 21);
			this->Selection->TabIndex = 43;
			this->Selection->SelectedIndexChanged += gcnew System::EventHandler(this, &Exercise4::Selection_SelectedIndexChanged);
			this->Selection->Click += gcnew System::EventHandler(this, &Exercise4::Selection_Click);
			// 
			// Inst
			// 
			this->Inst->AutoSize = true;
			this->Inst->Location = System::Drawing::Point(168, 42);
			this->Inst->Name = L"Inst";
			this->Inst->Size = System::Drawing::Size(198, 13);
			this->Inst->TabIndex = 42;
			this->Inst->Text = L"Seleccione que tipo de estructura desea";
			// 
			// EX3LB
			// 
			this->EX3LB->AutoSize = true;
			this->EX3LB->Location = System::Drawing::Point(25, 19);
			this->EX3LB->Name = L"EX3LB";
			this->EX3LB->Size = System::Drawing::Size(76, 13);
			this->EX3LB->TabIndex = 41;
			this->EX3LB->Text = L"Ejercicio No. 4\r\n";
			// 
			// Return
			// 
			this->Return->Location = System::Drawing::Point(12, 362);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(98, 28);
			this->Return->TabIndex = 53;
			this->Return->Text = L"Regresar";
			this->Return->UseVisualStyleBackColor = true;
			this->Return->Click += gcnew System::EventHandler(this, &Exercise4::Return_Click);
			// 
			// Exercise4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(535, 402);
			this->Controls->Add(this->IterativeS);
			this->Controls->Add(this->Return);
			this->Controls->Add(this->Recursive);
			this->Controls->Add(this->Selection);
			this->Controls->Add(this->Inst);
			this->Controls->Add(this->EX3LB);
			this->Name = L"Exercise4";
			this->Text = L"Exercise4";
			this->Load += gcnew System::EventHandler(this, &Exercise4::Exercise4_Load);
			this->Recursive->ResumeLayout(false);
			this->Recursive->PerformLayout();
			this->IterativeS->ResumeLayout(false);
			this->IterativeS->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Validate_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (((Convert::ToInt32(OriginBase->Text)) <= 10) & ((Convert::ToInt32(OriginBase->Text)) >= 2)) {
				if ((Convert::ToInt32(DestinyBase->Text) <= 10) & (Convert::ToInt32(DestinyBase->Text) >= 2)) {
					Number->Enabled = true;
					Convert->Enabled = true;
					OriginBase->Enabled = false;
					DestinyBase->Enabled = false;
					Validate->Enabled = false; 
				}
				else {
					MessageBox::Show("El valor ingresado en la casilla de destino es mayor o inferior al rango establecido" + " Rando [2,10]", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
					OriginBase->Clear();
					DestinyBase->Clear();
				};
			}
			else {
				MessageBox::Show("El valor ingresado en la casilla de origen es mayor o inferior al rango establecido" + " Rando [2,10]", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
				OriginBase->Clear();
				DestinyBase->Clear();
			};
		}
		catch (Exception^ e) {
			MessageBox::Show("No se han llenado las casillas correspondientes correctamente o " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			OriginBase->Clear();
			DestinyBase->Clear();
		};
	}
private: System::Void Selection_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (Selection->SelectedIndex) {
	case 1:
		IterativeS->Show();
		break;
	default:
		Recursive->Show();
		break;
	}
}
private: System::Void Exercise4_Load(System::Object^ sender, System::EventArgs^ e) {
	OriginBase->Clear();
	DestinyBase->Clear();
	Number->Clear();
	Recursive->Hide();
	IterativeS->Hide();
	Number->Enabled = false;
	Convert->Enabled = false; 
	OriginBase->Enabled = true;
	DestinyBase->Enabled = true;
	Validate->Enabled = true;
}
private: System::Void Selection_Click(System::Object^ sender, System::EventArgs^ e) {
	OriginBase->Clear();
	DestinyBase->Clear();
	Number->Clear();
	Recursive->Hide();
	IterativeS->Hide();
};
private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
};
private:System::Void ProcedureR(__int64 Number, __int64 OB, __int64 DB) {
	if (OB==DB) {
		ResultRTB->Text = (Convert::ToString(Number) + ".\nEn base " + Convert::ToString(DestinyBase->Text));
	}
	else {
		if (DB == 10) {
			ToBase10(Number, OB, 1);
			ResultRTB->Text = Convert::ToString(Number) + " Base " + Convert::ToString(OB) + " convertido a " + "\n" + Convert::ToString(ToBase10(Number, OB, 1)) + " Base " + Convert::ToString(DB);
		}
		else
		{
			if (OB == 10)
			{
				ResultRTB->Text = Convert::ToString(Number) + " Base " + Convert::ToString(OB) + " convertido a " + "\n" + Convert::ToString(ToBaseM(Number, DB, 1)) + " Base " + Convert::ToString(DB);
			}
			else {
				__int64 Ver = ToBase10(Number, OB, 1);
				__int64 Ver2 = ToBaseM(ToBase10(Number, OB, 1), DB, 0);
				ResultRTB->Text = Convert::ToString(Ver) + " Base "+ Convert::ToString(OB) +" convertido a " + "\n" + Convert::ToString(Ver2) + " Base " + Convert::ToString(DB);
			};
		};
	};
};
__int64 ToBase10(__int64 N, __int64 B, __int64 F) {
	if (N==1) {
		return N * F; 
	}
	else {
		return ToBase10(N/10, B, F*B) + (N%10) * F;
	};
};
__int64 ToBaseM(__int64 T, __int64 M, __int64 I) {
	if (T==0 || T == 1) {
		return T*(pow(10, I));
	}
	else {
		return ToBaseM(T/M, M, I+1) + (T%M)*(pow(10, I));
	};
};
private: System::Void Convert_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ Ver = Number->Text;
		Regex^ digitver = gcnew Regex("(?<digit>[2-9])");
		Regex^ digitver2 = gcnew Regex("(?<digit>[3-9])");
		Regex^ digitver3 = gcnew Regex("(?<digit>[4-9])");
		Regex^ digitver4 = gcnew Regex("(?<digit>[5-9])");
		Regex^ digitver5 = gcnew Regex("(?<digit>[6-9])");
		Regex^ digitver6 = gcnew Regex("(?<digit>[7-9])");
		Regex^ digitver7 = gcnew Regex("(?<digit>[8-9])");
		Regex^ digitver8 = gcnew Regex("(?<digit>[9])");
		switch (__int64 DB = Convert::ToInt64(OriginBase->Text)) {
		case 2:
			if (digitver->IsMatch(Ver)==0) {
				ProcedureR(Convert::ToInt64(Number->Text), ((Convert::ToInt64(OriginBase->Text))), ((Convert::ToInt64(DestinyBase->Text))));
			}
			else {
				MessageBox::Show("Casilla de número con datos erróneos ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Number->Clear();
			};
			break;
		case 3:
			if (digitver2->IsMatch(Ver) == 0) {
				ProcedureR(Convert::ToInt64(Number->Text), ((Convert::ToInt64(OriginBase->Text))), ((Convert::ToInt64(DestinyBase->Text))));
			}
			else {
				MessageBox::Show("Casilla de número con datos erróneos ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Number->Clear();
			};
			break;
		case 4:
			if (digitver3->IsMatch(Ver) == 0) {
				ProcedureR(Convert::ToInt64(Number->Text), ((Convert::ToInt64(OriginBase->Text))), ((Convert::ToInt64(DestinyBase->Text))));
			}
			else {
				MessageBox::Show("Casilla de número con datos erróneos ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Number->Clear();
			};
			break;
		case 5:
			if (digitver4->IsMatch(Ver) == 0) {
				ProcedureR(Convert::ToInt64(Number->Text), ((Convert::ToInt64(OriginBase->Text))), ((Convert::ToInt64(DestinyBase->Text))));
			}
			else {
				MessageBox::Show("Casilla de número con datos erróneos ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Number->Clear();
			};
			break;
		case 6:
			if (digitver5->IsMatch(Ver) == 0) {
				ProcedureR(Convert::ToInt64(Number->Text), ((Convert::ToInt64(OriginBase->Text))), ((Convert::ToInt64(DestinyBase->Text))));
			}
			else {
				MessageBox::Show("Casilla de número con datos erróneos ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Number->Clear();
			};
			break;
		case 7:
			if (digitver6->IsMatch(Ver) == 0) {
				ProcedureR(Convert::ToInt64(Number->Text), ((Convert::ToInt64(OriginBase->Text))), ((Convert::ToInt64(DestinyBase->Text))));
			}
			else {
				MessageBox::Show("Casilla de número con datos erróneos ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Number->Clear();
			};
			break;
		case 8:
			if (digitver7->IsMatch(Ver) == 0) {
				ProcedureR(Convert::ToInt64(Number->Text), ((Convert::ToInt64(OriginBase->Text))), ((Convert::ToInt64(DestinyBase->Text))));
			}
			else {
				MessageBox::Show("Casilla de número con datos erróneos ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Number->Clear();
			};
			break;
		case 9:
			if (digitver8->IsMatch(Ver) == 0) {
				ProcedureR(Convert::ToInt64(Number->Text), ((Convert::ToInt64(OriginBase->Text))), ((Convert::ToInt64(DestinyBase->Text))));
			}
			else {
				MessageBox::Show("Casilla de número con datos erróneos ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Number->Clear();
			};
			break;
		};
	}
	catch (Exception^ e) {
		MessageBox::Show("Casilla de número vacía o " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Number->Clear();
	};
	
};
	   private:System::Void ProcedureI(__int64 NumberI, __int64 OBI, __int64 DBI) {
		   if (OBI == DBI) {
			   ResultTB->Text = (Convert::ToString(NumberI) + ".\nEn base " + Convert::ToString(DestinyBaseI->Text));
		   }
		   else {
			   if (DBI == 10) {
				   ToBase10(NumberI, OBI, 1);
				   ResultRTB->Text = Convert::ToString(NumberI) + " Base " + Convert::ToString(OBI) + " convertido a " + "\n" + Convert::ToString(ToBase10(NumberI, OBI, 1)) + " Base " + Convert::ToString(DBI);
			   }
			   else
			   {
				   if (OBI == 10)
				   {
					   ResultRTB->Text = Convert::ToString(NumberI) + " Base " + Convert::ToString(OBI) + " convertido a " + "\n" + Convert::ToString(ToBaseM(NumberI, DBI, 1)) + " Base " + Convert::ToString(DBI);
				   }
				   else {
					   __int64 Ver = ToBase10(NumberI, OBI, 1);
					   __int64 Ver2 = ToBaseM(ToBase10(NumberI, OBI, 1), DBI, 0);
					   ResultRTB->Text = Convert::ToString(Ver) + " Base " + Convert::ToString(OBI) + " convertido a " + "\n" + Convert::ToString(Ver2) + " Base " + Convert::ToString(DBI);
				   };
			   };
		   };
	   };
	private:System::Void Convertions () {
		if () {

		}
		else {
		};
	};
};
}

