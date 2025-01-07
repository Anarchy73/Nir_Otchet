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
	private: System::Windows::Forms::DataGridView^ mas_grid;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ mas;
	private: System::Windows::Forms::Label^ x_lbl;
	private: System::Windows::Forms::TextBox^ x_input;
	private: System::Windows::Forms::Button^ mas_add;
	private: System::Windows::Forms::Button^ mas_pop;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ int_a;
	private: System::Windows::Forms::TextBox^ int_b;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ krat_box;
	private: System::Windows::Forms::Button^ krat_btn;


	private: System::Windows::Forms::Button^ min_btn;
	private: System::Windows::Forms::TextBox^ chet_box;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::ComponentModel::IContainer^ components;



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
			this->mas_grid = (gcnew System::Windows::Forms::DataGridView());
			this->mas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_lbl = (gcnew System::Windows::Forms::Label());
			this->x_input = (gcnew System::Windows::Forms::TextBox());
			this->mas_add = (gcnew System::Windows::Forms::Button());
			this->mas_pop = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->int_a = (gcnew System::Windows::Forms::TextBox());
			this->int_b = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->krat_box = (gcnew System::Windows::Forms::TextBox());
			this->krat_btn = (gcnew System::Windows::Forms::Button());
			this->min_btn = (gcnew System::Windows::Forms::Button());
			this->chet_box = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mas_grid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// mas_grid
			// 
			this->mas_grid->AllowUserToAddRows = false;
			this->mas_grid->AllowUserToDeleteRows = false;
			this->mas_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->mas_grid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->mas });
			this->mas_grid->Location = System::Drawing::Point(35, 67);
			this->mas_grid->Name = L"mas_grid";
			this->mas_grid->RowHeadersWidth = 51;
			this->mas_grid->RowTemplate->Height = 24;
			this->mas_grid->Size = System::Drawing::Size(178, 254);
			this->mas_grid->TabIndex = 0;
			// 
			// mas
			// 
			this->mas->HeaderText = L"Массив";
			this->mas->MinimumWidth = 6;
			this->mas->Name = L"mas";
			this->mas->ReadOnly = true;
			this->mas->Width = 125;
			// 
			// x_lbl
			// 
			this->x_lbl->AutoSize = true;
			this->x_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->x_lbl->Location = System::Drawing::Point(365, 67);
			this->x_lbl->Name = L"x_lbl";
			this->x_lbl->Size = System::Drawing::Size(48, 25);
			this->x_lbl->TabIndex = 1;
			this->x_lbl->Text = L"X = ";
			// 
			// x_input
			// 
			this->x_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->x_input->Location = System::Drawing::Point(420, 67);
			this->x_input->Name = L"x_input";
			this->x_input->Size = System::Drawing::Size(100, 30);
			this->x_input->TabIndex = 2;
			// 
			// mas_add
			// 
			this->mas_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->mas_add->Location = System::Drawing::Point(234, 59);
			this->mas_add->Name = L"mas_add";
			this->mas_add->Size = System::Drawing::Size(125, 38);
			this->mas_add->TabIndex = 3;
			this->mas_add->Text = L"Добавить";
			this->mas_add->UseVisualStyleBackColor = true;
			this->mas_add->Click += gcnew System::EventHandler(this, &MyForm::mas_add_Click);
			// 
			// mas_pop
			// 
			this->mas_pop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->mas_pop->Location = System::Drawing::Point(234, 103);
			this->mas_pop->Name = L"mas_pop";
			this->mas_pop->Size = System::Drawing::Size(125, 38);
			this->mas_pop->TabIndex = 4;
			this->mas_pop->Text = L"Удалить";
			this->mas_pop->UseVisualStyleBackColor = true;
			this->mas_pop->Click += gcnew System::EventHandler(this, &MyForm::mas_pop_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(365, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Интервал (";
			// 
			// int_a
			// 
			this->int_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->int_a->Location = System::Drawing::Point(486, 111);
			this->int_a->Name = L"int_a";
			this->int_a->Size = System::Drawing::Size(34, 30);
			this->int_a->TabIndex = 6;
			// 
			// int_b
			// 
			this->int_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->int_b->Location = System::Drawing::Point(526, 111);
			this->int_b->Name = L"int_b";
			this->int_b->Size = System::Drawing::Size(36, 30);
			this->int_b->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(568, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 25);
			this->label2->TabIndex = 8;
			this->label2->Text = L")";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(245, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Кратные х:";
			// 
			// krat_box
			// 
			this->krat_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->krat_box->Location = System::Drawing::Point(380, 230);
			this->krat_box->Name = L"krat_box";
			this->krat_box->ReadOnly = true;
			this->krat_box->Size = System::Drawing::Size(100, 30);
			this->krat_box->TabIndex = 10;
			// 
			// krat_btn
			// 
			this->krat_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->krat_btn->Location = System::Drawing::Point(234, 174);
			this->krat_btn->Name = L"krat_btn";
			this->krat_btn->Size = System::Drawing::Size(125, 38);
			this->krat_btn->TabIndex = 11;
			this->krat_btn->Text = L"Кратные X";
			this->krat_btn->UseVisualStyleBackColor = true;
			this->krat_btn->Click += gcnew System::EventHandler(this, &MyForm::krat_btn_Click);
			// 
			// min_btn
			// 
			this->min_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->min_btn->Location = System::Drawing::Point(234, 283);
			this->min_btn->Name = L"min_btn";
			this->min_btn->Size = System::Drawing::Size(125, 38);
			this->min_btn->TabIndex = 14;
			this->min_btn->Text = L"Минимум";
			this->min_btn->UseVisualStyleBackColor = true;
			this->min_btn->Click += gcnew System::EventHandler(this, &MyForm::min_btn_Click);
			// 
			// chet_box
			// 
			this->chet_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->chet_box->Location = System::Drawing::Point(380, 336);
			this->chet_box->Name = L"chet_box";
			this->chet_box->ReadOnly = true;
			this->chet_box->Size = System::Drawing::Size(100, 30);
			this->chet_box->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(245, 339);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Минимум :";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(621, 424);
			this->Controls->Add(this->min_btn);
			this->Controls->Add(this->chet_box);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->krat_btn);
			this->Controls->Add(this->krat_box);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->int_b);
			this->Controls->Add(this->int_a);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mas_pop);
			this->Controls->Add(this->mas_add);
			this->Controls->Add(this->x_input);
			this->Controls->Add(this->x_lbl);
			this->Controls->Add(this->mas_grid);
			this->Name = L"MyForm";
			this->Text = L"Обработка табличных данных. Часть 1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mas_grid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void mas_pop_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->mas_grid->RowCount == 0) {
			this->errorProvider1->SetError(this->mas_pop, "Нельзя удалить строки в пустой таблице");
		}
		if (!this->mas_grid->CurrentRow->IsNewRow) {
			int i = this->mas_grid->CurrentRow->Index;
			this->mas_grid->Rows->Remove(this->mas_grid->Rows[i]);
		}

	}
private: System::Void mas_add_Click(System::Object^ sender, System::EventArgs^ e) {
	long long x;
	bool result = Int64::TryParse(this->x_input->Text, x);
	if (!result) {
		this->errorProvider1->SetError(this->mas_add, "Ошибка формата ввода");
		return;
	}
	this->mas_grid->Rows->Add(1);
	this->mas_grid->Rows[this->mas_grid->RowCount - 1]->SetValues(x);

}
private: System::Void krat_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->krat_box->Text = "";
	long long x,y,a,b;
	bool result = Int64::TryParse(this->x_input->Text, x);
	bool resulta = Int64::TryParse(this->int_a->Text, a);
	bool resultb = Int64::TryParse(this->int_b->Text, b);
	if (!result) {
		this->errorProvider1->SetError(this->x_input, "Неправильный формат числа X");
		return;
	}
	if (!resulta || !resultb) {
		this->errorProvider1->SetError(this->int_a, "Неправильный формат границ интервала");
		return;
	}
	bool found_krat = false;
	for (int i = a; i < this->mas_grid->RowCount && i < b; i++) {
		result = Int64::TryParse(this->mas_grid->Rows[i]->Cells[0]->Value->ToString(), y);
		if (y % x == 0) {
			found_krat = true;
			this->krat_box->Text += System::Convert::ToString(i+1) + ", ";
		}
	}
	if (!found_krat) {
		this->krat_box->Text = "Таких элементов нет";
	}
}

private: System::Void min_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	long long y, maxel = 1e9;
	bool found_chet = false;
	for (int i = 0; i < this->mas_grid->RowCount; i++) {
		bool result = Int64::TryParse(this->mas_grid->Rows[i]->Cells[0]->Value->ToString(), y);
		if (y % 2 == 0) {
			found_chet = true;
			maxel = (y < maxel) ? y : maxel;
		}
	}
	if (found_chet)	this->chet_box->Text = System::Convert::ToString(maxel);
	else {
		this->chet_box->Text = "Четных чисел нет";
	}
}
};
}
