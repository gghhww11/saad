#pragma once
#include "SearchWindow.h"
#include "Registration.h"
#include "House.h"
#include <fstream>
#include <string>
#include "House.h"
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>
#include <locale.h>	// ��� ������ ��������� �� �����

namespace HousingExchange {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� AuthorWindow
	/// </summary>
	public ref class AuthorWindow : public System::Windows::Forms::Form
	{
	public:
		AuthorWindow(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~AuthorWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labPass;
	protected:
	private: System::Windows::Forms::Label^ labLog;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ login;
	private: System::Windows::Forms::Label^ heading;

	private: System::Windows::Forms::Button^ buttonLogIn;
	private: System::Windows::Forms::Button^ buttonCheckIn;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labPass = (gcnew System::Windows::Forms::Label());
			this->labLog = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::TextBox());
			this->heading = (gcnew System::Windows::Forms::Label());
			this->buttonLogIn = (gcnew System::Windows::Forms::Button());
			this->buttonCheckIn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labPass
			// 
			this->labPass->AutoSize = true;
			this->labPass->BackColor = System::Drawing::Color::Transparent;
			this->labPass->Location = System::Drawing::Point(336, 354);
			this->labPass->Name = L"labPass";
			this->labPass->Size = System::Drawing::Size(86, 25);
			this->labPass->TabIndex = 13;
			this->labPass->Text = L"������";
			// 
			// labLog
			// 
			this->labLog->AutoSize = true;
			this->labLog->BackColor = System::Drawing::Color::Transparent;
			this->labLog->Location = System::Drawing::Point(342, 279);
			this->labLog->Name = L"labLog";
			this->labLog->Size = System::Drawing::Size(71, 25);
			this->labLog->TabIndex = 12;
			this->labLog->Text = L"�����";
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(264, 385);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(227, 31);
			this->password->TabIndex = 11;
			this->password->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AuthorWindow::textPass_KeyPress);
			// 
			// login
			// 
			this->login->Location = System::Drawing::Point(264, 310);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(227, 31);
			this->login->TabIndex = 10;
			this->login->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AuthorWindow::textLogin_KeyPress);
			// 
			// heading
			// 
			this->heading->AutoSize = true;
			this->heading->BackColor = System::Drawing::Color::Transparent;
			this->heading->Font = (gcnew System::Drawing::Font(L"MV Boli", 30));
			this->heading->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->heading->Location = System::Drawing::Point(46, 122);
			this->heading->Name = L"heading";
			this->heading->Size = System::Drawing::Size(690, 105);
			this->heading->TabIndex = 9;
			this->heading->Text = L"����� ������";
			this->heading->Click += gcnew System::EventHandler(this, &AuthorWindow::heading_Click);
			// 
			// buttonLogIn
			// 
			this->buttonLogIn->BackColor = System::Drawing::Color::Sienna;
			this->buttonLogIn->Location = System::Drawing::Point(264, 469);
			this->buttonLogIn->Name = L"buttonLogIn";
			this->buttonLogIn->Size = System::Drawing::Size(227, 51);
			this->buttonLogIn->TabIndex = 7;
			this->buttonLogIn->Text = L"�����";
			this->buttonLogIn->UseVisualStyleBackColor = false;
			this->buttonLogIn->Click += gcnew System::EventHandler(this, &AuthorWindow::buttonLogIn_Click);
			// 
			// buttonCheckIn
			// 
			this->buttonCheckIn->BackColor = System::Drawing::SystemColors::Info;
			this->buttonCheckIn->Location = System::Drawing::Point(264, 538);
			this->buttonCheckIn->Name = L"buttonCheckIn";
			this->buttonCheckIn->Size = System::Drawing::Size(227, 45);
			this->buttonCheckIn->TabIndex = 14;
			this->buttonCheckIn->Text = L"�����������";
			this->buttonCheckIn->UseVisualStyleBackColor = false;
			this->buttonCheckIn->Click += gcnew System::EventHandler(this, &AuthorWindow::buttonCheckIn_Click);
			// 
			// AuthorWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->ClientSize = System::Drawing::Size(757, 783);
			this->Controls->Add(this->buttonCheckIn);
			this->Controls->Add(this->labPass);
			this->Controls->Add(this->labLog);
			this->Controls->Add(this->password);
			this->Controls->Add(this->login);
			this->Controls->Add(this->heading);
			this->Controls->Add(this->buttonLogIn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AuthorWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AuthorWindow";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AuthorWindow::AuthorWindow_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonLogIn_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ userName = login->Text;
		String^ pass = password->Text;
		
		// �������� ������ - ������, ������ ������� ����� ��� ������
		if (authorization(userName, pass)) {
			// �������� ��, ���������� �������, �������� ������� � ����� �����
			SearchWindow^ searchForm = gcnew SearchWindow(this, userName, true);
			searchForm->Show();
			AuthorWindow::Hide();
			login->Text = "";
			password->Text = "";
		}
		else {
			System::Windows::Forms::DialogResult result;
			result = System::Windows::Forms::MessageBox::Show("������������ ����� ��� ������!", "������", 
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Boolean authorization(String^ login, String^ password) {

		bool flag = false;
		string line;
		int i = -1;
		int j = 0;
		setlocale(LC_ALL, "Rus");
		std::ifstream users("C:\\Users\\home\\login.txt");
		std::ifstream pass("C:\\Users\\home\\password.txt");
		
		while ((!users.eof()) && (!flag)) {
			std::getline(users, line);
			String^ user = gcnew System::String(line.c_str());
			i++;
			if (user == login) {
				flag = true;
				break;
			}
		}
		users.close();
		
		if (!flag) return false;

		while ((!pass.eof()) && (j != i)) {
			std::getline(pass, line);
			j++;
		}
		getline(pass, line);
		pass.close();

		String^ s = gcnew System::String(line.c_str());
		if (password == s) return true;
		else return false;

	}
	private: System::Void buttonCheckIn_Click(System::Object^ sender, System::EventArgs^ e) {
				
		Registration^ checkInForm = gcnew Registration(this);
		checkInForm->Show();
		AuthorWindow::Hide();
	}
	private: System::Void textLogin_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// ������ ������������ ������
		if (e->KeyChar == (char)Keys::Enter){
			password->Focus();
		}
	}
	private: System::Void textPass_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (char)Keys::Enter)
		{
			buttonLogIn->Enabled = true;
			buttonLogIn->Focus();
		}
		
	}
	
	private: System::Void AuthorWindow_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
private: System::Void heading_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
