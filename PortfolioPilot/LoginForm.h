#pragma once
#include "User.h";

namespace PortfolioPilot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnCancel;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(47, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(672, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(205, 147);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(388, 38);
			this->tbEmail->TabIndex = 3;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &MyForm::tbEmail_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 239);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(205, 233);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(388, 38);
			this->tbPassword->TabIndex = 5;
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnOk->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnOk->Location = System::Drawing::Point(205, 359);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(139, 54);
			this->btnOk->TabIndex = 6;
			this->btnOk->Text = L"Ok";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &MyForm::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCancel->Location = System::Drawing::Point(454, 359);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(139, 54);
			this->btnCancel->TabIndex = 8;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(831, 448);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"Login Form";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

	   public: User^ user = nullptr;
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ email = this->tbEmail->Text;
	String^ password = this->tbPassword->Text;

	//Testing if the user entered a password and an email
	if (email->Length == 0 || password->Length == 0)
	{
		MessageBox::Show("Please enter email and password",
			"Email or Password Empty",MessageBoxButtons::OK );
			return;
	}

	try {
		//Connection to the database
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=stocks;Integrated Security=True;Encrypt=True;Trust Server Certificate=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		//Getting the email and password
		String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);

		//Executing the querry
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
			user = gcnew User;
			user->Userid = reader->GetInt32(0);
			user->Username = reader->GetString(1);
			user->email = reader->GetString(2);
			user->Password = reader->GetString(3);
			user->register_date = reader->GetString(4);
			this->Close();
		}
		else
		{
			MessageBox::Show("Email or password is incorrect",
				"Email or Password Error", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ e)
	{
		//Failed to connect to database msg
		MessageBox::Show("Failed to connect to database",
			"Connection Error", MessageBoxButtons::OK);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
