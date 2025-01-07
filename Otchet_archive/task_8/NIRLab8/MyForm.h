#pragma once
#include <string>
namespace NIRLab8 {

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
	private: System::Windows::Forms::DataGridView^ MainTable;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FirstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FatherName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HotelName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ArrivalTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OutTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ InTime;
	private: System::Windows::Forms::DataGridView^ FilteredTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::Button^ AddRow;
	private: System::Windows::Forms::Button^ DeleteRow;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Button^ FileSave;
	private: System::Windows::Forms::Button^ FileOpen;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::Button^ FilterBtn;
	private: System::Windows::Forms::TextBox^ FilterDate;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ FileSaveFilter;

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
			this->MainTable = (gcnew System::Windows::Forms::DataGridView());
			this->FirstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FatherName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HotelName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ArrivalTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OutTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->InTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FilteredTable = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AddRow = (gcnew System::Windows::Forms::Button());
			this->DeleteRow = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->FileOpen = (gcnew System::Windows::Forms::Button());
			this->FileSave = (gcnew System::Windows::Forms::Button());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FilterDate = (gcnew System::Windows::Forms::TextBox());
			this->FilterBtn = (gcnew System::Windows::Forms::Button());
			this->FileSaveFilter = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FilteredTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// MainTable
			// 
			this->MainTable->AllowUserToAddRows = false;
			this->MainTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MainTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->FirstName,
					this->LastName, this->FatherName, this->HotelName, this->ArrivalTime, this->OutTime, this->InTime
			});
			this->MainTable->Location = System::Drawing::Point(35, 33);
			this->MainTable->Name = L"MainTable";
			this->MainTable->RowHeadersWidth = 51;
			this->MainTable->RowTemplate->Height = 24;
			this->MainTable->Size = System::Drawing::Size(617, 150);
			this->MainTable->TabIndex = 0;
			// 
			// FirstName
			// 
			this->FirstName->HeaderText = L"Имя";
			this->FirstName->MinimumWidth = 6;
			this->FirstName->Name = L"FirstName";
			this->FirstName->Width = 75;
			// 
			// LastName
			// 
			this->LastName->HeaderText = L"Фамилия";
			this->LastName->MinimumWidth = 6;
			this->LastName->Name = L"LastName";
			this->LastName->Width = 75;
			// 
			// FatherName
			// 
			this->FatherName->HeaderText = L"Отчество";
			this->FatherName->MinimumWidth = 6;
			this->FatherName->Name = L"FatherName";
			this->FatherName->Width = 75;
			// 
			// HotelName
			// 
			this->HotelName->HeaderText = L"Гостиница";
			this->HotelName->MinimumWidth = 6;
			this->HotelName->Name = L"HotelName";
			this->HotelName->Width = 75;
			// 
			// ArrivalTime
			// 
			this->ArrivalTime->HeaderText = L"Дата приезда";
			this->ArrivalTime->MinimumWidth = 6;
			this->ArrivalTime->Name = L"ArrivalTime";
			this->ArrivalTime->Width = 75;
			// 
			// OutTime
			// 
			this->OutTime->HeaderText = L"Дата отъезда";
			this->OutTime->MinimumWidth = 6;
			this->OutTime->Name = L"OutTime";
			this->OutTime->Width = 75;
			// 
			// InTime
			// 
			this->InTime->HeaderText = L"Срок пребывания";
			this->InTime->MinimumWidth = 6;
			this->InTime->Name = L"InTime";
			this->InTime->Width = 75;
			// 
			// FilteredTable
			// 
			this->FilteredTable->AllowUserToAddRows = false;
			this->FilteredTable->AllowUserToDeleteRows = false;
			this->FilteredTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FilteredTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
			});
			this->FilteredTable->Location = System::Drawing::Point(35, 267);
			this->FilteredTable->Name = L"FilteredTable";
			this->FilteredTable->ReadOnly = true;
			this->FilteredTable->RowHeadersWidth = 51;
			this->FilteredTable->RowTemplate->Height = 24;
			this->FilteredTable->Size = System::Drawing::Size(617, 150);
			this->FilteredTable->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Имя";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 75;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Фамилия";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 75;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Отчество";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 75;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Гостиница";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 75;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Дата приезда";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 75;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Дата отъезда";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 75;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Срок пребывания";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 75;
			// 
			// AddRow
			// 
			this->AddRow->Location = System::Drawing::Point(692, 33);
			this->AddRow->Name = L"AddRow";
			this->AddRow->Size = System::Drawing::Size(96, 46);
			this->AddRow->TabIndex = 2;
			this->AddRow->Text = L"Добавить";
			this->AddRow->UseVisualStyleBackColor = true;
			this->AddRow->Click += gcnew System::EventHandler(this, &MyForm::AddRow_Click);
			// 
			// DeleteRow
			// 
			this->DeleteRow->Location = System::Drawing::Point(692, 137);
			this->DeleteRow->Name = L"DeleteRow";
			this->DeleteRow->Size = System::Drawing::Size(96, 46);
			this->DeleteRow->TabIndex = 3;
			this->DeleteRow->Text = L"Удалить";
			this->DeleteRow->UseVisualStyleBackColor = true;
			this->DeleteRow->Click += gcnew System::EventHandler(this, &MyForm::DeleteRow_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// FileOpen
			// 
			this->FileOpen->Location = System::Drawing::Point(35, 201);
			this->FileOpen->Name = L"FileOpen";
			this->FileOpen->Size = System::Drawing::Size(96, 46);
			this->FileOpen->TabIndex = 4;
			this->FileOpen->Text = L"Открыть файл";
			this->FileOpen->UseVisualStyleBackColor = true;
			this->FileOpen->Click += gcnew System::EventHandler(this, &MyForm::FileOpen_Click);
			// 
			// FileSave
			// 
			this->FileSave->Location = System::Drawing::Point(137, 201);
			this->FileSave->Name = L"FileSave";
			this->FileSave->Size = System::Drawing::Size(96, 46);
			this->FileSave->TabIndex = 5;
			this->FileSave->Text = L"Сохранить файл";
			this->FileSave->UseVisualStyleBackColor = true;
			this->FileSave->Click += gcnew System::EventHandler(this, &MyForm::FileSave_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->DefaultExt = L"txt";
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
			this->openFileDialog->Title = L"Открыть файл";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
			this->saveFileDialog->Title = L"Сохранить файл";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(659, 267);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Фильр даты";
			// 
			// FilterDate
			// 
			this->FilterDate->Location = System::Drawing::Point(662, 286);
			this->FilterDate->Name = L"FilterDate";
			this->FilterDate->Size = System::Drawing::Size(100, 22);
			this->FilterDate->TabIndex = 7;
			// 
			// FilterBtn
			// 
			this->FilterBtn->Location = System::Drawing::Point(662, 314);
			this->FilterBtn->Name = L"FilterBtn";
			this->FilterBtn->Size = System::Drawing::Size(100, 46);
			this->FilterBtn->TabIndex = 8;
			this->FilterBtn->Text = L"Фильтр";
			this->FilterBtn->UseVisualStyleBackColor = true;
			this->FilterBtn->Click += gcnew System::EventHandler(this, &MyForm::FilterBtn_Click);
			// 
			// FileSaveFilter
			// 
			this->FileSaveFilter->Location = System::Drawing::Point(662, 371);
			this->FileSaveFilter->Name = L"FileSaveFilter";
			this->FileSaveFilter->Size = System::Drawing::Size(100, 46);
			this->FileSaveFilter->TabIndex = 9;
			this->FileSaveFilter->Text = L"Сохранить фильтр";
			this->FileSaveFilter->UseVisualStyleBackColor = true;
			this->FileSaveFilter->Click += gcnew System::EventHandler(this, &MyForm::FileSaveFilter_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(826, 470);
			this->Controls->Add(this->FileSaveFilter);
			this->Controls->Add(this->FilterBtn);
			this->Controls->Add(this->FilterDate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FileSave);
			this->Controls->Add(this->FileOpen);
			this->Controls->Add(this->DeleteRow);
			this->Controls->Add(this->AddRow);
			this->Controls->Add(this->FilteredTable);
			this->Controls->Add(this->MainTable);
			this->Name = L"MyForm";
			this->Text = L"Соловьев Артем 251 группа работа с файлами";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FilteredTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddRow_Click(System::Object^ sender, System::EventArgs^ e) {
		this->errorProvider1->Clear();
		this->MainTable->Rows->Add(1);
	}
private: System::Void DeleteRow_Click(System::Object^ sender, System::EventArgs^ e) {
	this->errorProvider1->Clear();
	if (this->MainTable->RowCount == 0) {
		this->errorProvider1->SetError(DeleteRow, "Нельзя убрать строку, которой нет");
		return;
	}
	int i = this->MainTable->CurrentRow->Index;
	this->MainTable->Rows->Remove(this->MainTable->Rows[i]);
}
private: System::Void FileOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	while (this->MainTable->RowCount > 0) {
		this->MainTable->Rows->RemoveAt(0);
	}
	System::IO::Stream^ myStream;
	if (this->openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((myStream = openFileDialog->OpenFile()) != nullptr) {
			System::IO::StreamReader^ sw =
				gcnew System::IO::StreamReader(myStream,
					System::Text::Encoding::GetEncoding(65001));
			System::String ^str1 = "", ^temp;
			int n1, n2, counter = 0;

			while (sw->Peek() > -1) {
				str1 = sw->ReadLine();
				n2 = str1->IndexOf(" ");
				temp = str1->Substring(0, n2);
				if (this->MainTable->RowCount - 1 < counter) this->MainTable->Rows->Add(1);
				this->MainTable->Rows[counter]->Cells[0]->Value = temp;
				
				n1 = n2;
				n2 = str1->IndexOf(" ", n2 + 1);
				temp = str1->Substring(n1 + 1, n2 - n1 -1);
				this->MainTable->Rows[counter]->Cells[1]->Value = temp;

				n1 = n2;
				n2 = str1->IndexOf(" ", n2 + 1);
				temp = str1->Substring(n1 + 1, n2 - n1 - 1);
				this->MainTable->Rows[counter]->Cells[2]->Value = temp;

				n1 = n2;
				n2 = str1->IndexOf(" ", n2 + 1);
				temp = str1->Substring(n1 + 1, n2 - n1 - 1);
				this->MainTable->Rows[counter]->Cells[3]->Value = temp;

				n1 = n2;
				n2 = str1->IndexOf(" ", n2 + 1);
				temp = str1->Substring(n1 + 1, n2 - n1 - 1);
				this->MainTable->Rows[counter]->Cells[4]->Value = temp;

				n1 = n2;
				n2 = str1->IndexOf(" ", n2 + 1);
				temp = str1->Substring(n1 + 1, n2 - n1 - 1);
				this->MainTable->Rows[counter]->Cells[5]->Value = temp;

				
				temp = str1->Substring(n2 + 1);
				this->MainTable->Rows[counter]->Cells[6]->Value = temp;

				counter++;
			}
			sw->Close();
		}
	}
}
	   bool checkTable() {
		   this->errorProvider1->Clear();
		   System::DateTime d1, d2;
		   System::TimeSpan d3;
		   int dif;
		   bool check;
		   for (int i = 0; i < this->MainTable->RowCount; i++) {
			   check = DateTime::TryParse(System::Convert::ToString(this->MainTable->Rows[i]->Cells[4]->Value), d1);
			   if (!check) {
				   this->errorProvider1->SetError(MainTable, "Неправильный формат даты");
				   return false;
			   }
			   check = DateTime::TryParse(System::Convert::ToString(this->MainTable->Rows[i]->Cells[5]->Value), d2);
			   if (!check) {
				   this->errorProvider1->SetError(MainTable, "Неправильный формат даты");
				   return false;
			   }
			   d3 = d2.Subtract(d1);
			   dif = DateTime::Compare(d1, d2);
			   if (dif > 0) {
				   this->errorProvider1->SetError(MainTable, "Дата прибытия больше даты отъезда");
				   return false;
			   }
			   check = Int32::TryParse(System::Convert::ToString(this->MainTable->Rows[i]->Cells[6]->Value), dif);
			   if (dif != d3.Days) {
				   this->errorProvider1->SetError(MainTable,"Срок пребывание не совпадает с разностью отъезда и приезда");
				   return false;
			   }




			}
		   return true;
	   }
private: System::Void FileSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!checkTable()) return;
	System::IO::Stream^ myStream;
	if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((myStream = saveFileDialog->OpenFile()) != nullptr) {
			System::IO::StreamWriter^ sw =
				gcnew System::IO::StreamWriter(myStream,
					System::Text::Encoding::GetEncoding(65001));
			
			
			for (int i = 0; i < this->MainTable->RowCount; i++) {
				
				sw->Write(this->MainTable->Rows[i]->Cells[0]->Value);
				sw->Write(" ");

				sw->Write(this->MainTable->Rows[i]->Cells[1]->Value);
				sw->Write(" ");

				sw->Write(this->MainTable->Rows[i]->Cells[2]->Value);
				sw->Write(" ");

				sw->Write(this->MainTable->Rows[i]->Cells[3]->Value);
				sw->Write(" ");

				sw->Write(this->MainTable->Rows[i]->Cells[4]->Value);
				sw->Write(" ");

				sw->Write(this->MainTable->Rows[i]->Cells[5]->Value);
				sw->Write(" ");

				sw->Write(this->MainTable->Rows[i]->Cells[6]->Value);
				if (i != this->MainTable->RowCount - 1)	sw->WriteLine();
			}
			sw->Close();
		}
	}
}
private: System::Void FilterBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!checkTable()) return;
	this->FilteredTable->Rows->Clear();
	System::DateTime current, d1, d2;
	bool check;
	check = System::DateTime::TryParse(System::Convert::ToString(this->FilterDate->Text),current);
	if (!check) {
		this->errorProvider1->SetError(FilterDate, "Неправильный формат даты");
		return;
	}
	int n1, n2;
	for (int i = 0; i < this->MainTable->RowCount; i++) {
		d1 = DateTime::Parse(System::Convert::ToString(this->MainTable->Rows[i]->Cells[4]->Value));
		d2 = DateTime::Parse(System::Convert::ToString(this->MainTable->Rows[i]->Cells[5]->Value));
		n1 = DateTime::Compare(d1, current);
		n2 = DateTime::Compare(current, d2);
		if (n1 <= 0 && n2 <= 0) {
			this->FilteredTable->Rows->Add(1);
			for (int j = 0; j < 7; j++) this->FilteredTable->Rows[this->FilteredTable->RowCount - 1]->Cells[j]->Value = this->MainTable->Rows[i]->Cells[j]->Value;
		}
	}
}
private: System::Void FileSaveFilter_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::Stream^ myStream;
	if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((myStream = saveFileDialog->OpenFile()) != nullptr) {
			System::IO::StreamWriter^ sw =
				gcnew System::IO::StreamWriter(myStream,
					System::Text::Encoding::GetEncoding(65001));


			for (int i = 0; i < this->FilteredTable->RowCount; i++) {

				sw->Write(this->FilteredTable->Rows[i]->Cells[0]->Value);
				sw->Write(" ");

				sw->Write(this->FilteredTable->Rows[i]->Cells[1]->Value);
				sw->Write(" ");

				sw->Write(this->FilteredTable->Rows[i]->Cells[2]->Value);
				sw->Write(" ");

				sw->Write(this->FilteredTable->Rows[i]->Cells[3]->Value);
				sw->Write(" ");

				sw->Write(this->FilteredTable->Rows[i]->Cells[4]->Value);
				sw->Write(" ");

				sw->Write(this->FilteredTable->Rows[i]->Cells[5]->Value);
				sw->Write(" ");

				sw->Write(this->FilteredTable->Rows[i]->Cells[6]->Value);
				if (i != this->FilteredTable->RowCount - 1)	sw->WriteLine();
			}
			sw->Close();
		}
	}
}
};
}
