#pragma once
#include <vector>
#include <time.h>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <iterator>
#include "QuestClass/Quest.h"
#include "MessageForm.h"


namespace Winform9 {

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
	private:
		// Массив вопросов
		std::vector<Quest>* Questions = new std::vector<Quest>();
		// Массив из индексов Questions в рандомном порядке
		std::vector<int>* RandIndex = new std::vector<int>();
	private: System::Windows::Forms::Label^ lblQuest;


	private: System::Windows::Forms::TextBox^ countBox;
	private: System::Windows::Forms::TextBox^ questBox;
	private: System::Windows::Forms::GroupBox^ answerGroup;
	protected:



	private: System::Windows::Forms::CheckBox^ answerD;
	private: System::Windows::Forms::CheckBox^ answerC;


	private: System::Windows::Forms::CheckBox^ answerB;

	private: System::Windows::Forms::CheckBox^ answerA;
	private: System::Windows::Forms::TextBox^ shortAns;



	private: System::Windows::Forms::Label^ lblShortAnswer;
	private: System::Windows::Forms::Button^ act;



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
			this->lblQuest = (gcnew System::Windows::Forms::Label());
			this->countBox = (gcnew System::Windows::Forms::TextBox());
			this->questBox = (gcnew System::Windows::Forms::TextBox());
			this->answerGroup = (gcnew System::Windows::Forms::GroupBox());
			this->answerD = (gcnew System::Windows::Forms::CheckBox());
			this->answerC = (gcnew System::Windows::Forms::CheckBox());
			this->answerB = (gcnew System::Windows::Forms::CheckBox());
			this->answerA = (gcnew System::Windows::Forms::CheckBox());
			this->shortAns = (gcnew System::Windows::Forms::TextBox());
			this->lblShortAnswer = (gcnew System::Windows::Forms::Label());
			this->act = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->answerGroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblQuest
			// 
			this->lblQuest->AutoSize = true;
			this->lblQuest->Location = System::Drawing::Point(181, 33);
			this->lblQuest->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblQuest->Name = L"lblQuest";
			this->lblQuest->Size = System::Drawing::Size(111, 16);
			this->lblQuest->TabIndex = 0;
			this->lblQuest->Text = L"Номер вопроса:";
			// 
			// countBox
			// 
			this->countBox->Location = System::Drawing::Point(297, 30);
			this->countBox->Margin = System::Windows::Forms::Padding(4);
			this->countBox->Name = L"countBox";
			this->countBox->ReadOnly = true;
			this->countBox->Size = System::Drawing::Size(43, 22);
			this->countBox->TabIndex = 1;
			// 
			// questBox
			// 
			this->questBox->Location = System::Drawing::Point(49, 66);
			this->questBox->Margin = System::Windows::Forms::Padding(4);
			this->questBox->Multiline = true;
			this->questBox->Name = L"questBox";
			this->questBox->ReadOnly = true;
			this->questBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->questBox->Size = System::Drawing::Size(488, 360);
			this->questBox->TabIndex = 2;
			// 
			// answerGroup
			// 
			this->answerGroup->Controls->Add(this->answerD);
			this->answerGroup->Controls->Add(this->answerC);
			this->answerGroup->Controls->Add(this->answerB);
			this->answerGroup->Controls->Add(this->answerA);
			this->answerGroup->Location = System::Drawing::Point(290, 451);
			this->answerGroup->Margin = System::Windows::Forms::Padding(4);
			this->answerGroup->Name = L"answerGroup";
			this->answerGroup->Padding = System::Windows::Forms::Padding(4);
			this->answerGroup->Size = System::Drawing::Size(234, 58);
			this->answerGroup->TabIndex = 3;
			this->answerGroup->TabStop = false;
			this->answerGroup->Text = L"Ответы:";
			// 
			// answerD
			// 
			this->answerD->AutoSize = true;
			this->answerD->Location = System::Drawing::Point(177, 23);
			this->answerD->Margin = System::Windows::Forms::Padding(4);
			this->answerD->Name = L"answerD";
			this->answerD->Size = System::Drawing::Size(39, 20);
			this->answerD->TabIndex = 3;
			this->answerD->Text = L"D";
			this->answerD->UseVisualStyleBackColor = true;
			// 
			// answerC
			// 
			this->answerC->AutoSize = true;
			this->answerC->Location = System::Drawing::Point(131, 23);
			this->answerC->Margin = System::Windows::Forms::Padding(4);
			this->answerC->Name = L"answerC";
			this->answerC->Size = System::Drawing::Size(38, 20);
			this->answerC->TabIndex = 2;
			this->answerC->Text = L"C";
			this->answerC->UseVisualStyleBackColor = true;
			// 
			// answerB
			// 
			this->answerB->AutoSize = true;
			this->answerB->Location = System::Drawing::Point(69, 23);
			this->answerB->Margin = System::Windows::Forms::Padding(4);
			this->answerB->Name = L"answerB";
			this->answerB->Size = System::Drawing::Size(38, 20);
			this->answerB->TabIndex = 1;
			this->answerB->Text = L"B";
			this->answerB->UseVisualStyleBackColor = true;
			// 
			// answerA
			// 
			this->answerA->AutoSize = true;
			this->answerA->Location = System::Drawing::Point(8, 23);
			this->answerA->Margin = System::Windows::Forms::Padding(4);
			this->answerA->Name = L"answerA";
			this->answerA->Size = System::Drawing::Size(38, 20);
			this->answerA->TabIndex = 0;
			this->answerA->Text = L"A";
			this->answerA->UseVisualStyleBackColor = true;
			// 
			// shortAns
			// 
			this->shortAns->Location = System::Drawing::Point(74, 461);
			this->shortAns->Margin = System::Windows::Forms::Padding(4);
			this->shortAns->Multiline = true;
			this->shortAns->Name = L"shortAns";
			this->shortAns->Size = System::Drawing::Size(188, 48);
			this->shortAns->TabIndex = 4;
			// 
			// lblShortAnswer
			// 
			this->lblShortAnswer->AutoSize = true;
			this->lblShortAnswer->Location = System::Drawing::Point(70, 438);
			this->lblShortAnswer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblShortAnswer->Name = L"lblShortAnswer";
			this->lblShortAnswer->Size = System::Drawing::Size(113, 16);
			this->lblShortAnswer->TabIndex = 5;
			this->lblShortAnswer->Text = L"Короткий ответ:";
			// 
			// act
			// 
			this->act->Location = System::Drawing::Point(186, 517);
			this->act->Margin = System::Windows::Forms::Padding(4);
			this->act->Name = L"act";
			this->act->Size = System::Drawing::Size(189, 53);
			this->act->TabIndex = 6;
			this->act->Text = L"Продолжить";
			this->act->UseVisualStyleBackColor = true;
			this->act->Click += gcnew System::EventHandler(this, &MyForm::act_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(589, 620);
			this->Controls->Add(this->act);
			this->Controls->Add(this->lblShortAnswer);
			this->Controls->Add(this->shortAns);
			this->Controls->Add(this->answerGroup);
			this->Controls->Add(this->questBox);
			this->Controls->Add(this->countBox);
			this->Controls->Add(this->lblQuest);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Тест";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->answerGroup->ResumeLayout(false);
			this->answerGroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		int iter = 0;
		void YesNoForm() {
			answerGroup->Show();
			answerA->Show();
			answerB->Show();
			answerA->Checked = false;
			answerB->Checked = false;
			answerC->Hide();
			answerD->Hide();
			lblShortAnswer->Hide();
			shortAns->Hide();
			shortAns->Clear();
		}

		void OneAnswerForm() {
			answerGroup->Show();
			answerA->Show();
			answerB->Show();
			answerC->Show();
			answerD->Show();
			answerA->Checked = false;
			answerB->Checked = false;
			answerC->Checked = false;
			answerD->Checked = false;
			lblShortAnswer->Hide();
			shortAns->Hide();
			shortAns->Clear();
		}

		void ShortAnswerForm() {
			lblShortAnswer->Show();
			shortAns->Show();
			answerGroup->Hide();
			shortAns->Clear();
		}

		void QuestionsLoad() {
			// 1 вопрос
			Questions->push_back(Quest("Существует ли предел функции в точке, если она непрерывна в этой точке? \n \
							=", "ДаНет", "A"));
			// 2 вопрос
			Questions->push_back(Quest("Является ли производная функции в точке её наклоном?"
					, "ДаНет", "A"));
			// 3 вопрос
			Questions->push_back(Quest("Кому принадлежит теорема о среднем? \n \
							Варианты ответа: [A] Коши; [B] Маклорен; [C] Вейерштрас; [D] Толстов Роберт;", "НесколькоОтветов", "AD"));
			// 4 вопрос
			Questions->push_back(Quest("Как называется сумма бесконечного числа членов некоторой последовательности?", "слово", "ряд"));
			// 5 вопрос
			Questions->push_back(Quest("Может ли функция иметь более одной производной в точке?", "ДаНет", "B"));
			// 6 вопрос
			Questions->push_back(Quest("Существует ли функция, которая является непрерывной, но не дифференцируемой?", "ДаНет", "A"));
			// 7 вопрос
			Questions->push_back(Quest("Как называется единичный вектор, перпендикулярный данной плоскости?", "слово", "нормаль"));
			// 8 вопрос
			Questions->push_back(Quest("Как называется точка, в которой функция не определена?", "слово", "разрыв"));
			// 9 вопрос
			Questions->push_back(Quest("Что обозначает знак lim⁡ в математике?", "слово", "предел"));
			// 10 вопрос
			Questions->push_back(Quest("Как называется процесс нахождения площади под кривой?", "слово", "интегрирование"));
		}

		void RandIndexLoad() {
			// Заполняем массив числами от 0 до Questions->size() - 1
			for (int i = 0; i < Questions->size(); ++i) {
				RandIndex->push_back(i);
			}
			// Рандомно меняем местами элементы массива
			srand(time(NULL));
			std::random_shuffle(RandIndex->begin(), RandIndex->end());
		}


		void ChooseForm() {
			int i = RandIndex->at(iter);
			Quest temp = Questions->at(i);
			if (temp.getType() == "ДаНет") {
				YesNoForm();
			}
			else if (temp.getType() == "ОдинОтвет" || temp.getType() == "НесколькоОтветов") {
				OneAnswerForm();
			}
			else {
				ShortAnswerForm();
			}
		}

		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			countBox->Text = Convert::ToString(iter + 1);
			// Заполняем массивы с вопросами и порядком вывода вопросов
			QuestionsLoad();
			RandIndexLoad();
			ChooseForm();
			int i = RandIndex->at(iter);
			questBox->Text = gcnew String(Questions->at(i).getText().c_str());
		}

		std::string YesNoRead() {
			std::string temp = "";
			if (answerA->Checked == true && answerB->Checked == true) {
				errorProvider1->SetError(act, "Нужно выбрать только один ответ!");
			}
			else if (answerA->Checked == true) {
				temp = "A";
			}
			else if (answerB->Checked == true) {
				temp = "B";
			}
			else {
				errorProvider1->SetError(act, "Нужно выбрать ответ!");
			}
			return temp;
		}

		std::string OneAnswerRead() {
			std::string temp = "";
			if (answerA->Checked == false && answerB->Checked == false && answerC->Checked == false && answerD->Checked == false) {
				errorProvider1->SetError(act, "Нужно выбрать ответ!");
			}
			else if (answerA->Checked == true && answerB->Checked == false && answerC->Checked == false && answerD->Checked == false) {
				temp = "A";
			}
			else if (answerB->Checked == true && answerA->Checked == false && answerC->Checked == false && answerD->Checked == false) {
				temp = "B";
			}
			else if (answerC->Checked == true && answerA->Checked == false && answerB->Checked == false && answerD->Checked == false) {
				temp = "C";
			}
			else if (answerD->Checked == true && answerA->Checked == false && answerB->Checked == false && answerC->Checked == false) {
				temp = "D";
			}
			else {
				errorProvider1->SetError(act, "Нужно выбрать только один ответ!");
			}
			return temp;

		}

		std::string SomeAnswersRead() {
			std::string temp = "";
			if (answerA->Checked == false && answerB->Checked == false && answerC->Checked == false && answerD->Checked == false) {
				errorProvider1->SetError(act, "Нужно выбрать ответ!");
			}
			if (answerA->Checked == true) {
				temp += "A";
			}
			if (answerB->Checked == true) {
				temp += "B";
			}
			if (answerC->Checked == true) {
				temp += "C";
			}
			if (answerD->Checked == true) {
				temp += "D";
			}
			return temp;

		}

		std::string ShortAnswerRead() {
			std::string temp = msclr::interop::marshal_as<std::string>(shortAns->Text);
			if (temp == "") {
				errorProvider1->SetError(act, "Нужно ввести ответ!");
			}
			return temp;
		}

		std::string ReadAnswer() {
			int i = RandIndex->at(iter);
			Quest temp = Questions->at(i);
			if (temp.getType() == "ДаНет") {
				return YesNoRead();
			}
			else if (temp.getType() == "ОдинОтвет") {
				return OneAnswerRead();
			}
			else if (temp.getType() == "НесколькоОтветов") {
				return SomeAnswersRead();
			}
			else {
				return ShortAnswerRead();
			}

		}

		int CalcResult() {
			int sum = 0;

			for (int i = 0; i < Questions->size(); ++i) {
				sum += Questions->at(i).getResult();
			}
			return sum;
		}

		System::Void act_Click(System::Object^ sender, System::EventArgs^ e) {
			errorProvider1->Clear();
			std::string answer = "";
			if (iter != Questions->size()) {
				answer = ReadAnswer();
			}
			// если ответ правильного формата
			if (answer != "") {
				int i = RandIndex->at(iter);
				int flag = 0;
				// проверка ответа
				if (Questions->at(i).getRightAnswer() == answer) {
					// выставление баллов за ответ
					Questions->at(i).setResult(1);
					flag = 1;
				}
				else {
					// выставление баллов за ответ
					Questions->at(i).setResult(0);
				}
				MessageForm^ msgForm = gcnew MessageForm();
				msgForm->setFlag(flag);
				msgForm->ShowDialog();
				iter++;
				if (iter != Questions->size()) {
					countBox->Text = Convert::ToString(iter + 1);
					ChooseForm();
					int i = RandIndex->at(iter);
					questBox->Text = gcnew String(Questions->at(i).getText().c_str());
				}
				else {
					msgForm->result(CalcResult());
					msgForm->setFlag(-1);
					msgForm->ShowDialog();
				}
			}
		}
};
}
