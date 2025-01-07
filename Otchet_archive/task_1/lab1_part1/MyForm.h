#pragma once

namespace lab1part1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ input;
	protected:

	private: System::Windows::Forms::TextBox^ output;
	private: System::Windows::Forms::Button^ solve;
	private: System::Windows::Forms::Label^ lblin;
	private: System::Windows::Forms::Label^ lblout;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::ComponentModel::IContainer^ components;
	protected:



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->solve = (gcnew System::Windows::Forms::Button());
			this->lblin = (gcnew System::Windows::Forms::Label());
			this->lblout = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// input
			// 
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->input->Location = System::Drawing::Point(106, 71);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(136, 30);
			this->input->TabIndex = 0;
			// 
			// output
			// 
			this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->output->Location = System::Drawing::Point(106, 132);
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(136, 30);
			this->output->TabIndex = 1;
			// 
			// solve
			// 
			this->solve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->solve->Location = System::Drawing::Point(106, 195);
			this->solve->Name = L"solve";
			this->solve->Size = System::Drawing::Size(136, 34);
			this->solve->TabIndex = 2;
			this->solve->Text = L"¬ычислить";
			this->solve->UseVisualStyleBackColor = true;
			this->solve->Click += gcnew System::EventHandler(this, &MyForm::solve_Click);
			// 
			// lblin
			// 
			this->lblin->AutoSize = true;
			this->lblin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lblin->Location = System::Drawing::Point(33, 76);
			this->lblin->Name = L"lblin";
			this->lblin->Size = System::Drawing::Size(43, 25);
			this->lblin->TabIndex = 3;
			this->lblin->Text = L"N =";
			// 
			// lblout
			// 
			this->lblout->AutoSize = true;
			this->lblout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lblout->Location = System::Drawing::Point(33, 137);
			this->lblout->Name = L"lblout";
			this->lblout->Size = System::Drawing::Size(54, 25);
			this->lblout->TabIndex = 4;
			this->lblout->Text = L"N! = ";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->lblout);
			this->Controls->Add(this->lblin);
			this->Controls->Add(this->solve);
			this->Controls->Add(this->output);
			this->Controls->Add(this->input);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Factorial";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void solve_Click(System::Object^ sender, System::EventArgs^ e) {
		this->output->Text = "";
		errorProvider1->SetError(input, String::Empty);
		long long InputNumber;
		bool result = Int64::TryParse(this->input->Text, InputNumber); //переводим строку из TextBox число
		if (!result) { //dвели не число
			errorProvider1->SetError(input, "¬ведено не целое число");
		}
		else {//число
			if (InputNumber > 20) {
				this->output->Text = "—лишком большое число";
			}
			else {
				long long OutputNumber = fact(InputNumber);//результат
				if (OutputNumber == -1) { //отрицательное число
					errorProvider1->SetError(input, "¬ведено отрицательное число");
				}
				else { //все нормально
					this->output->Text = System::Convert::ToString(OutputNumber);//записываем в поле вывода
				}
			}

		}
	}
};
}
