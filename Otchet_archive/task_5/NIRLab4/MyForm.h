#pragma once

namespace NIRLab4 {

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
	private: System::Windows::Forms::DataGridView^ input_grid;
	private: System::Windows::Forms::DataGridView^ output_grid;
	private: System::Windows::Forms::DataGridView^ X_input;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Add_line;
	private: System::Windows::Forms::Button^ add_column;
	private: System::Windows::Forms::Button^ remove_line;
	private: System::Windows::Forms::Button^ remove_column;
	private: System::Windows::Forms::Button^ set_size;
	private: System::Windows::Forms::TextBox^ set_size_lines;
	private: System::Windows::Forms::TextBox^ set_size_columns;
	private: System::Windows::Forms::Button^ solve_btn;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::ComponentModel::IContainer^ components;
	protected:


	protected:

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
			this->input_grid = (gcnew System::Windows::Forms::DataGridView());
			this->output_grid = (gcnew System::Windows::Forms::DataGridView());
			this->X_input = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Add_line = (gcnew System::Windows::Forms::Button());
			this->add_column = (gcnew System::Windows::Forms::Button());
			this->remove_line = (gcnew System::Windows::Forms::Button());
			this->remove_column = (gcnew System::Windows::Forms::Button());
			this->set_size = (gcnew System::Windows::Forms::Button());
			this->set_size_lines = (gcnew System::Windows::Forms::TextBox());
			this->set_size_columns = (gcnew System::Windows::Forms::TextBox());
			this->solve_btn = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_grid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->output_grid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->X_input))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// input_grid
			// 
			this->input_grid->AllowUserToAddRows = false;
			this->input_grid->AllowUserToDeleteRows = false;
			this->input_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->input_grid->Location = System::Drawing::Point(232, 35);
			this->input_grid->Name = L"input_grid";
			this->input_grid->RowHeadersWidth = 51;
			this->input_grid->RowTemplate->Height = 24;
			this->input_grid->Size = System::Drawing::Size(363, 302);
			this->input_grid->TabIndex = 0;
			// 
			// output_grid
			// 
			this->output_grid->AllowUserToAddRows = false;
			this->output_grid->AllowUserToDeleteRows = false;
			this->output_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->output_grid->Location = System::Drawing::Point(634, 35);
			this->output_grid->Name = L"output_grid";
			this->output_grid->ReadOnly = true;
			this->output_grid->RowHeadersWidth = 51;
			this->output_grid->RowTemplate->Height = 24;
			this->output_grid->Size = System::Drawing::Size(363, 302);
			this->output_grid->TabIndex = 1;
			// 
			// X_input
			// 
			this->X_input->AllowUserToAddRows = false;
			this->X_input->AllowUserToDeleteRows = false;
			this->X_input->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->X_input->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->X });
			this->X_input->Location = System::Drawing::Point(12, 35);
			this->X_input->Name = L"X_input";
			this->X_input->RowHeadersWidth = 51;
			this->X_input->RowTemplate->Height = 24;
			this->X_input->Size = System::Drawing::Size(181, 302);
			this->X_input->TabIndex = 2;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(243, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Таблица ввода";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(641, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Таблица вывода";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Столбец X";
			// 
			// Add_line
			// 
			this->Add_line->Location = System::Drawing::Point(16, 343);
			this->Add_line->Name = L"Add_line";
			this->Add_line->Size = System::Drawing::Size(113, 53);
			this->Add_line->TabIndex = 6;
			this->Add_line->Text = L"Добавить строку";
			this->Add_line->UseVisualStyleBackColor = true;
			this->Add_line->Click += gcnew System::EventHandler(this, &MyForm::Add_line_Click);
			// 
			// add_column
			// 
			this->add_column->Location = System::Drawing::Point(135, 343);
			this->add_column->Name = L"add_column";
			this->add_column->Size = System::Drawing::Size(113, 53);
			this->add_column->TabIndex = 7;
			this->add_column->Text = L"Добавить столбец";
			this->add_column->UseVisualStyleBackColor = true;
			this->add_column->Click += gcnew System::EventHandler(this, &MyForm::add_column_Click);
			// 
			// remove_line
			// 
			this->remove_line->Location = System::Drawing::Point(254, 343);
			this->remove_line->Name = L"remove_line";
			this->remove_line->Size = System::Drawing::Size(113, 53);
			this->remove_line->TabIndex = 8;
			this->remove_line->Text = L"Удалить строку";
			this->remove_line->UseVisualStyleBackColor = true;
			this->remove_line->Click += gcnew System::EventHandler(this, &MyForm::remove_line_Click);
			// 
			// remove_column
			// 
			this->remove_column->Location = System::Drawing::Point(373, 343);
			this->remove_column->Name = L"remove_column";
			this->remove_column->Size = System::Drawing::Size(113, 53);
			this->remove_column->TabIndex = 9;
			this->remove_column->Text = L"Удалить столбец";
			this->remove_column->UseVisualStyleBackColor = true;
			this->remove_column->Click += gcnew System::EventHandler(this, &MyForm::remove_column_Click);
			// 
			// set_size
			// 
			this->set_size->Location = System::Drawing::Point(492, 343);
			this->set_size->Name = L"set_size";
			this->set_size->Size = System::Drawing::Size(113, 53);
			this->set_size->TabIndex = 10;
			this->set_size->Text = L"Задать размер";
			this->set_size->UseVisualStyleBackColor = true;
			this->set_size->Click += gcnew System::EventHandler(this, &MyForm::set_size_Click);
			// 
			// set_size_lines
			// 
			this->set_size_lines->Location = System::Drawing::Point(611, 343);
			this->set_size_lines->Name = L"set_size_lines";
			this->set_size_lines->Size = System::Drawing::Size(100, 22);
			this->set_size_lines->TabIndex = 11;
			// 
			// set_size_columns
			// 
			this->set_size_columns->Location = System::Drawing::Point(611, 371);
			this->set_size_columns->Name = L"set_size_columns";
			this->set_size_columns->Size = System::Drawing::Size(100, 22);
			this->set_size_columns->TabIndex = 12;
			// 
			// solve_btn
			// 
			this->solve_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->solve_btn->Location = System::Drawing::Point(798, 355);
			this->solve_btn->Name = L"solve_btn";
			this->solve_btn->Size = System::Drawing::Size(171, 83);
			this->solve_btn->TabIndex = 13;
			this->solve_btn->Text = L"Вычислить";
			this->solve_btn->UseVisualStyleBackColor = true;
			this->solve_btn->Click += gcnew System::EventHandler(this, &MyForm::solve_btn_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 450);
			this->Controls->Add(this->solve_btn);
			this->Controls->Add(this->set_size_columns);
			this->Controls->Add(this->set_size_lines);
			this->Controls->Add(this->set_size);
			this->Controls->Add(this->remove_column);
			this->Controls->Add(this->remove_line);
			this->Controls->Add(this->add_column);
			this->Controls->Add(this->Add_line);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->X_input);
			this->Controls->Add(this->output_grid);
			this->Controls->Add(this->input_grid);
			this->Name = L"MyForm";
			this->Text = L"Замена нечетных столбцов на столбец Х";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_grid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->output_grid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->X_input))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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
System::Void solve() {
	this->errorProvider1->Clear();
	clearoutput();
	int m = this->input_grid->ColumnCount;
	int n = this->input_grid->RowCount;

	if (n == 0 || m == 0) {
		this->errorProvider1->SetError(solve_btn, "В таблице должна быть хотя бы одна ячейка");
		return;
	}

	for (int j = 0; j < m; j++) {
		this->output_grid->Columns->Add("", "");
	}

	
	this->output_grid->Rows->Add(n);

	int temp;
	bool res;
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < m;j++) {
			res = Int32::TryParse(System::Convert::ToString(this->X_input->Rows[i]->Cells[0]->Value), temp);
			if (!res) {
				this->errorProvider1->SetError(X_input, "Неправильный формат ввода");
				clearoutput();
				return;
			}
			res = Int32::TryParse(System::Convert::ToString(this->input_grid->Rows[i]->Cells[j]->Value), temp);
			if (!res) {
				this->errorProvider1->SetError(input_grid, "Неправильный формат ввода");
				clearoutput();
				return;
			}
			if (j % 2 == 1) {
				this->output_grid->Rows[i]->Cells[j]->Value = this->X_input->Rows[i]->Cells[0]->Value;
			}
			else {
				this->output_grid->Rows[i]->Cells[j]->Value = this->input_grid->Rows[i]->Cells[j]->Value;
			}
		}
	}
	
}
private: System::Void Add_line_Click(System::Object^ sender, System::EventArgs^ e) {
	this->errorProvider1->Clear();
	if (this->input_grid->ColumnCount == 0) {
		this->errorProvider1->SetError(Add_line, "Вставьте один столбец сначала");
		return;
	}
	this->input_grid->Rows->Add(1);
	this->X_input->Rows->Add(1);
}
private: System::Void add_column_Click(System::Object^ sender, System::EventArgs^ e) {
	this->errorProvider1->Clear();
	this->input_grid->Columns->Add("","");
}
private: System::Void remove_line_Click(System::Object^ sender, System::EventArgs^ e) {
	this->errorProvider1->Clear();
	if (this->input_grid->RowCount == 0) {
		this->errorProvider1->SetError(remove_line, "Нельзя убрать строку, которой нет");
		return;
	}
	int i = this->input_grid->CurrentRow->Index;
	this->input_grid->Rows->Remove(this->input_grid->Rows[i]);
	this->X_input->Rows->Remove(this->X_input->Rows[i]);
}
private: System::Void remove_column_Click(System::Object^ sender, System::EventArgs^ e) {
	this->errorProvider1->Clear();
	if (this->input_grid->ColumnCount <= 1 || this->input_grid->RowCount == 0) {
		this->errorProvider1->SetError(remove_column, "Нельзя убрать столбец, которого нет");
		return;
	}
	int i = this->input_grid->CurrentCell->ColumnIndex;
	this->input_grid->Columns->Remove(this->input_grid->Columns[i]);
}
private: System::Void set_size_Click(System::Object^ sender, System::EventArgs^ e) {
	this->errorProvider1->Clear();
	int n, m;
	bool resn = Int32::TryParse(this->set_size_lines->Text, n);
	bool resm = Int32::TryParse(this->set_size_columns->Text, m);
	if (!(resn && resm)) {
		this->errorProvider1->SetError(this->input_grid, "Неправильный формат ввода размера таблицы");
		return;
	}
	else if (n == 0 || m == 0) {
		this->errorProvider1->SetError(this->input_grid, "Нельзя задать размер с 0");
		return;
	}


	int line_count = this->input_grid->RowCount;
	
	for (int i = 0; i < line_count; i++) {
		this->input_grid->Rows->Remove(this->input_grid->Rows[0]);
		this->X_input->Rows->Remove(this->X_input->Rows[0]);
	}
	int column_count = this->input_grid->ColumnCount;
	for (int i = 0; i < column_count; i++) {
		this->input_grid->Columns->Remove(this->input_grid->Columns[0]);
	}
	
	
	for (int i = 0; i < m; i++) {
		this->input_grid->Columns->Add("", "");
	}
	
	this->input_grid->Rows->Add(n);
	this->X_input->Rows->Add(n);
	
	
}

private: System::Void solve_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->errorProvider1->Clear();
	solve();
}
};
}
