#pragma once

namespace RandomPass {

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
	private: System::Windows::Forms::TextBox^ textBoxNumber;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Button^ buttonGenerate;
	protected:

	protected:





	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonGenerate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Location = System::Drawing::Point(12, 92);
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(40, 22);
			this->textBoxNumber->TabIndex = 0;
			this->textBoxNumber->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxNumber_TextChanged);
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(58, 92);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(212, 22);
			this->textBoxPassword->TabIndex = 1;
			this->textBoxPassword->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxPassword_TextChanged);
			// 
			// buttonGenerate
			// 
			this->buttonGenerate->Location = System::Drawing::Point(95, 150);
			this->buttonGenerate->Name = L"buttonGenerate";
			this->buttonGenerate->Size = System::Drawing::Size(89, 23);
			this->buttonGenerate->TabIndex = 2;
			this->buttonGenerate->Text = L"Generate";
			this->buttonGenerate->UseVisualStyleBackColor = true;
			this->buttonGenerate->Click += gcnew System::EventHandler(this, &MyForm::buttonGenerate_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->buttonGenerate);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxNumber);
			this->Name = L"MyForm";
			this->Text = L"random_password";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void textBoxNumber_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBoxPassword_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
