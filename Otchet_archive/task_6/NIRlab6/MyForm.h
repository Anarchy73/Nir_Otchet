#pragma once
#include <cmath>
namespace NIRlab6 {

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
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ output_grid;
	private: System::Windows::Forms::DataGridView^ input_A;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ input_B;
	private: System::Windows::Forms::TextBox^ set_size_A_columns;


	private: System::Windows::Forms::TextBox^ set_size_A_lines;

	private: System::Windows::Forms::Button^ set_size_A;
	private: System::Windows::Forms::TextBox^ set_size_B_columns;

	private: System::Windows::Forms::TextBox^ set_size_B_lines;

	private: System::Windows::Forms::Button^ set_size_B;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::GroupBox^ modes;

	private: System::Windows::Forms::RadioButton^ mode4_skalproz;

	private: System::Windows::Forms::RadioButton^ mode3_sub;

	private: System::Windows::Forms::RadioButton^ mode2_sloz;

	private: System::Windows::Forms::RadioButton^ mode1_proiz;
	private: System::Windows::Forms::RadioButton^ mode5_vectproz;
	private: System::Windows::Forms::RadioButton^ mode8_tranA;



	private: System::Windows::Forms::RadioButton^ mode7_rankA;

	private: System::Windows::Forms::RadioButton^ mode6_oprA;

	private: System::Windows::Forms::Button^ solve;
	private: System::Windows::Forms::TextBox^ output_scal;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ edbtn;
	private: System::Windows::Forms::Button^ edbtnB;
	private: System::Windows::Forms::RadioButton^ mode9_numproz;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;


	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->output_grid = (gcnew System::Windows::Forms::DataGridView());
			this->input_A = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->input_B = (gcnew System::Windows::Forms::DataGridView());
			this->set_size_A_columns = (gcnew System::Windows::Forms::TextBox());
			this->set_size_A_lines = (gcnew System::Windows::Forms::TextBox());
			this->set_size_A = (gcnew System::Windows::Forms::Button());
			this->set_size_B_columns = (gcnew System::Windows::Forms::TextBox());
			this->set_size_B_lines = (gcnew System::Windows::Forms::TextBox());
			this->set_size_B = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->modes = (gcnew System::Windows::Forms::GroupBox());
			this->mode9_numproz = (gcnew System::Windows::Forms::RadioButton());
			this->mode8_tranA = (gcnew System::Windows::Forms::RadioButton());
			this->mode7_rankA = (gcnew System::Windows::Forms::RadioButton());
			this->mode6_oprA = (gcnew System::Windows::Forms::RadioButton());
			this->mode5_vectproz = (gcnew System::Windows::Forms::RadioButton());
			this->mode4_skalproz = (gcnew System::Windows::Forms::RadioButton());
			this->mode3_sub = (gcnew System::Windows::Forms::RadioButton());
			this->mode2_sloz = (gcnew System::Windows::Forms::RadioButton());
			this->mode1_proiz = (gcnew System::Windows::Forms::RadioButton());
			this->solve = (gcnew System::Windows::Forms::Button());
			this->output_scal = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->edbtn = (gcnew System::Windows::Forms::Button());
			this->edbtnB = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->output_grid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_A))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->modes->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(866, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Выходная матрица";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(47, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Матрица А";
			// 
			// output_grid
			// 
			this->output_grid->AllowUserToAddRows = false;
			this->output_grid->AllowUserToDeleteRows = false;
			this->output_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->output_grid->Location = System::Drawing::Point(859, 43);
			this->output_grid->Name = L"output_grid";
			this->output_grid->ReadOnly = true;
			this->output_grid->RowHeadersWidth = 51;
			this->output_grid->RowTemplate->Height = 24;
			this->output_grid->Size = System::Drawing::Size(363, 302);
			this->output_grid->TabIndex = 6;
			// 
			// input_A
			// 
			this->input_A->AllowUserToAddRows = false;
			this->input_A->AllowUserToDeleteRows = false;
			this->input_A->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->input_A->Location = System::Drawing::Point(36, 43);
			this->input_A->Name = L"input_A";
			this->input_A->RowHeadersWidth = 51;
			this->input_A->RowTemplate->Height = 24;
			this->input_A->Size = System::Drawing::Size(363, 302);
			this->input_A->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(461, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Матрица B";
			// 
			// input_B
			// 
			this->input_B->AllowUserToAddRows = false;
			this->input_B->AllowUserToDeleteRows = false;
			this->input_B->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->input_B->Location = System::Drawing::Point(450, 43);
			this->input_B->Name = L"input_B";
			this->input_B->RowHeadersWidth = 51;
			this->input_B->RowTemplate->Height = 24;
			this->input_B->Size = System::Drawing::Size(363, 302);
			this->input_B->TabIndex = 9;
			// 
			// set_size_A_columns
			// 
			this->set_size_A_columns->Location = System::Drawing::Point(170, 379);
			this->set_size_A_columns->Name = L"set_size_A_columns";
			this->set_size_A_columns->Size = System::Drawing::Size(100, 22);
			this->set_size_A_columns->TabIndex = 15;
			// 
			// set_size_A_lines
			// 
			this->set_size_A_lines->Location = System::Drawing::Point(170, 351);
			this->set_size_A_lines->Name = L"set_size_A_lines";
			this->set_size_A_lines->Size = System::Drawing::Size(100, 22);
			this->set_size_A_lines->TabIndex = 14;
			// 
			// set_size_A
			// 
			this->set_size_A->Location = System::Drawing::Point(51, 351);
			this->set_size_A->Name = L"set_size_A";
			this->set_size_A->Size = System::Drawing::Size(113, 53);
			this->set_size_A->TabIndex = 13;
			this->set_size_A->Text = L"Задать размер A";
			this->set_size_A->UseVisualStyleBackColor = true;
			this->set_size_A->Click += gcnew System::EventHandler(this, &MyForm::set_size_A_Click);
			// 
			// set_size_B_columns
			// 
			this->set_size_B_columns->Location = System::Drawing::Point(584, 379);
			this->set_size_B_columns->Name = L"set_size_B_columns";
			this->set_size_B_columns->Size = System::Drawing::Size(100, 22);
			this->set_size_B_columns->TabIndex = 18;
			// 
			// set_size_B_lines
			// 
			this->set_size_B_lines->Location = System::Drawing::Point(584, 351);
			this->set_size_B_lines->Name = L"set_size_B_lines";
			this->set_size_B_lines->Size = System::Drawing::Size(100, 22);
			this->set_size_B_lines->TabIndex = 17;
			// 
			// set_size_B
			// 
			this->set_size_B->Location = System::Drawing::Point(465, 351);
			this->set_size_B->Name = L"set_size_B";
			this->set_size_B->Size = System::Drawing::Size(113, 53);
			this->set_size_B->TabIndex = 16;
			this->set_size_B->Text = L"Задать размер B";
			this->set_size_B->UseVisualStyleBackColor = true;
			this->set_size_B->Click += gcnew System::EventHandler(this, &MyForm::set_size_B_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// modes
			// 
			this->modes->Controls->Add(this->mode9_numproz);
			this->modes->Controls->Add(this->mode8_tranA);
			this->modes->Controls->Add(this->mode7_rankA);
			this->modes->Controls->Add(this->mode6_oprA);
			this->modes->Controls->Add(this->mode5_vectproz);
			this->modes->Controls->Add(this->mode4_skalproz);
			this->modes->Controls->Add(this->mode3_sub);
			this->modes->Controls->Add(this->mode2_sloz);
			this->modes->Controls->Add(this->mode1_proiz);
			this->modes->Location = System::Drawing::Point(870, 351);
			this->modes->Name = L"modes";
			this->modes->Size = System::Drawing::Size(271, 273);
			this->modes->TabIndex = 19;
			this->modes->TabStop = false;
			this->modes->Text = L"Режим работы";
			// 
			// mode9_numproz
			// 
			this->mode9_numproz->AutoSize = true;
			this->mode9_numproz->Location = System::Drawing::Point(7, 237);
			this->mode9_numproz->Name = L"mode9_numproz";
			this->mode9_numproz->Size = System::Drawing::Size(164, 20);
			this->mode9_numproz->TabIndex = 8;
			this->mode9_numproz->Text = L"Умножение на число";
			this->mode9_numproz->UseVisualStyleBackColor = true;
			// 
			// mode8_tranA
			// 
			this->mode8_tranA->AutoSize = true;
			this->mode8_tranA->Location = System::Drawing::Point(7, 211);
			this->mode8_tranA->Name = L"mode8_tranA";
			this->mode8_tranA->Size = System::Drawing::Size(175, 20);
			this->mode8_tranA->TabIndex = 7;
			this->mode8_tranA->Text = L"Транспонированная A";
			this->mode8_tranA->UseVisualStyleBackColor = true;
			// 
			// mode7_rankA
			// 
			this->mode7_rankA->AutoSize = true;
			this->mode7_rankA->Location = System::Drawing::Point(7, 184);
			this->mode7_rankA->Name = L"mode7_rankA";
			this->mode7_rankA->Size = System::Drawing::Size(71, 20);
			this->mode7_rankA->TabIndex = 6;
			this->mode7_rankA->Text = L"Ранг A";
			this->mode7_rankA->UseVisualStyleBackColor = true;
			// 
			// mode6_oprA
			// 
			this->mode6_oprA->AutoSize = true;
			this->mode6_oprA->Location = System::Drawing::Point(7, 157);
			this->mode6_oprA->Name = L"mode6_oprA";
			this->mode6_oprA->Size = System::Drawing::Size(136, 20);
			this->mode6_oprA->TabIndex = 5;
			this->mode6_oprA->Text = L"Определитель A";
			this->mode6_oprA->UseVisualStyleBackColor = true;
			// 
			// mode5_vectproz
			// 
			this->mode5_vectproz->AutoSize = true;
			this->mode5_vectproz->Location = System::Drawing::Point(7, 130);
			this->mode5_vectproz->Name = L"mode5_vectproz";
			this->mode5_vectproz->Size = System::Drawing::Size(198, 20);
			this->mode5_vectproz->TabIndex = 4;
			this->mode5_vectproz->Text = L"Векторное произведение";
			this->mode5_vectproz->UseVisualStyleBackColor = true;
			// 
			// mode4_skalproz
			// 
			this->mode4_skalproz->AutoSize = true;
			this->mode4_skalproz->Location = System::Drawing::Point(7, 103);
			this->mode4_skalproz->Name = L"mode4_skalproz";
			this->mode4_skalproz->Size = System::Drawing::Size(263, 20);
			this->mode4_skalproz->TabIndex = 3;
			this->mode4_skalproz->Text = L"Скалярное произведение векторов";
			this->mode4_skalproz->UseVisualStyleBackColor = true;
			// 
			// mode3_sub
			// 
			this->mode3_sub->AutoSize = true;
			this->mode3_sub->Location = System::Drawing::Point(7, 76);
			this->mode3_sub->Name = L"mode3_sub";
			this->mode3_sub->Size = System::Drawing::Size(101, 20);
			this->mode3_sub->TabIndex = 2;
			this->mode3_sub->Text = L"Вычитание";
			this->mode3_sub->UseVisualStyleBackColor = true;
			// 
			// mode2_sloz
			// 
			this->mode2_sloz->AutoSize = true;
			this->mode2_sloz->Location = System::Drawing::Point(7, 49);
			this->mode2_sloz->Name = L"mode2_sloz";
			this->mode2_sloz->Size = System::Drawing::Size(94, 20);
			this->mode2_sloz->TabIndex = 1;
			this->mode2_sloz->Text = L"Сложение";
			this->mode2_sloz->UseVisualStyleBackColor = true;
			// 
			// mode1_proiz
			// 
			this->mode1_proiz->AutoSize = true;
			this->mode1_proiz->Checked = true;
			this->mode1_proiz->Location = System::Drawing::Point(7, 22);
			this->mode1_proiz->Name = L"mode1_proiz";
			this->mode1_proiz->Size = System::Drawing::Size(177, 20);
			this->mode1_proiz->TabIndex = 0;
			this->mode1_proiz->TabStop = true;
			this->mode1_proiz->Text = L"Произведение матриц";
			this->mode1_proiz->UseVisualStyleBackColor = true;
			// 
			// solve
			// 
			this->solve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->solve->Location = System::Drawing::Point(51, 488);
			this->solve->Name = L"solve";
			this->solve->Size = System::Drawing::Size(166, 94);
			this->solve->TabIndex = 20;
			this->solve->Text = L"Вычислить";
			this->solve->UseVisualStyleBackColor = true;
			this->solve->Click += gcnew System::EventHandler(this, &MyForm::solve_Click);
			// 
			// output_scal
			// 
			this->output_scal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->output_scal->Location = System::Drawing::Point(311, 546);
			this->output_scal->Name = L"output_scal";
			this->output_scal->ReadOnly = true;
			this->output_scal->Size = System::Drawing::Size(224, 36);
			this->output_scal->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(313, 508);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(222, 25);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Результат скалярный:";
			// 
			// edbtn
			// 
			this->edbtn->Location = System::Drawing::Point(51, 411);
			this->edbtn->Name = L"edbtn";
			this->edbtn->Size = System::Drawing::Size(113, 53);
			this->edbtn->TabIndex = 23;
			this->edbtn->Text = L"Единичная";
			this->edbtn->UseVisualStyleBackColor = true;
			this->edbtn->Click += gcnew System::EventHandler(this, &MyForm::edbtn_Click);
			// 
			// edbtnB
			// 
			this->edbtnB->Location = System::Drawing::Point(465, 411);
			this->edbtnB->Name = L"edbtnB";
			this->edbtnB->Size = System::Drawing::Size(113, 53);
			this->edbtnB->TabIndex = 24;
			this->edbtnB->Text = L"Единичная";
			this->edbtnB->UseVisualStyleBackColor = true;
			this->edbtnB->Click += gcnew System::EventHandler(this, &MyForm::edbtnB_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1239, 636);
			this->Controls->Add(this->edbtnB);
			this->Controls->Add(this->edbtn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->output_scal);
			this->Controls->Add(this->solve);
			this->Controls->Add(this->modes);
			this->Controls->Add(this->set_size_B_columns);
			this->Controls->Add(this->set_size_B_lines);
			this->Controls->Add(this->set_size_B);
			this->Controls->Add(this->set_size_A_columns);
			this->Controls->Add(this->set_size_A_lines);
			this->Controls->Add(this->set_size_A);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->input_B);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->output_grid);
			this->Controls->Add(this->input_A);
			this->Name = L"MyForm";
			this->Text = L"Матричный калькулятор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->output_grid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_A))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->modes->ResumeLayout(false);
			this->modes->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void set_size_A_Click(System::Object^ sender, System::EventArgs^ e) {
		this->errorProvider1->Clear();
		int n, m;
		bool resn = Int32::TryParse(this->set_size_A_lines->Text, n);
		bool resm = Int32::TryParse(this->set_size_A_columns->Text, m);
		if (!(resn && resm)) {
			this->errorProvider1->SetError(this->input_A, "Неправильный формат ввода размера таблицы");
			return;
		}
		else if (n <= 0 || m <= 0) {
			this->errorProvider1->SetError(this->input_A, "Нельзя задать размер с 0");
			return;
		}


		int line_count = this->input_A->RowCount;

		for (int i = 0; i < line_count; i++) {
			this->input_A->Rows->Remove(this->input_A->Rows[0]);
		}
		int column_count = this->input_A->ColumnCount;
		for (int i = 0; i < column_count; i++) {
			this->input_A->Columns->Remove(this->input_A->Columns[0]);
		}


		for (int i = 0; i < m; i++) {
			this->input_A->Columns->Add("", "");
		}

		this->input_A->Rows->Add(n);



	}
private: System::Void set_size_B_Click(System::Object^ sender, System::EventArgs^ e) {
	this->errorProvider1->Clear();
	int n, m;
	bool resn = Int32::TryParse(this->set_size_B_lines->Text, n);
	bool resm = Int32::TryParse(this->set_size_B_columns->Text, m);
	if (!(resn && resm)) {
		this->errorProvider1->SetError(this->input_B, "Неправильный формат ввода размера таблицы");
		return;
	}
	else if (n <= 0 || m <= 0) {
		this->errorProvider1->SetError(this->input_B, "Нельзя задать размер с 0");
		return;
	}


	int line_count = this->input_B->RowCount;

	for (int i = 0; i < line_count; i++) {
		this->input_B->Rows->Remove(this->input_B->Rows[0]);
	}
	int column_count = this->input_B->ColumnCount;
	for (int i = 0; i < column_count; i++) {
		this->input_B->Columns->Remove(this->input_B->Columns[0]);
	}


	for (int i = 0; i < m; i++) {
		this->input_B->Columns->Add("", "");
	}

	this->input_B->Rows->Add(n);


}
	   System::Void clearoutput() {
		   int line_count = this->output_grid->RowCount;

		   for (int i = 0; i < line_count; i++) {
			   this->output_grid->Rows->Remove(this->output_grid->Rows[0]);

		   }
		   int column_count = this->output_grid->ColumnCount;
		   for (int i = 0; i < column_count; i++) {
			   this->output_grid->Columns->Remove(this->output_grid->Columns[0]);
		   }
	   }
int determinant(int** matrix, int size)
{
	int det = 0;
	int sign = 1;

	// Base Case
	if (size == 1) {
		det = matrix[0][0];
	}
	else if (size == 2) {
		det = (matrix[0][0] * matrix[1][1])
			- (matrix[0][1] * matrix[1][0]);
	}

	// Perform the Laplace Expansion
	else {
		for (int i = 0; i < size; i++) {

			// Stores the cofactor matrix
			int** cofactor = new int* [size - 1];
			for (int j = 0; j < size - 1; j++) {
				cofactor[j] = new int[size - 1];
			}
			int sub_i = 0, sub_j = 0;
			for (int j = 1; j < size; j++) {
				for (int k = 0; k < size; k++) {
					if (k == i) {
						continue;
					}
					cofactor[sub_i][sub_j] = matrix[j][k];
					sub_j++;
				}
				sub_i++;
				sub_j = 0;
			}

			// Update the determinant value
			det += sign * matrix[0][i]
				* determinant(cofactor, size - 1);
			sign = -sign;
			for (int j = 0; j < size - 1; j++) {
				delete[] cofactor[j];
			}
			delete[] cofactor;
		}
	}

	// Return the final determinant value
	return det;
}
void swap(int **mat, int row1, int row2, int col)
{
	for (int i = 0; i < col; i++)
	{
		int temp = mat[row1][i];
		mat[row1][i] = mat[row2][i];
		mat[row2][i] = temp;
	}
}



/* function for finding rank of matrix */
int rankOfMatrix(int **mat, int row1, int row2)
{
	int rank = row2;

	for (int row = 0; row < rank; row++)
	{
		// Before we visit current row 'row', we make
		// sure that mat[row][0],....mat[row][row-1]
		// are 0.

		// Diagonal element is not zero
		if (mat[row][row])
		{
			for (int col = 0; col < row1; col++)
			{
				if (col != row)
				{
					// This makes all entries of current
					// column as 0 except entry 'mat[row][row]'
					double mult = (double)mat[col][row] /
						mat[row][row];
					for (int i = 0; i < rank; i++)
						mat[col][i] -= mult * mat[row][i];
				}
			}
		}

		// Diagonal element is already zero. Two cases
		// arise:
		// 1) If there is a row below it with non-zero
		//    entry, then swap this row with that row
		//    and process that row
		// 2) If all elements in current column below
		//    mat[r][row] are 0, then remove this column
		//    by swapping it with last column and
		//    reducing number of columns by 1.
		else
		{
			bool reduce = true;

			/* Find the non-zero element in current
				column  */
			for (int i = row + 1; i < row1; i++)
			{
				// Swap the row with non-zero element
				// with this row.
				if (mat[i][row])
				{
					swap(mat, row, i, rank);
					reduce = false;
					break;
				}
			}

			// If we did not find any row with non-zero
			// element in current column, then all
			// values in this column are 0.
			if (reduce)
			{
				// Reduce number of columns
				rank--;

				// Copy the last column here
				for (int i = 0; i < row1; i++)
					mat[i][row] = mat[i][rank];
			}

			// Process this row again
			row--;
		}

		// Uncomment these lines to see intermediate results
		// display(mat, R, C);
		// printf("\n");
	}
	return rank;
}
private: System::Void solve_Click(System::Object^ sender, System::EventArgs^ e) {
	this->errorProvider1->Clear();
	

	clearoutput();
	try {
		int checkrule;
		bool checkform;
		for (int i = 0; i < this->input_A->RowCount; i++) {
			for (int j = 0; j < this->input_A->RowCount; j++) {
				checkform = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[i]->Cells[j]->Value), checkrule);
				if (!checkform) throw gcnew FormatException("Неправильный формат входных данных в ячейках");
			}
		}
		for (int i = 0; i < this->input_B->RowCount; i++) {
			for (int j = 0; j < this->input_B->RowCount; j++) {
				checkform = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[i]->Cells[j]->Value), checkrule);
				if (!checkform) throw gcnew FormatException("Неправильный формат входных данных в ячейках");
			}
		}
		if (this->mode1_proiz->Checked) {
			if (this->input_A->ColumnCount != this->input_B->RowCount) throw gcnew ArgumentException("Количество столбцов матрицы A не совпадает с количеством строк матрицы B");
			int n = this->input_A->RowCount;
			int m = this->input_B->ColumnCount;
			for (int j = 0; j < m; j++) {
				this->output_grid->Columns->Add("", "");
			}
			this->output_grid->Rows->Add(n);
			int s = 0;
			int a, b;
			bool check;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					s = 0;
					for (int k = 0; k < this->input_A->ColumnCount; k++) {
						check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[j]->Cells[k]->Value), a);
						if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
						check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[k]->Cells[i]->Value), b);
						if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
						s += a * b;
					}
					this->output_grid->Rows[j]->Cells[i]->Value = s;
				}
			}
		}
		else if (this->mode2_sloz->Checked) {
			int n1 = this->input_A->RowCount;
			int	m1 = this->input_A->ColumnCount;
			int n2 = this->input_B->RowCount;
			int m2 = this->input_B->ColumnCount;
			if (n1 != n2 || m1 != m2) throw gcnew ArgumentException("Размеры матриц не совпадают");
			for (int j = 0; j < m1; j++) {
				this->output_grid->Columns->Add("", "");
			}
			this->output_grid->Rows->Add(n1);

			int a, b;
			bool check;
			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m1;j++) {
					check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[i]->Cells[j]->Value), a);
					if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
					check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[i]->Cells[j]->Value), b);
					if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
					this->output_grid->Rows[i]->Cells[j]->Value = a + b;
				}
			}
		}
		else if (this->mode3_sub->Checked) {
			int n1 = this->input_A->RowCount;
			int	m1 = this->input_A->ColumnCount;
			int n2 = this->input_B->RowCount;
			int m2 = this->input_B->ColumnCount;
			if (n1 != n2 || m1 != m2) throw gcnew ArgumentException("Размеры матриц не совпадают");
			for (int j = 0; j < m1; j++) {
				this->output_grid->Columns->Add("", "");
			}
			this->output_grid->Rows->Add(n1);

			int a, b;
			bool check;
			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m1;j++) {
					check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[i]->Cells[j]->Value), a);
					if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
					check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[i]->Cells[j]->Value), b);
					if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
					this->output_grid->Rows[i]->Cells[j]->Value = a - b;
				}
			}
		}
		else if (this->mode4_skalproz->Checked) {
			int n1 = this->input_A->RowCount;
			int	m1 = this->input_A->ColumnCount;
			int n2 = this->input_B->RowCount;
			int m2 = this->input_B->ColumnCount;
			if (n1 != 1 && n2 != 1) throw gcnew ArgumentException("Входные данные не являются векторами");
			if (m1 != m2) throw gcnew ArgumentException("Размеры векторов не совпадают");
			int a, b, s = 0;
			bool check;
			for (int j = 0; j < m1; j++) {
				check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[0]->Cells[j]->Value), a);
				if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
				check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[0]->Cells[j]->Value), b);
				if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
				s += a * b;
			}

			this->output_scal->Text = System::Convert::ToString(s);
		}
		else if (this->mode5_vectproz->Checked) {
			int n1 = this->input_A->RowCount;
			int	m1 = this->input_A->ColumnCount;
			int n2 = this->input_B->RowCount;
			int m2 = this->input_B->ColumnCount;
			if (n1 != 1 && n2 != 1) throw gcnew ArgumentException("Входные данные не являются векторами");
			if (m1 != 3 || m2 != 3) throw gcnew ArgumentException("Пока векторное произведение доступно для векторов размера 3");
			int a, b, s = 0;
			bool check;
			for (int j = 0; j < 3; j++) {
				this->output_grid->Columns->Add("", "");
			}
			this->output_grid->Rows->Add(1);
			check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[0]->Cells[1]->Value), a);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[0]->Cells[2]->Value), b);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			s = a * b;

			check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[0]->Cells[2]->Value), a);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[0]->Cells[1]->Value), b);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			s -= a * b;
			this->output_grid->Rows[0]->Cells[0]->Value = System::Convert::ToString(s);

			check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[0]->Cells[0]->Value), a);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[0]->Cells[2]->Value), b);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			s = -(a * b);

			check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[0]->Cells[2]->Value), a);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[0]->Cells[0]->Value), b);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			s += a * b;
			this->output_grid->Rows[0]->Cells[1]->Value = System::Convert::ToString(s);

			check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[0]->Cells[0]->Value), a);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[0]->Cells[1]->Value), b);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			s = (a * b);

			check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[0]->Cells[1]->Value), a);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[0]->Cells[0]->Value), b);
			if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
			s -= a * b;
			this->output_grid->Rows[0]->Cells[2]->Value = System::Convert::ToString(s);

		}
		else if (this->mode6_oprA->Checked) {
			int n1 = this->input_A->RowCount;
			int	m1 = this->input_A->ColumnCount;

			
			if (n1 != m1) throw gcnew ArgumentException("Матрица не квадратная");
			int a;
			bool check;

			int** matrix = new int* [n1];
			for (int i = 0; i < n1; i++) {
				matrix[i] = new int[n1];
			}
			for (int i = 0; i < n1;i++) {
				for (int j = 0; j < m1; j++) {
					check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[i]->Cells[j]->Value), a);
					if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
					matrix[i][j] = a;
				}
			}
			double det = determinant(matrix, n1);
			this->output_scal->Text = System::Convert::ToString(det);

		}
		else if (this->mode7_rankA->Checked) {
			int n1 = this->input_A->RowCount;
			int	m1 = this->input_A->ColumnCount;
			


			int** matrix;
			int a;	
			bool check;
			if (n1 < m1) {
				matrix = new int* [m1];
				n1 = m1;
			} else matrix = new int* [n1];
			if (n1 > m1) {
				for (int i = 0; i < n1; i++) {
						matrix[i] = new int[n1];
					}
				m1 = n1;
			}
			else {
				for (int i = 0; i < n1; i++) {
					matrix[i] = new int[m1];
				}
			}
			
			for (int i = 0; i < n1;i++) {
				for (int j = 0; j < m1; j++) {
					if (i >= this->input_A->RowCount) matrix[i][j] = 0;
					else if (j >= this->input_A->ColumnCount) matrix[i][j] = 0;
					else {
						check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[i]->Cells[j]->Value), a);
						if (!check) throw gcnew FormatException("Неправильный формат значений ячеек матриц");
					
						matrix[i][j] = a;
					}
					
				}
			}
			int rank = rankOfMatrix(matrix, n1,m1);
			this->output_scal->Text = System::Convert::ToString(rank);
		}
		else if (this->mode8_tranA->Checked) {
			int n1 = this->input_A->RowCount;
			int	m1 = this->input_A->ColumnCount;

			for (int j = 0; j < n1; j++) {
				this->output_grid->Columns->Add("", "");
			}
			this->output_grid->Rows->Add(m1);

			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m1; j++) {
					this->output_grid->Rows[j]->Cells[i]->Value = this->input_A->Rows[i]->Cells[j]->Value;
				}
			}

			int a;
			bool check;
		}
		else if (this->mode9_numproz->Checked) {
			int n1 = this->input_B->RowCount;
			int n2 = this->input_B->ColumnCount;

			
			if (n1 != 1 || n2 != 1) throw gcnew ArgumentException("Во второй таблице должно быть одно число");
			
			for (int j = 0; j < this->input_A->ColumnCount; j++) {
				this->output_grid->Columns->Add("", "");
			}
			this->output_grid->Rows->Add(this->input_A->RowCount);
			int a, b;
			bool check = Int32::TryParse(System::Convert::ToString(this->input_B->Rows[0]->Cells[0]->Value), b);
			if (!check) throw gcnew FormatException("Неправильный формат ввода");
			for (int i = 0; i < this->input_A->RowCount; i++) {
				for (int j = 0; j < this->input_A->ColumnCount; j++) {

					check = Int32::TryParse(System::Convert::ToString(this->input_A->Rows[i]->Cells[j]->Value), a);

					this->output_grid->Rows[i]->Cells[j]->Value = a * b;
				}
			}
		}
	}
	catch (Exception^ e) {
		this->errorProvider1->SetError(this->solve, e->Message);
	}
	
}
private: System::Void edbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int line_count = this->input_A->RowCount;
	int column_count = this->input_A->ColumnCount;
	try {
		if (line_count != column_count) throw gcnew Exception("Матрица не квадратная");
		for (int i = 0; i < line_count; i++) {
			for (int j = 0; j < line_count; j++) {
				if (i == j) this->input_A->Rows[i]->Cells[j]->Value = 1;
				else this->input_A->Rows[i]->Cells[j]->Value = 0;
			}
		}
	}
	catch (Exception^ e) {
		this->errorProvider1->SetError(this->solve, e->Message);
	}
	}
private: System::Void edbtnB_Click(System::Object^ sender, System::EventArgs^ e) {
	int line_count = this->input_B->RowCount;
	int column_count = this->input_B->ColumnCount;
	try {
		if (line_count != column_count) throw gcnew Exception("Матрица не квадратная");
		for (int i = 0; i < line_count; i++) {
			for (int j = 0; j < line_count; j++) {
				if (i == j) this->input_B->Rows[i]->Cells[j]->Value = 1;
				else this->input_B->Rows[i]->Cells[j]->Value = 0;
			}
		}
	}
	catch (Exception^ e) {
		this->errorProvider1->SetError(this->solve, e->Message);
	}
}
};
}
