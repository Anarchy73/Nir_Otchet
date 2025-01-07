#pragma once

namespace NIRLab3 {

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
	private: System::Windows::Forms::Button^ Solve;
	private: System::Windows::Forms::Label^ n_inputlbl;
	private: System::Windows::Forms::Label^ m_inputlbl;
	private: System::Windows::Forms::TextBox^ n_input;
	private: System::Windows::Forms::TextBox^ m_input;
	private: System::Windows::Forms::TextBox^ Output;
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
			this->Solve = (gcnew System::Windows::Forms::Button());
			this->n_inputlbl = (gcnew System::Windows::Forms::Label());
			this->m_inputlbl = (gcnew System::Windows::Forms::Label());
			this->n_input = (gcnew System::Windows::Forms::TextBox());
			this->m_input = (gcnew System::Windows::Forms::TextBox());
			this->Output = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// Solve
			// 
			this->Solve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Solve->Location = System::Drawing::Point(213, 360);
			this->Solve->Name = L"Solve";
			this->Solve->Size = System::Drawing::Size(166, 46);
			this->Solve->TabIndex = 0;
			this->Solve->Text = L"Вычислить";
			this->Solve->UseVisualStyleBackColor = true;
			this->Solve->Click += gcnew System::EventHandler(this, &MyForm::Solve_Click);
			// 
			// n_inputlbl
			// 
			this->n_inputlbl->AutoSize = true;
			this->n_inputlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->n_inputlbl->Location = System::Drawing::Point(69, 100);
			this->n_inputlbl->Name = L"n_inputlbl";
			this->n_inputlbl->Size = System::Drawing::Size(113, 25);
			this->n_inputlbl->TabIndex = 1;
			this->n_inputlbl->Text = L"Введите n:";
			// 
			// m_inputlbl
			// 
			this->m_inputlbl->AutoSize = true;
			this->m_inputlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->m_inputlbl->Location = System::Drawing::Point(69, 184);
			this->m_inputlbl->Name = L"m_inputlbl";
			this->m_inputlbl->Size = System::Drawing::Size(118, 25);
			this->m_inputlbl->TabIndex = 2;
			this->m_inputlbl->Text = L"Введите m:";
			// 
			// n_input
			// 
			this->n_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->n_input->Location = System::Drawing::Point(213, 100);
			this->n_input->Name = L"n_input";
			this->n_input->Size = System::Drawing::Size(166, 30);
			this->n_input->TabIndex = 3;
			// 
			// m_input
			// 
			this->m_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->m_input->Location = System::Drawing::Point(213, 184);
			this->m_input->Name = L"m_input";
			this->m_input->Size = System::Drawing::Size(166, 30);
			this->m_input->TabIndex = 4;
			// 
			// Output
			// 
			this->Output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Output->Location = System::Drawing::Point(133, 239);
			this->Output->Multiline = true;
			this->Output->Name = L"Output";
			this->Output->Size = System::Drawing::Size(315, 106);
			this->Output->TabIndex = 5;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(576, 430);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->m_input);
			this->Controls->Add(this->n_input);
			this->Controls->Add(this->m_inputlbl);
			this->Controls->Add(this->n_inputlbl);
			this->Controls->Add(this->Solve);
			this->Name = L"MyForm";
			this->Text = L"Рекурсивные вычисления Соловьев 251";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void ClearAll() {//очистка полей
		this->Output->Text = "";
		errorProvider1->SetError(n_input, String::Empty);
		errorProvider1->SetError(m_input, String::Empty);
	}

	long long per(long long n, long long m) {
		if (n == 1) return m;
		else return (m - n + 1) * per(n - 1, m);
	}

	private: System::Void Solve_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		long long n, m, A;
		bool result_n = Int64::TryParse(this->n_input->Text, n);
		bool result_m = Int64::TryParse(this->m_input->Text, m);
		if (!result_n) {
			errorProvider1->SetError(this->n_input, "Неправильно введено число n.");
		}
		if (!result_m) {
			errorProvider1->SetError(this->m_input, "Неправильно введено число m.");
		}
		if (result_m && result_n) {

			if (n > m) {
				this->Output->Text = "Ошибка: n > m";
			}
			else {
				if (n < 1) {
					this->Output->Text = "" + "Ошибка: n < 1 "+ System::Environment::NewLine;
				}
				if (m < 1) {
					this->Output->Text += "Ошибка: m < 1\n";
				}
				if (n >= 1 && m >= 1) {
					this->Output->Text = "Количество различных размещений из n в m равно: " + System::Convert::ToString(per(n, m));
				}
			}
		}
	}
	};
}