#pragma once
#include <iostream>
#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>
namespace Tarea1CARLOSPOP1069920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Exercise3
	/// </summary>
	public ref class Exercise3 : public System::Windows::Forms::Form
	{
	public:
		Exercise3(void)
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
		~Exercise3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Return;
	private: System::Windows::Forms::Label^ EX3LB;
	private: System::Windows::Forms::ComboBox^ Selection;
	private: System::Windows::Forms::Label^ Inst;
	private: System::Windows::Forms::GroupBox^ Recursive;
	private: System::Windows::Forms::GroupBox^ Iterative;
	private: System::Windows::Forms::Label^ InstN;
	private: System::Windows::Forms::MaskedTextBox^ N;
	private: System::Windows::Forms::Label^ InstFill;


	private: System::Windows::Forms::MaskedTextBox^ Num;
	private: System::Windows::Forms::Label^ ColumnTBR;
	private: System::Windows::Forms::Label^ RowTBR;



	private: System::Windows::Forms::Label^ InstFile;

	private: System::Windows::Forms::TextBox^ NameFR;
	private: System::Windows::Forms::TextBox^ LocationFR;
	private: System::Windows::Forms::Label^ NameCVS2;
	private: System::Windows::Forms::Label^ LocationLB2;
	private: System::Windows::Forms::Button^ SearchR;
	private: System::Windows::Forms::Button^ ImportR;
	private: System::Windows::Forms::Label^ ResultR;

	private: System::Windows::Forms::Button^ Continue;
	private: System::Windows::Forms::Button^ ValidateR;
	private: System::Windows::Forms::Button^ NextDR;
	private: System::Windows::Forms::DataGridView^ DataGridR;





	protected:

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
			this->Return = (gcnew System::Windows::Forms::Button());
			this->EX3LB = (gcnew System::Windows::Forms::Label());
			this->Selection = (gcnew System::Windows::Forms::ComboBox());
			this->Inst = (gcnew System::Windows::Forms::Label());
			this->Recursive = (gcnew System::Windows::Forms::GroupBox());
			this->Iterative = (gcnew System::Windows::Forms::GroupBox());
			this->InstN = (gcnew System::Windows::Forms::Label());
			this->N = (gcnew System::Windows::Forms::MaskedTextBox());
			this->InstFill = (gcnew System::Windows::Forms::Label());
			this->Num = (gcnew System::Windows::Forms::MaskedTextBox());
			this->ColumnTBR = (gcnew System::Windows::Forms::Label());
			this->RowTBR = (gcnew System::Windows::Forms::Label());
			this->InstFile = (gcnew System::Windows::Forms::Label());
			this->NameFR = (gcnew System::Windows::Forms::TextBox());
			this->LocationFR = (gcnew System::Windows::Forms::TextBox());
			this->NameCVS2 = (gcnew System::Windows::Forms::Label());
			this->LocationLB2 = (gcnew System::Windows::Forms::Label());
			this->SearchR = (gcnew System::Windows::Forms::Button());
			this->ImportR = (gcnew System::Windows::Forms::Button());
			this->ResultR = (gcnew System::Windows::Forms::Label());
			this->Continue = (gcnew System::Windows::Forms::Button());
			this->ValidateR = (gcnew System::Windows::Forms::Button());
			this->NextDR = (gcnew System::Windows::Forms::Button());
			this->DataGridR = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridR))->BeginInit();
			this->SuspendLayout();
			// 
			// Return
			// 
			this->Return->Location = System::Drawing::Point(12, 402);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(98, 28);
			this->Return->TabIndex = 0;
			this->Return->Text = L"Regresar";
			this->Return->UseVisualStyleBackColor = true;
			this->Return->Click += gcnew System::EventHandler(this, &Exercise3::Return_Click);
			// 
			// EX3LB
			// 
			this->EX3LB->AutoSize = true;
			this->EX3LB->Location = System::Drawing::Point(27, 19);
			this->EX3LB->Name = L"EX3LB";
			this->EX3LB->Size = System::Drawing::Size(76, 13);
			this->EX3LB->TabIndex = 1;
			this->EX3LB->Text = L"Ejercicio No. 3";
			// 
			// Selection
			// 
			this->Selection->FormattingEnabled = true;
			this->Selection->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Iterativo", L"Recursivo" });
			this->Selection->Location = System::Drawing::Point(145, 58);
			this->Selection->Name = L"Selection";
			this->Selection->Size = System::Drawing::Size(231, 21);
			this->Selection->TabIndex = 39;
			this->Selection->SelectedIndexChanged += gcnew System::EventHandler(this, &Exercise3::Selection_SelectedIndexChanged);
			this->Selection->Click += gcnew System::EventHandler(this, &Exercise3::Selection_Click);
			// 
			// Inst
			// 
			this->Inst->AutoSize = true;
			this->Inst->Location = System::Drawing::Point(162, 42);
			this->Inst->Name = L"Inst";
			this->Inst->Size = System::Drawing::Size(198, 13);
			this->Inst->TabIndex = 38;
			this->Inst->Text = L"Seleccione que tipo de estructura desea";
			// 
			// Recursive
			// 
			this->Recursive->Location = System::Drawing::Point(12, 46);
			this->Recursive->Name = L"Recursive";
			this->Recursive->Size = System::Drawing::Size(102, 33);
			this->Recursive->TabIndex = 40;
			this->Recursive->TabStop = false;
			this->Recursive->Text = L"Recursivo";
			// 
			// Iterative
			// 
			this->Iterative->Location = System::Drawing::Point(423, 46);
			this->Iterative->Name = L"Iterative";
			this->Iterative->Size = System::Drawing::Size(102, 33);
			this->Iterative->TabIndex = 41;
			this->Iterative->TabStop = false;
			this->Iterative->Text = L"Iterativo";
			// 
			// InstN
			// 
			this->InstN->AutoSize = true;
			this->InstN->Location = System::Drawing::Point(38, 97);
			this->InstN->Name = L"InstN";
			this->InstN->Size = System::Drawing::Size(195, 13);
			this->InstN->TabIndex = 42;
			this->InstN->Text = L"Ingrese el tamaño de la matriz cuadrada";
			// 
			// N
			// 
			this->N->Location = System::Drawing::Point(254, 97);
			this->N->Mask = L"999999999999999999999999999999999999999999999999999999999999999999999999999999999"
				L"999";
			this->N->Name = L"N";
			this->N->Size = System::Drawing::Size(40, 20);
			this->N->TabIndex = 43;
			this->N->ValidatingType = System::Int32::typeid;
			// 
			// InstFill
			// 
			this->InstFill->AutoSize = true;
			this->InstFill->Location = System::Drawing::Point(38, 137);
			this->InstFill->Name = L"InstFill";
			this->InstFill->Size = System::Drawing::Size(210, 13);
			this->InstFill->TabIndex = 44;
			this->InstFill->Text = L"Ingrese en orden los elementos de la matriz";
			// 
			// Num
			// 
			this->Num->Location = System::Drawing::Point(254, 134);
			this->Num->Mask = L"999999999999999999999999999999999999999999999999999999999999999999999";
			this->Num->Name = L"Num";
			this->Num->Size = System::Drawing::Size(40, 20);
			this->Num->TabIndex = 45;
			this->Num->ValidatingType = System::Int32::typeid;
			// 
			// ColumnTBR
			// 
			this->ColumnTBR->AutoSize = true;
			this->ColumnTBR->Location = System::Drawing::Point(388, 137);
			this->ColumnTBR->Name = L"ColumnTBR";
			this->ColumnTBR->Size = System::Drawing::Size(54, 13);
			this->ColumnTBR->TabIndex = 46;
			this->ColumnTBR->Text = L"Columna: ";
			// 
			// RowTBR
			// 
			this->RowTBR->AutoSize = true;
			this->RowTBR->Location = System::Drawing::Point(313, 137);
			this->RowTBR->Name = L"RowTBR";
			this->RowTBR->Size = System::Drawing::Size(29, 13);
			this->RowTBR->TabIndex = 47;
			this->RowTBR->Text = L"Fila: ";
			// 
			// InstFile
			// 
			this->InstFile->AutoSize = true;
			this->InstFile->Location = System::Drawing::Point(38, 182);
			this->InstFile->Name = L"InstFile";
			this->InstFile->Size = System::Drawing::Size(117, 13);
			this->InstFile->TabIndex = 48;
			this->InstFile->Text = L"O ingrese archivo .CSV";
			// 
			// NameFR
			// 
			this->NameFR->Location = System::Drawing::Point(327, 226);
			this->NameFR->Name = L"NameFR";
			this->NameFR->Size = System::Drawing::Size(122, 20);
			this->NameFR->TabIndex = 54;
			// 
			// LocationFR
			// 
			this->LocationFR->Location = System::Drawing::Point(137, 226);
			this->LocationFR->Name = L"LocationFR";
			this->LocationFR->Size = System::Drawing::Size(163, 20);
			this->LocationFR->TabIndex = 53;
			// 
			// NameCVS2
			// 
			this->NameCVS2->AutoSize = true;
			this->NameCVS2->Location = System::Drawing::Point(363, 204);
			this->NameCVS2->Name = L"NameCVS2";
			this->NameCVS2->Size = System::Drawing::Size(44, 13);
			this->NameCVS2->TabIndex = 52;
			this->NameCVS2->Text = L"Nombre";
			// 
			// LocationLB2
			// 
			this->LocationLB2->AutoSize = true;
			this->LocationLB2->Location = System::Drawing::Point(162, 204);
			this->LocationLB2->Name = L"LocationLB2";
			this->LocationLB2->Size = System::Drawing::Size(111, 13);
			this->LocationLB2->TabIndex = 51;
			this->LocationLB2->Text = L"Ubicación del Archivo";
			// 
			// SearchR
			// 
			this->SearchR->Location = System::Drawing::Point(41, 241);
			this->SearchR->Name = L"SearchR";
			this->SearchR->Size = System::Drawing::Size(90, 27);
			this->SearchR->TabIndex = 50;
			this->SearchR->Text = L"BUSCAR";
			this->SearchR->UseVisualStyleBackColor = true;
			// 
			// ImportR
			// 
			this->ImportR->Location = System::Drawing::Point(41, 209);
			this->ImportR->Name = L"ImportR";
			this->ImportR->Size = System::Drawing::Size(90, 26);
			this->ImportR->TabIndex = 49;
			this->ImportR->Text = L"IMPORTAR";
			this->ImportR->UseVisualStyleBackColor = true;
			// 
			// ResultR
			// 
			this->ResultR->AutoSize = true;
			this->ResultR->Location = System::Drawing::Point(27, 355);
			this->ResultR->Name = L"ResultR";
			this->ResultR->Size = System::Drawing::Size(163, 13);
			this->ResultR->TabIndex = 55;
			this->ResultR->Text = L"El resultado del determinante es: ";
			// 
			// Continue
			// 
			this->Continue->Location = System::Drawing::Point(209, 299);
			this->Continue->Name = L"Continue";
			this->Continue->Size = System::Drawing::Size(105, 22);
			this->Continue->TabIndex = 56;
			this->Continue->Text = L"Continuar";
			this->Continue->UseVisualStyleBackColor = true;
			this->Continue->Click += gcnew System::EventHandler(this, &Exercise3::Continue_Click);
			// 
			// ValidateR
			// 
			this->ValidateR->Location = System::Drawing::Point(316, 97);
			this->ValidateR->Name = L"ValidateR";
			this->ValidateR->Size = System::Drawing::Size(60, 20);
			this->ValidateR->TabIndex = 57;
			this->ValidateR->Text = L"OK";
			this->ValidateR->UseVisualStyleBackColor = true;
			this->ValidateR->Click += gcnew System::EventHandler(this, &Exercise3::ValidateR_Click);
			// 
			// NextDR
			// 
			this->NextDR->Location = System::Drawing::Point(391, 97);
			this->NextDR->Name = L"NextDR";
			this->NextDR->Size = System::Drawing::Size(127, 20);
			this->NextDR->TabIndex = 58;
			this->NextDR->Text = L"Guardar Dato";
			this->NextDR->UseVisualStyleBackColor = true;
			this->NextDR->Click += gcnew System::EventHandler(this, &Exercise3::NextDR_Click);
			// 
			// DataGridR
			// 
			this->DataGridR->AllowUserToAddRows = false;
			this->DataGridR->AllowUserToDeleteRows = false;
			this->DataGridR->AllowUserToResizeColumns = false;
			this->DataGridR->AllowUserToResizeRows = false;
			this->DataGridR->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridR->ColumnHeadersVisible = false;
			this->DataGridR->Location = System::Drawing::Point(542, 20);
			this->DataGridR->Name = L"DataGridR";
			this->DataGridR->ReadOnly = true;
			this->DataGridR->RowHeadersVisible = false;
			this->DataGridR->ShowCellErrors = false;
			this->DataGridR->ShowCellToolTips = false;
			this->DataGridR->ShowEditingIcon = false;
			this->DataGridR->ShowRowErrors = false;
			this->DataGridR->Size = System::Drawing::Size(543, 400);
			this->DataGridR->TabIndex = 59;
			// 
			// Exercise3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1097, 442);
			this->Controls->Add(this->DataGridR);
			this->Controls->Add(this->NextDR);
			this->Controls->Add(this->ValidateR);
			this->Controls->Add(this->Iterative);
			this->Controls->Add(this->Continue);
			this->Controls->Add(this->ResultR);
			this->Controls->Add(this->NameFR);
			this->Controls->Add(this->LocationFR);
			this->Controls->Add(this->NameCVS2);
			this->Controls->Add(this->LocationLB2);
			this->Controls->Add(this->SearchR);
			this->Controls->Add(this->ImportR);
			this->Controls->Add(this->InstFile);
			this->Controls->Add(this->RowTBR);
			this->Controls->Add(this->ColumnTBR);
			this->Controls->Add(this->Num);
			this->Controls->Add(this->InstFill);
			this->Controls->Add(this->N);
			this->Controls->Add(this->InstN);
			this->Controls->Add(this->Recursive);
			this->Controls->Add(this->Selection);
			this->Controls->Add(this->Inst);
			this->Controls->Add(this->EX3LB);
			this->Controls->Add(this->Return);
			this->Name = L"Exercise3";
			this->Text = L"Exercise3";
			this->Load += gcnew System::EventHandler(this, &Exercise3::Exercise3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridR))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	__int64 MatrixSI = 0;
	__int64 MatrixSR = 0;
	__int64 MC = 0;
	int R = 0; 
	__int64 X = 0; 
;
	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
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
private: System::Void Exercise3_Load(System::Object^ sender, System::EventArgs^ e) {
	Recursive->Hide();
	Iterative->Hide();
	Num->Clear();
	Num->Enabled=false;
	NextDR->Enabled = false;
	ImportR->Enabled = false;
	SearchR->Enabled = false; 
	Continue->Enabled = false;
}
private: System::Void Selection_Click(System::Object^ sender, System::EventArgs^ e) {
	Recursive->Hide();
	Iterative->Hide();
}
private: System::Void ValidateR_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		MatrixSR = Convert::ToInt64(N->Text);
		//DataGridR->DataSource = NULL; 
		//DataGridR->Rows->Clear();
		//DataGridR->Refresh();
		Num->Enabled = true;
		NextDR->Enabled = true;
		if (MatrixSR > 0) {
			for (int i = 0; i < MatrixSR; i++) {
				DataGridViewColumn^ NewColumn = gcnew DataGridViewColumn();
				NewColumn->Width = 20;
				DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				NewColumn->CellTemplate = cellTemplate;
				DataGridR->Columns->Add(NewColumn);
			}
			for (int i = 0; i < (MatrixSR); i++) {
				DataGridViewRow^ NewRow = gcnew DataGridViewRow();
				NewRow->Height = 20;
				DataGridR->Rows->Add(NewRow);
			};
		}
		N->Enabled = false; 
		ValidateR->Enabled = false; 
	}
	catch(Exception^e) {
		MessageBox::Show("Casilla de número vacía o " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		N->Clear();
	};
}
	private: System::Void NextDR_Click(System::Object^ sender, System::EventArgs^ e) {
		if (R == MatrixSR - 1 && MC == MatrixSR - 1) {
			RowTBR->Text = "Fila: " + Convert::ToString(R + 1);
			ColumnTBR->Text = "Columna: " + Convert::ToString(MC + 1);
			DataGridR->Rows[R]->Cells[MC]->Value = Convert::ToInt64(Num->Text);
			Num->Enabled = false;
			NextDR->Enabled = false;
			Continue->Enabled = true; 
		}
		else {
			if (MC == MatrixSR) {
				MC = 0;
				R++;
				RowFill();
			}
			else {
				RowFill();
			};
		};

	}
	private:System::Void RowFill(){
		if (MC < MatrixSR && R < MatrixSR) {
			RowTBR->Text = "Fila: " + Convert::ToString(R+1);
			ColumnTBR->Text = "Columna: " + Convert::ToString(MC+1);
			DataGridR->Rows[R]->Cells[MC]->Value = Convert::ToInt64(Num->Text);
			MC++;
		}
		else {
			R = MatrixSR; 
		};
	}
private: System::Void Continue_Click(System::Object^ sender, System::EventArgs^ e) {
	//DeterminantB(1, 1, MatrixSR-1);**
	};
};
}
