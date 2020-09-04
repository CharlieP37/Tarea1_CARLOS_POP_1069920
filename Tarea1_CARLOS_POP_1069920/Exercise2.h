#pragma once
#include <iostream>
#include <string>
#include <algorithm>
namespace Tarea1CARLOSPOP1069920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Exercise2
	/// </summary>
	public ref class Exercise2 : public System::Windows::Forms::Form
	{
	public:
		Exercise2(void)
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
		~Exercise2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ EX2LB;
	protected:

	private: System::Windows::Forms::Label^ Inst;
	private: System::Windows::Forms::ComboBox^ Selection;
	private: System::Windows::Forms::Button^ Import;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::Label^ LocationLB;
	private: System::Windows::Forms::Label^ NameCVS;
	private: System::Windows::Forms::OpenFileDialog^ ImportFD;
	private: System::Windows::Forms::OpenFileDialog^ ImportFDR;
	private: System::Windows::Forms::TextBox^ LocationF;
	private: System::Windows::Forms::TextBox^ NameF;
	private: System::Windows::Forms::RichTextBox^ WordVisualize;



	private: System::Windows::Forms::RichTextBox^ ResultPal;
	private: System::Windows::Forms::GroupBox^ Iterative;
	private: System::Windows::Forms::GroupBox^ Recursive;
	private: System::Windows::Forms::RichTextBox^ ResultPalR;


	private: System::Windows::Forms::RichTextBox^ WordVisualizeR;

	private: System::Windows::Forms::TextBox^ NameFR;

	private: System::Windows::Forms::TextBox^ LocationFR;
	private: System::Windows::Forms::Label^ NameCVS2;


	private: System::Windows::Forms::Label^ LocationLB2;

	private: System::Windows::Forms::Button^ SearchR;

	private: System::Windows::Forms::Button^ ImportR;
	private: System::Windows::Forms::Button^ Return;






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
			this->EX2LB = (gcnew System::Windows::Forms::Label());
			this->Inst = (gcnew System::Windows::Forms::Label());
			this->Selection = (gcnew System::Windows::Forms::ComboBox());
			this->Import = (gcnew System::Windows::Forms::Button());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->LocationLB = (gcnew System::Windows::Forms::Label());
			this->NameCVS = (gcnew System::Windows::Forms::Label());
			this->LocationF = (gcnew System::Windows::Forms::TextBox());
			this->NameF = (gcnew System::Windows::Forms::TextBox());
			this->ImportFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->ImportFDR = (gcnew System::Windows::Forms::OpenFileDialog());
			this->WordVisualize = (gcnew System::Windows::Forms::RichTextBox());
			this->ResultPal = (gcnew System::Windows::Forms::RichTextBox());
			this->Iterative = (gcnew System::Windows::Forms::GroupBox());
			this->Recursive = (gcnew System::Windows::Forms::GroupBox());
			this->ResultPalR = (gcnew System::Windows::Forms::RichTextBox());
			this->WordVisualizeR = (gcnew System::Windows::Forms::RichTextBox());
			this->NameFR = (gcnew System::Windows::Forms::TextBox());
			this->LocationFR = (gcnew System::Windows::Forms::TextBox());
			this->NameCVS2 = (gcnew System::Windows::Forms::Label());
			this->LocationLB2 = (gcnew System::Windows::Forms::Label());
			this->SearchR = (gcnew System::Windows::Forms::Button());
			this->ImportR = (gcnew System::Windows::Forms::Button());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->Iterative->SuspendLayout();
			this->Recursive->SuspendLayout();
			this->SuspendLayout();
			// 
			// EX2LB
			// 
			this->EX2LB->AutoSize = true;
			this->EX2LB->Location = System::Drawing::Point(15, 10);
			this->EX2LB->Name = L"EX2LB";
			this->EX2LB->Size = System::Drawing::Size(76, 13);
			this->EX2LB->TabIndex = 0;
			this->EX2LB->Text = L"Ejercicio No. 2";
			// 
			// Inst
			// 
			this->Inst->AutoSize = true;
			this->Inst->Location = System::Drawing::Point(237, 35);
			this->Inst->Name = L"Inst";
			this->Inst->Size = System::Drawing::Size(198, 13);
			this->Inst->TabIndex = 36;
			this->Inst->Text = L"Seleccione que tipo de estructura desea";
			// 
			// Selection
			// 
			this->Selection->FormattingEnabled = true;
			this->Selection->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Iterativo", L"Recursivo" });
			this->Selection->Location = System::Drawing::Point(220, 51);
			this->Selection->Name = L"Selection";
			this->Selection->Size = System::Drawing::Size(231, 21);
			this->Selection->TabIndex = 37;
			this->Selection->SelectedIndexChanged += gcnew System::EventHandler(this, &Exercise2::Selection_SelectedIndexChanged);
			this->Selection->Click += gcnew System::EventHandler(this, &Exercise2::Selection_Click);
			// 
			// Import
			// 
			this->Import->Location = System::Drawing::Point(16, 36);
			this->Import->Name = L"Import";
			this->Import->Size = System::Drawing::Size(136, 26);
			this->Import->TabIndex = 38;
			this->Import->Text = L"IMPORTAR";
			this->Import->UseVisualStyleBackColor = true;
			this->Import->Click += gcnew System::EventHandler(this, &Exercise2::Import_Click);
			// 
			// Search
			// 
			this->Search->Location = System::Drawing::Point(16, 68);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(136, 27);
			this->Search->TabIndex = 39;
			this->Search->Text = L"BUSCAR";
			this->Search->UseVisualStyleBackColor = true;
			this->Search->Click += gcnew System::EventHandler(this, &Exercise2::Search_Click);
			// 
			// LocationLB
			// 
			this->LocationLB->AutoSize = true;
			this->LocationLB->Location = System::Drawing::Point(227, 36);
			this->LocationLB->Name = L"LocationLB";
			this->LocationLB->Size = System::Drawing::Size(111, 13);
			this->LocationLB->TabIndex = 40;
			this->LocationLB->Text = L"Ubicación del Archivo";
			// 
			// NameCVS
			// 
			this->NameCVS->AutoSize = true;
			this->NameCVS->Location = System::Drawing::Point(476, 36);
			this->NameCVS->Name = L"NameCVS";
			this->NameCVS->Size = System::Drawing::Size(44, 13);
			this->NameCVS->TabIndex = 41;
			this->NameCVS->Text = L"Nombre";
			// 
			// LocationF
			// 
			this->LocationF->Enabled = false;
			this->LocationF->Location = System::Drawing::Point(168, 65);
			this->LocationF->Name = L"LocationF";
			this->LocationF->Size = System::Drawing::Size(225, 20);
			this->LocationF->TabIndex = 42;
			// 
			// NameF
			// 
			this->NameF->Enabled = false;
			this->NameF->Location = System::Drawing::Point(412, 65);
			this->NameF->Name = L"NameF";
			this->NameF->Size = System::Drawing::Size(186, 20);
			this->NameF->TabIndex = 43;
			// 
			// ImportFD
			// 
			this->ImportFD->FileName = L"openFileDialog1";
			// 
			// ImportFDR
			// 
			this->ImportFDR->FileName = L"openFileDialog1";
			// 
			// WordVisualize
			// 
			this->WordVisualize->Location = System::Drawing::Point(16, 116);
			this->WordVisualize->Name = L"WordVisualize";
			this->WordVisualize->Size = System::Drawing::Size(365, 128);
			this->WordVisualize->TabIndex = 45;
			this->WordVisualize->Text = L"";
			// 
			// ResultPal
			// 
			this->ResultPal->Location = System::Drawing::Point(412, 116);
			this->ResultPal->Name = L"ResultPal";
			this->ResultPal->Size = System::Drawing::Size(186, 128);
			this->ResultPal->TabIndex = 46;
			this->ResultPal->Text = L"";
			// 
			// Iterative
			// 
			this->Iterative->Controls->Add(this->ResultPal);
			this->Iterative->Controls->Add(this->WordVisualize);
			this->Iterative->Controls->Add(this->NameF);
			this->Iterative->Controls->Add(this->LocationF);
			this->Iterative->Controls->Add(this->NameCVS);
			this->Iterative->Controls->Add(this->LocationLB);
			this->Iterative->Controls->Add(this->Search);
			this->Iterative->Controls->Add(this->Import);
			this->Iterative->Location = System::Drawing::Point(32, 94);
			this->Iterative->Name = L"Iterative";
			this->Iterative->Size = System::Drawing::Size(616, 294);
			this->Iterative->TabIndex = 47;
			this->Iterative->TabStop = false;
			this->Iterative->Text = L"Iterative";
			// 
			// Recursive
			// 
			this->Recursive->Controls->Add(this->ResultPalR);
			this->Recursive->Controls->Add(this->WordVisualizeR);
			this->Recursive->Controls->Add(this->NameFR);
			this->Recursive->Controls->Add(this->LocationFR);
			this->Recursive->Controls->Add(this->NameCVS2);
			this->Recursive->Controls->Add(this->LocationLB2);
			this->Recursive->Controls->Add(this->SearchR);
			this->Recursive->Controls->Add(this->ImportR);
			this->Recursive->Location = System::Drawing::Point(30, 94);
			this->Recursive->Name = L"Recursive";
			this->Recursive->Size = System::Drawing::Size(618, 294);
			this->Recursive->TabIndex = 48;
			this->Recursive->TabStop = false;
			this->Recursive->Text = L"Recursivo";
			// 
			// ResultPalR
			// 
			this->ResultPalR->Location = System::Drawing::Point(407, 116);
			this->ResultPalR->Name = L"ResultPalR";
			this->ResultPalR->Size = System::Drawing::Size(186, 143);
			this->ResultPalR->TabIndex = 46;
			this->ResultPalR->Text = L"";
			// 
			// WordVisualizeR
			// 
			this->WordVisualizeR->Location = System::Drawing::Point(25, 116);
			this->WordVisualizeR->Name = L"WordVisualizeR";
			this->WordVisualizeR->Size = System::Drawing::Size(358, 143);
			this->WordVisualizeR->TabIndex = 45;
			this->WordVisualizeR->Text = L"";
			// 
			// NameFR
			// 
			this->NameFR->Enabled = false;
			this->NameFR->Location = System::Drawing::Point(407, 65);
			this->NameFR->Name = L"NameFR";
			this->NameFR->Size = System::Drawing::Size(186, 20);
			this->NameFR->TabIndex = 43;
			// 
			// LocationFR
			// 
			this->LocationFR->Enabled = false;
			this->LocationFR->Location = System::Drawing::Point(167, 65);
			this->LocationFR->Name = L"LocationFR";
			this->LocationFR->Size = System::Drawing::Size(225, 20);
			this->LocationFR->TabIndex = 42;
			// 
			// NameCVS2
			// 
			this->NameCVS2->AutoSize = true;
			this->NameCVS2->Location = System::Drawing::Point(485, 36);
			this->NameCVS2->Name = L"NameCVS2";
			this->NameCVS2->Size = System::Drawing::Size(44, 13);
			this->NameCVS2->TabIndex = 41;
			this->NameCVS2->Text = L"Nombre";
			// 
			// LocationLB2
			// 
			this->LocationLB2->AutoSize = true;
			this->LocationLB2->Location = System::Drawing::Point(223, 36);
			this->LocationLB2->Name = L"LocationLB2";
			this->LocationLB2->Size = System::Drawing::Size(111, 13);
			this->LocationLB2->TabIndex = 40;
			this->LocationLB2->Text = L"Ubicación del Archivo";
			// 
			// SearchR
			// 
			this->SearchR->Location = System::Drawing::Point(25, 68);
			this->SearchR->Name = L"SearchR";
			this->SearchR->Size = System::Drawing::Size(136, 27);
			this->SearchR->TabIndex = 39;
			this->SearchR->Text = L"BUSCAR";
			this->SearchR->UseVisualStyleBackColor = true;
			this->SearchR->Click += gcnew System::EventHandler(this, &Exercise2::SearchR_Click);
			// 
			// ImportR
			// 
			this->ImportR->Location = System::Drawing::Point(25, 36);
			this->ImportR->Name = L"ImportR";
			this->ImportR->Size = System::Drawing::Size(136, 26);
			this->ImportR->TabIndex = 38;
			this->ImportR->Text = L"IMPORTAR";
			this->ImportR->UseVisualStyleBackColor = true;
			this->ImportR->Click += gcnew System::EventHandler(this, &Exercise2::ImportR_Click);
			// 
			// Return
			// 
			this->Return->Location = System::Drawing::Point(18, 409);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(124, 27);
			this->Return->TabIndex = 49;
			this->Return->Text = L"Regresar";
			this->Return->UseVisualStyleBackColor = true;
			this->Return->Click += gcnew System::EventHandler(this, &Exercise2::Return_Click);
			// 
			// Exercise2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(673, 448);
			this->Controls->Add(this->Return);
			this->Controls->Add(this->Recursive);
			this->Controls->Add(this->Iterative);
			this->Controls->Add(this->Selection);
			this->Controls->Add(this->Inst);
			this->Controls->Add(this->EX2LB);
			this->Name = L"Exercise2";
			this->Text = L"Exercise2";
			this->Load += gcnew System::EventHandler(this, &Exercise2::Exercise2_Load);
			this->Iterative->ResumeLayout(false);
			this->Iterative->PerformLayout();
			this->Recursive->ResumeLayout(false);
			this->Recursive->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int Y = 0;
		int N = 0;
		int wordsN = 0;
		int CR = 0;
		;
	private: System::Void Import_Click(System::Object^ sender, System::EventArgs^ e) {
		WordVisualize->Clear();
		ResultPal->Clear();
		ImportFD->Filter = "Archivos separados por coma (csv) | *.csv";
		ImportFD->FileName = "";
		if (ImportFD->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			LocationF->Text = ImportFD->FileName;
			NameF->Text = ImportFD->SafeFileName;
		}
		else
		{
			MessageBox::Show("No se seleccionó ningún archivo o archivo corrupto", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		};
	}
	private: System::Void ImportR_Click(System::Object^ sender, System::EventArgs^ e) {
		WordVisualizeR->Clear();
		ResultPalR->Clear();
		ImportFDR->Filter = "Archivos separados por coma (csv) | *.csv";
		ImportFDR->FileName = "";
		if (ImportFDR->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			LocationFR->Text = ImportFDR->FileName;
			NameFR->Text = ImportFDR->SafeFileName;
	    }
		else
		{
			MessageBox::Show("No se seleccionó ningún archivo o archivo corrupto", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		};
	}
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
	WordVisualize->Clear();
	ResultPal->Clear();
	int PalN, PalY, Valid, R, C;
	PalN = 0;
	PalY = 0;
	R = 0;
	C = 0;
	array<String^>^ Lines = File::ReadAllLines(ImportFD->FileName);
	for (int i = 0; i < Lines->Length; i++)
	{
		array<String^>^ D = Lines[i]->Split(',');
		for (int j = 0; j < D->Length; j++) {
			WordVisualize->Text += D[j] + "\t";
			C++;
			int P = D[j]->Length;
			String^ Word = D[j]->ToUpper();
			Valid = 0;
			if (P > 1) {
				for (int k = 0; k < (P / 2); k++) {
					if ((Word->Substring(k, 1)) == (Word->Substring((Word->Length - (k + 1)), 1))) {
						Valid++;
					}
					else
					{
						k = (P / 2);
					};
				};
				if (Valid == (P / 2)) {
					PalY++;
				}
				else
				{
					PalN++;
				};
			}
			else {
				R++;
				PalN++;
			};
		};
		WordVisualize->Text += "\n";
	}
	if (R == C)
	{
		ResultPal->Text = "No existen palabras palíndromas o existe algún error en la escritura de ellas";
		MessageBox::Show("Operación Exitosa", "Completado", MessageBoxButtons::OK);
	}
	else
	{
		ResultPal->Text = "Hay " + System::Convert::ToString(PalY) + " palabras palíndormas Y " + System::Convert::ToString(PalN) + " no.";
		MessageBox::Show("Operación Exitosa", "Completado", MessageBoxButtons::OK);
	};
}
private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void SearchR_Click(System::Object^ sender, System::EventArgs^ e) {
	WordVisualizeR->Clear();
	ResultPalR->Clear();
	int PalNR, PalYR, ValidR, RR;
	PalNR = 0;
	PalYR = 0;
	RR = 0;
	array<String^>^ LinesR = File::ReadAllLines(ImportFDR->FileName);
	SEARCH(LinesR, RR);
	if (wordsN == CR)
	{
		ResultPalR->Text = "No existen palabras palíndromas o existe algún error en la escritura de ellas";
		MessageBox::Show("Operación Exitosa", "Completado", MessageBoxButtons::OK);
	}
	else
	{
		ResultPalR->Text = "Hay " + System::Convert::ToString(Y) + " palabras palíndormas Y " + System::Convert::ToString(N) + " no.";
		MessageBox::Show("Operación Exitosa", "Completado", MessageBoxButtons::OK);
	};

}
	private:System::Void SEARCH(array<String^>^ Lines, int R) {
		int j = 0;
		if (R<(Lines->Length)) {
			SEARCH2(Lines, j, R);
			R++;
			WordVisualizeR->Text += "\n";
			SEARCH(Lines, R);
		}
		else {
		};
	};
	private:System::Void SEARCH2(array<String^>^ Line, int j, int R) {
		array<String^>^ D = Line[R]->Split(',');
		if (j < (D->Length)) {
			WordVisualizeR->Text += D[j] + "\t";
			int P = D[j]->Length;
			CR++; 
			String^ Word = D[j]->ToUpper();
			int Valid = 0;
			if (P > 1) {
				int k = 0; 
				SEARCH3(Line, k, P, Word, Valid);
				j++;
				SEARCH2(Line, j, R);
			}
			else {
				Valid++; 
				ContN(Valid);
				ContW(Valid);
				j++;
				SEARCH2(Line, j, R); 
			};
		}
		else {
		};
	};
	private:System::Void SEARCH3(array<String^>^ Line, int k, int p, String^ Word, int valid) {
		int True = 1; 
		if (k < (p / 2)) {
			if ((Word->Substring(k, 1)) == (Word->Substring((Word->Length - (k + 1)), 1))) {
				valid++;
				k++;
				SEARCH3(Line, k, p, Word, valid);
				//ContW(valid);
			}
			else
			{
				k = (p / 2);
				SEARCH3(Line, k, p, Word, valid);
			};
		}
		else
		{
			if (valid == (p / 2)) {
				ContY(True);
			}
			else
			{
				ContN(True);
			};
		};
	};
	private:System::Void ContY(int PY) {
		Y =Y + PY;
	};
	private:System::Void ContN(int PN) {
		N = N + PN;
	};
	private:System::Void ContW(int c) {
		wordsN = wordsN + c;
	};
private: System::Void Exercise2_Load(System::Object^ sender, System::EventArgs^ e) {
	Recursive->Hide();
	Iterative->Hide();
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
private: System::Void Selection_Click(System::Object^ sender, System::EventArgs^ e) {
	Recursive->Hide();
	Iterative->Hide();
	WordVisualizeR->Clear();
	ResultPalR->Clear();
	WordVisualize->Clear();
	ResultPal->Clear();
}
};
}