#pragma once

namespace NIRLab7 {

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
	private: System::Windows::Forms::TextBox^ input_stack;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ create_stack;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ output;
	private: System::Windows::Forms::Button^ clear_stack;
	private: System::Windows::Forms::TextBox^ pop_out;
	private: System::Windows::Forms::Button^ pop_stack;
	private: System::Windows::Forms::Button^ nech_stack_btn;
	private: System::Windows::Forms::TextBox^ nech_stack;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ max_nech_btn;

	private: System::Windows::Forms::TextBox^ max_nech;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
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
			this->input_stack = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->create_stack = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->clear_stack = (gcnew System::Windows::Forms::Button());
			this->pop_out = (gcnew System::Windows::Forms::TextBox());
			this->pop_stack = (gcnew System::Windows::Forms::Button());
			this->nech_stack_btn = (gcnew System::Windows::Forms::Button());
			this->nech_stack = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->max_nech_btn = (gcnew System::Windows::Forms::Button());
			this->max_nech = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// input_stack
			// 
			this->input_stack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->input_stack->Location = System::Drawing::Point(145, 37);
			this->input_stack->Name = L"input_stack";
			this->input_stack->Size = System::Drawing::Size(170, 30);
			this->input_stack->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(12, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ввод стека";
			// 
			// create_stack
			// 
			this->create_stack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->create_stack->Location = System::Drawing::Point(377, 27);
			this->create_stack->Name = L"create_stack";
			this->create_stack->Size = System::Drawing::Size(301, 51);
			this->create_stack->TabIndex = 2;
			this->create_stack->Text = L"Добавить элементы в стек";
			this->create_stack->UseVisualStyleBackColor = true;
			this->create_stack->Click += gcnew System::EventHandler(this, &MyForm::create_stack_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(72, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"стек";
			// 
			// output
			// 
			this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->output->Location = System::Drawing::Point(145, 139);
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(170, 30);
			this->output->TabIndex = 4;
			// 
			// clear_stack
			// 
			this->clear_stack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->clear_stack->Location = System::Drawing::Point(377, 129);
			this->clear_stack->Name = L"clear_stack";
			this->clear_stack->Size = System::Drawing::Size(301, 51);
			this->clear_stack->TabIndex = 5;
			this->clear_stack->Text = L"Очистить стек";
			this->clear_stack->UseVisualStyleBackColor = true;
			this->clear_stack->Click += gcnew System::EventHandler(this, &MyForm::clear_stack_Click);
			// 
			// pop_out
			// 
			this->pop_out->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->pop_out->Location = System::Drawing::Point(235, 211);
			this->pop_out->Name = L"pop_out";
			this->pop_out->ReadOnly = true;
			this->pop_out->Size = System::Drawing::Size(80, 30);
			this->pop_out->TabIndex = 6;
			// 
			// pop_stack
			// 
			this->pop_stack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->pop_stack->Location = System::Drawing::Point(377, 201);
			this->pop_stack->Name = L"pop_stack";
			this->pop_stack->Size = System::Drawing::Size(133, 51);
			this->pop_stack->TabIndex = 7;
			this->pop_stack->Text = L"pop";
			this->pop_stack->UseVisualStyleBackColor = true;
			this->pop_stack->Click += gcnew System::EventHandler(this, &MyForm::pop_stack_Click);
			// 
			// nech_stack_btn
			// 
			this->nech_stack_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->nech_stack_btn->Location = System::Drawing::Point(377, 342);
			this->nech_stack_btn->Name = L"nech_stack_btn";
			this->nech_stack_btn->Size = System::Drawing::Size(301, 51);
			this->nech_stack_btn->TabIndex = 10;
			this->nech_stack_btn->Text = L"сделать нечетный стек";
			this->nech_stack_btn->UseVisualStyleBackColor = true;
			this->nech_stack_btn->Click += gcnew System::EventHandler(this, &MyForm::nech_stack_btn_Click);
			// 
			// nech_stack
			// 
			this->nech_stack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->nech_stack->Location = System::Drawing::Point(145, 352);
			this->nech_stack->Name = L"nech_stack";
			this->nech_stack->ReadOnly = true;
			this->nech_stack->Size = System::Drawing::Size(170, 30);
			this->nech_stack->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(57, 355);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Нечет";
			// 
			// max_nech_btn
			// 
			this->max_nech_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->max_nech_btn->Location = System::Drawing::Point(377, 270);
			this->max_nech_btn->Name = L"max_nech_btn";
			this->max_nech_btn->Size = System::Drawing::Size(301, 51);
			this->max_nech_btn->TabIndex = 12;
			this->max_nech_btn->Text = L"max нечетный элемент";
			this->max_nech_btn->UseVisualStyleBackColor = true;
			this->max_nech_btn->Click += gcnew System::EventHandler(this, &MyForm::max_nech_btn_Click);
			// 
			// max_nech
			// 
			this->max_nech->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->max_nech->Location = System::Drawing::Point(145, 280);
			this->max_nech->Name = L"max_nech";
			this->max_nech->ReadOnly = true;
			this->max_nech->Size = System::Drawing::Size(170, 30);
			this->max_nech->TabIndex = 11;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 423);
			this->Controls->Add(this->max_nech_btn);
			this->Controls->Add(this->max_nech);
			this->Controls->Add(this->nech_stack_btn);
			this->Controls->Add(this->nech_stack);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pop_stack);
			this->Controls->Add(this->pop_out);
			this->Controls->Add(this->clear_stack);
			this->Controls->Add(this->output);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->create_stack);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->input_stack);
			this->Name = L"MyForm";
			this->Text = L"Работа с коллекциями";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Collections::Generic::Stack<int> s; 

	private: System::Void stack_out() {
		System::Collections::Generic::Stack<int> buf; //вспомогательный стек
		System::String^ str2 = "";
		while (s.Count) {//пока стек не пуст
			buf.Push(s.Peek()); //записываем во вспомогательный стек первый элемент
			str2 += System::Convert::ToString(s.Peek()) + " "; //записываем первый элемент в строку
			s.Pop(); //удаляем первый элемент из стека


		}
		while (buf.Count) { //пока вспомогательный стек не пуст
			s.Push(buf.Peek()); //записываем в основной стек первый элемент вспомогательного
			buf.Pop(); //удаляем из стека первый элемент

		}

		this->output->Text = str2; //записываем результат в строку
	}

	private: System::Void create_stack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->errorProvider1->Clear();
		System::String^ str = System::Convert::ToString(this->input_stack->Text); //считываем строку из текстового поля
		str += " ";
		int X, at, pos = 0;
		at = str->IndexOf(" "); //позиция первого пробела
		while (at != -1) { //пока находим пробел
			System::String^ str1 = str->Substring(pos, at-pos); //считываем число
			pos = at + 1;
			bool res = Int32::TryParse(str1, X);
			if (!res) {
				this->errorProvider1->SetError(this->input_stack, "Буквы в вводе");
				return;
			}
			s.Push(X); //записываем в очередь
			at = str->IndexOf(" ", pos); //ищем следующий пробел
			
		}
		stack_out();
	
	}
private: System::Void clear_stack_Click(System::Object^ sender, System::EventArgs^ e) {
	while (s.Count) {//пока стек не пуст
		s.Pop(); //удаляем 
	}
	stack_out();
}
private: System::Void pop_stack_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (s.Count) {
		this->pop_out->Text = System::Convert::ToString(s.Peek());
		s.Pop();
	}
	stack_out();
}
private: System::Void max_nech_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Collections::Generic::Stack<int> buf; //вспомогательный стек
	int maxel = -1e9;
	bool nech = false;
	while (s.Count) {//пока стек не пуст
		if (maxel < s.Peek() && s.Peek() % 2 != 0) {
			maxel = s.Peek();
			nech = true;
		} 
		buf.Push(s.Peek()); //записываем во вспомогательный стек первый элемент
		s.Pop(); //удаляем первый элемент из стека


	}
	while (buf.Count) { //пока вспомогательный стек не пуст
		s.Push(buf.Peek()); //записываем в основный стек первый элемент вспомогательного
		buf.Pop(); //удаляем из стека первый элемент
	}
	if (nech) this->max_nech->Text = System::Convert::ToString(maxel); //записываем результат в строку
	else this->max_nech->Text = "Стек не содержит четных элементов";
}

private: System::Void nech_stack_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Collections::Generic::Stack<int> buf; //вспомогательный стек
	System::String^ str2 = "";
	bool nechet = false;
	while (s.Count) {//пока стек не пуст
		buf.Push(s.Peek()); //записываем во вспомогательный стек первый элемент
		if (s.Peek() % 2 != 0) {
			nechet = true;
			str2 += System::Convert::ToString(s.Peek()) + " "; //записываем первый элемент в строку
		}
		
		s.Pop(); //удаляем первый элемент из стека


	}
	while (buf.Count) { //пока вспомогательный стек не пуст
		s.Push(buf.Peek()); //записываем в основной стек первый элемент вспомогательного
		buf.Pop(); //удаляем из стека первый элемент

	}
	if (nechet) {
		this->nech_stack->Text = str2; //записываем результат в строку
	}
	else {
		this->nech_stack->Text = "В стеке нет нечетных элементов";
	}
}
};
}
