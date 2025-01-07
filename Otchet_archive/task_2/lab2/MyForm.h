#pragma once
#include <cmath>

namespace lab2 {

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
	private: System::Windows::Forms::TextBox^ x_input;
	private: System::Windows::Forms::TextBox^ y_input;
	protected:

	protected:

	private: System::Windows::Forms::Label^ x_lbl;
	private: System::Windows::Forms::Label^ y_lbl;


	private: System::Windows::Forms::Button^ solvebtn;
	private: System::Windows::Forms::TextBox^ output;


	private: System::Windows::Forms::Label^ res_lbl;
	private: System::Windows::Forms::ErrorProvider^ errors;

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
			this->x_input = (gcnew System::Windows::Forms::TextBox());
			this->y_input = (gcnew System::Windows::Forms::TextBox());
			this->x_lbl = (gcnew System::Windows::Forms::Label());
			this->y_lbl = (gcnew System::Windows::Forms::Label());
			this->solvebtn = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->res_lbl = (gcnew System::Windows::Forms::Label());
			this->errors = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errors))->BeginInit();
			this->SuspendLayout();
			// 
			// x_input
			// 
			this->x_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->x_input->Location = System::Drawing::Point(134, 80);
			this->x_input->Name = L"x_input";
			this->x_input->Size = System::Drawing::Size(145, 30);
			this->x_input->TabIndex = 0;
			// 
			// y_input
			// 
			this->y_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->y_input->Location = System::Drawing::Point(134, 142);
			this->y_input->Name = L"y_input";
			this->y_input->Size = System::Drawing::Size(145, 30);
			this->y_input->TabIndex = 1;
			// 
			// x_lbl
			// 
			this->x_lbl->AutoSize = true;
			this->x_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->x_lbl->Location = System::Drawing::Point(2, 83);
			this->x_lbl->Name = L"x_lbl";
			this->x_lbl->Size = System::Drawing::Size(112, 25);
			this->x_lbl->TabIndex = 3;
			this->x_lbl->Text = L"Введите x:";
			// 
			// y_lbl
			// 
			this->y_lbl->AutoSize = true;
			this->y_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->y_lbl->Location = System::Drawing::Point(2, 142);
			this->y_lbl->Name = L"y_lbl";
			this->y_lbl->Size = System::Drawing::Size(112, 25);
			this->y_lbl->TabIndex = 4;
			this->y_lbl->Text = L"Введите y:";
			// 
			// solvebtn
			// 
			this->solvebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->solvebtn->Location = System::Drawing::Point(134, 198);
			this->solvebtn->Name = L"solvebtn";
			this->solvebtn->Size = System::Drawing::Size(145, 50);
			this->solvebtn->TabIndex = 5;
			this->solvebtn->Text = L"Вычислить";
			this->solvebtn->UseVisualStyleBackColor = true;
			this->solvebtn->Click += gcnew System::EventHandler(this, &MyForm::solvebtn_Click);
			// 
			// output
			// 
			this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->output->Location = System::Drawing::Point(134, 281);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(145, 30);
			this->output->TabIndex = 6;
			// 
			// res_lbl
			// 
			this->res_lbl->AutoSize = true;
			this->res_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->res_lbl->Location = System::Drawing::Point(2, 284);
			this->res_lbl->Name = L"res_lbl";
			this->res_lbl->Size = System::Drawing::Size(117, 25);
			this->res_lbl->TabIndex = 7;
			this->res_lbl->Text = L"Результат:";
			// 
			// errors
			// 
			this->errors->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 349);
			this->Controls->Add(this->res_lbl);
			this->Controls->Add(this->output);
			this->Controls->Add(this->solvebtn);
			this->Controls->Add(this->y_lbl);
			this->Controls->Add(this->x_lbl);
			this->Controls->Add(this->y_input);
			this->Controls->Add(this->x_input);
			this->Name = L"MyForm";
			this->Text = L"Вычисление значения выражения";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errors))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void solvebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->output->Text = ""; // Стираем поле вывода

		errors->SetError(x_input, String::Empty); // обнуляем ошибки
		errors->SetError(y_input, String::Empty);

		Int64 x, y; // Переменные для считывания полей ввода
		double result; // переменная для записи результата

		bool result_x = Int64::TryParse(this->x_input->Text, x); // записываем из полей ввода в соответствующие переменные
		bool result_y = Int64::TryParse(this->y_input->Text, y); // и проверяем на успешность выполнения парсинга

		if (!result_x) { // если неудачно
			errors->SetError(x_input, "Введено не целое число");
		}
		if (!result_y) {
			errors->SetError(y_input, "Введено не целое число");
		}
		if (result_x && result_y) { // если удачно
			if (x * x - y == 0) { // проверка на ОДЗ
				this->output->Text = "Деление на ноль";
			}
			else {
				result = (1.0) * ((x + y) * (x + y) - x * x * x) / (std::abs(x * x - y)); //Считаем
				this->output->Text = System::Convert::ToString(result); //Записываем результат
			}
		}
	}
};
}
