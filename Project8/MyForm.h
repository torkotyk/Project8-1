#pragma once
#using <Microsoft.VisualBasic.dll>
#include <windows.h>

namespace Project8 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(173, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1109, 128);
			this->label1->TabIndex = 0;
			this->label1->Text = L"11.Створити чергу цілих чисел. Обчислити кількість \r\nдвозначних елементів черги.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(439, 64);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ведіть розмир черги";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(471, 224);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 73);
			this->textBox1->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 64;
			this->listBox1->Location = System::Drawing::Point(37, 326);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(428, 388);
			this->listBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(519, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(318, 89);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Додати елемент ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(499, 441);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(357, 89);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Видалити елемент ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(295, 764);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(318, 89);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Порахувати";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(982, 180);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 408);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1412, 1070);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::Collections::Generic::Queue<int> myQueue1;
		int lastAddedValue;
		bool isQueueInitialized = false;

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isQueueInitialized) {
			isQueueInitialized = true;
		}

		// Отримуємо розмір черги з textBox1
		int size = Convert::ToInt32(textBox1->Text);

		if (myQueue1.Count < size) {
			String^ valueInput = Microsoft::VisualBasic::Interaction::InputBox("Enter a queue element:", "Add Element", "0");

			if (valueInput == "") {
				return;
			}

			int inputValue = Convert::ToInt32(valueInput);

			// Додаємо елемент в чергу
			myQueue1.Enqueue(inputValue);
			listBox1->Items->Add(inputValue.ToString());
			lastAddedValue = inputValue;
		}
		else {
			listBox1->Items->Add("Limit of numbers reached");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isQueueInitialized)
	{
		if (myQueue1.Count > 0)
		{
			myQueue1.Dequeue();
			listBox1->Items->Clear();
			for each (int value in myQueue1)
			{
				listBox1->Items->Add(value.ToString());
			}
		}
		else
		{
			listBox1->Items->Add("Queue is empty");
		}
	}
	else
	{
		listBox1->Items->Add("Queue has not been initialized yet");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isQueueInitialized) {
		int twoDigitCount = 0;

		for each (int value in myQueue1) {
			if (value >= 10 && value <= 99) { // Перевірка, чи є число двозначним
				twoDigitCount++;
			}
		}

		String^ message = "The number of two-digit numbers in the queue is: " + twoDigitCount.ToString();
		MessageBox::Show(message, "Two-Digit Count", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Queue has not been initialized yet", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
