#pragma once

namespace Tarea1CARLOSPOP1069920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ Num;

	private: System::Windows::Forms::Label^ Column;
	private: System::Windows::Forms::Label^ Row;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ NameFR;
	private: System::Windows::Forms::TextBox^ LocationFR;
	private: System::Windows::Forms::Label^ NameCVS2;
	private: System::Windows::Forms::Label^ LocationLB2;
	private: System::Windows::Forms::Button^ SearchR;
	private: System::Windows::Forms::Button^ ImportR;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Continue;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Num = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Column = (gcnew System::Windows::Forms::Label());
			this->Row = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NameFR = (gcnew System::Windows::Forms::TextBox());
			this->LocationFR = (gcnew System::Windows::Forms::TextBox());
			this->NameCVS2 = (gcnew System::Windows::Forms::Label());
			this->LocationLB2 = (gcnew System::Windows::Forms::Label());
			this->SearchR = (gcnew System::Windows::Forms::Button());
			this->ImportR = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Continue = (gcnew System::Windows::Forms::Button());
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
			this->N->Mask = L"99999";
			this->N->Name = L"N";
			this->N->Size = System::Drawing::Size(40, 20);
			this->N->TabIndex = 43;
			this->N->ValidatingType = System::Int32::typeid;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 13);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Ingrese en orden los elementos de la matriz";
			// 
			// Num
			// 
			this->Num->Location = System::Drawing::Point(254, 134);
			this->Num->Mask = L"99999";
			this->Num->Name = L"Num";
			this->Num->Size = System::Drawing::Size(40, 20);
			this->Num->TabIndex = 45;
			this->Num->ValidatingType = System::Int32::typeid;
			// 
			// Column
			// 
			this->Column->AutoSize = true;
			this->Column->Location = System::Drawing::Point(395, 137);
			this->Column->Name = L"Column";
			this->Column->Size = System::Drawing::Size(54, 13);
			this->Column->TabIndex = 46;
			this->Column->Text = L"Columna: ";
			// 
			// Row
			// 
			this->Row->AutoSize = true;
			this->Row->Location = System::Drawing::Point(313, 137);
			this->Row->Name = L"Row";
			this->Row->Size = System::Drawing::Size(29, 13);
			this->Row->TabIndex = 47;
			this->Row->Text = L"Fila: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 13);
			this->label2->TabIndex = 48;
			this->label2->Text = L"O ingrese archivo .CSV";
			// 
			// NameFR
			// 
			this->NameFR->Enabled = false;
			this->NameFR->Location = System::Drawing::Point(327, 226);
			this->NameFR->Name = L"NameFR";
			this->NameFR->Size = System::Drawing::Size(122, 20);
			this->NameFR->TabIndex = 54;
			// 
			// LocationFR
			// 
			this->LocationFR->Enabled = false;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 355);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 13);
			this->label3->TabIndex = 55;
			this->label3->Text = L"El resultado del determinante es: ";
			// 
			// Continue
			// 
			this->Continue->Location = System::Drawing::Point(209, 299);
			this->Continue->Name = L"Continue";
			this->Continue->Size = System::Drawing::Size(105, 22);
			this->Continue->TabIndex = 56;
			this->Continue->Text = L"Continuar";
			this->Continue->UseVisualStyleBackColor = true;
			// 
			// Exercise3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(537, 442);
			this->Controls->Add(this->Iterative);
			this->Controls->Add(this->Continue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->NameFR);
			this->Controls->Add(this->LocationFR);
			this->Controls->Add(this->NameCVS2);
			this->Controls->Add(this->LocationLB2);
			this->Controls->Add(this->SearchR);
			this->Controls->Add(this->ImportR);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Row);
			this->Controls->Add(this->Column);
			this->Controls->Add(this->Num);
			this->Controls->Add(this->label1);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
}
private: System::Void Selection_Click(System::Object^ sender, System::EventArgs^ e) {
	Recursive->Hide();
	Iterative->Hide();
}
};
}
