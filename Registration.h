#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>
#include <msclr/marshal.h> 
#include <msclr\marshal_cppstd.h>
#include "House.h"
#include "SearchWindow.h"

namespace HousingExchange {

	using namespace System;
	//using namespace System::Configuration;
	//using namespace Runtime::InteropServices;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	//using namespace msclr::interop;
	/// <summary>
	/// Сводка для Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	private:
		System::Windows::Forms::Form^ otherForm;

		House* house = {};

		String^ city;
		String^ disrict;
		String^ type;
		int numOfRooms;
		String^ year;
		bool park = false;
		bool store = false;
		bool school = false;

	public:
		Registration(System::Windows::Forms::Form^ o)
		{
			InitializeComponent();
			otherForm = o;

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelCreateName;
	private: System::Windows::Forms::Label^ labelCreatePassword;
	private: System::Windows::Forms::TextBox^ textLogin;
	private: System::Windows::Forms::TextBox^ textPassword;
	private: System::Windows::Forms::Label^ labelInfo;
	private: System::Windows::Forms::Label^ labelDistrict;
	protected:







	private: System::Windows::Forms::ComboBox^ comboDistrict;
	private: System::Windows::Forms::Label^ labelType;


	private: System::Windows::Forms::ComboBox^ comboType;
	private: System::Windows::Forms::Label^ labelRooms;


	private: System::Windows::Forms::MaskedTextBox^ textYear;
	private: System::Windows::Forms::Label^ labelYear;
	private: System::Windows::Forms::Label^ labelnfo1;







	private: System::Windows::Forms::CheckBox^ checkPark;
	private: System::Windows::Forms::CheckBox^ checkStore;
	private: System::Windows::Forms::CheckBox^ checkSchool;
	private: System::Windows::Forms::Button^ buttonInput;
	private: System::Windows::Forms::Label^ labelCity;





	private: System::Windows::Forms::ComboBox^ comboCity;
	private: System::Windows::Forms::Label^ labelStreet;


	private: System::Windows::Forms::TextBox^ textStreet;
	private: System::Windows::Forms::Label^ labelCorp;


	private: System::Windows::Forms::TextBox^ textCorp;
	private: System::Windows::Forms::Button^ buttonExit;


	private: System::Windows::Forms::NumericUpDown^ numericRooms;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelCreateName = (gcnew System::Windows::Forms::Label());
			this->labelCreatePassword = (gcnew System::Windows::Forms::Label());
			this->textLogin = (gcnew System::Windows::Forms::TextBox());
			this->textPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->labelDistrict = (gcnew System::Windows::Forms::Label());
			this->comboDistrict = (gcnew System::Windows::Forms::ComboBox());
			this->labelType = (gcnew System::Windows::Forms::Label());
			this->comboType = (gcnew System::Windows::Forms::ComboBox());
			this->labelRooms = (gcnew System::Windows::Forms::Label());
			this->textYear = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelYear = (gcnew System::Windows::Forms::Label());
			this->labelnfo1 = (gcnew System::Windows::Forms::Label());
			this->checkPark = (gcnew System::Windows::Forms::CheckBox());
			this->checkStore = (gcnew System::Windows::Forms::CheckBox());
			this->checkSchool = (gcnew System::Windows::Forms::CheckBox());
			this->buttonInput = (gcnew System::Windows::Forms::Button());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->comboCity = (gcnew System::Windows::Forms::ComboBox());
			this->labelStreet = (gcnew System::Windows::Forms::Label());
			this->textStreet = (gcnew System::Windows::Forms::TextBox());
			this->labelCorp = (gcnew System::Windows::Forms::Label());
			this->textCorp = (gcnew System::Windows::Forms::TextBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->numericRooms = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericRooms))->BeginInit();
			this->SuspendLayout();
			// 
			// labelCreateName
			// 
			this->labelCreateName->AutoSize = true;
			this->labelCreateName->BackColor = System::Drawing::Color::Transparent;
			this->labelCreateName->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->labelCreateName->Location = System::Drawing::Point(221, 39);
			this->labelCreateName->Name = L"labelCreateName";
			this->labelCreateName->Size = System::Drawing::Size(222, 29);
			this->labelCreateName->TabIndex = 0;
			this->labelCreateName->Text = L"Придумайте логин";
			// 
			// labelCreatePassword
			// 
			this->labelCreatePassword->AutoSize = true;
			this->labelCreatePassword->BackColor = System::Drawing::Color::Transparent;
			this->labelCreatePassword->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->labelCreatePassword->Location = System::Drawing::Point(221, 111);
			this->labelCreatePassword->Name = L"labelCreatePassword";
			this->labelCreatePassword->Size = System::Drawing::Size(233, 29);
			this->labelCreatePassword->TabIndex = 1;
			this->labelCreatePassword->Text = L"Придумайте пароль";
			// 
			// textLogin
			// 
			this->textLogin->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->textLogin->Location = System::Drawing::Point(226, 71);
			this->textLogin->Name = L"textLogin";
			this->textLogin->Size = System::Drawing::Size(217, 36);
			this->textLogin->TabIndex = 2;
			this->textLogin->TextChanged += gcnew System::EventHandler(this, &Registration::textLogin_TextChanged);
			// 
			// textPassword
			// 
			this->textPassword->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->textPassword->Location = System::Drawing::Point(229, 143);
			this->textPassword->Name = L"textPassword";
			this->textPassword->Size = System::Drawing::Size(214, 36);
			this->textPassword->TabIndex = 3;
			this->textPassword->TextChanged += gcnew System::EventHandler(this, &Registration::textPassword_TextChanged);
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Font = (gcnew System::Drawing::Font(L"Constantia", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelInfo->Location = System::Drawing::Point(68, 218);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(513, 36);
			this->labelInfo->TabIndex = 4;
			this->labelInfo->Text = L"Заполните данные о вашем жилье!";
			// 
			// labelDistrict
			// 
			this->labelDistrict->AutoSize = true;
			this->labelDistrict->BackColor = System::Drawing::Color::Transparent;
			this->labelDistrict->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->labelDistrict->Location = System::Drawing::Point(178, 376);
			this->labelDistrict->Name = L"labelDistrict";
			this->labelDistrict->Size = System::Drawing::Size(81, 29);
			this->labelDistrict->TabIndex = 6;
			this->labelDistrict->Text = L"Район";
			// 
			// comboDistrict
			// 
			this->comboDistrict->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->comboDistrict->FormattingEnabled = true;
			this->comboDistrict->Location = System::Drawing::Point(278, 372);
			this->comboDistrict->Name = L"comboDistrict";
			this->comboDistrict->Size = System::Drawing::Size(244, 37);
			this->comboDistrict->TabIndex = 7;
			this->comboDistrict->SelectedIndexChanged += gcnew System::EventHandler(this, &Registration::comboDistrict_SelectedIndexChanged);
			// 
			// labelType
			// 
			this->labelType->AutoSize = true;
			this->labelType->BackColor = System::Drawing::Color::Transparent;
			this->labelType->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->labelType->Location = System::Drawing::Point(148, 430);
			this->labelType->Name = L"labelType";
			this->labelType->Size = System::Drawing::Size(115, 29);
			this->labelType->TabIndex = 8;
			this->labelType->Text = L"Тип дома";
			// 
			// comboType
			// 
			this->comboType->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->comboType->FormattingEnabled = true;
			this->comboType->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Блочный", L"Деревянный", L"Кирпичный", L"Монолитный",
					L"Панельный"
			});
			this->comboType->Location = System::Drawing::Point(278, 426);
			this->comboType->Name = L"comboType";
			this->comboType->Size = System::Drawing::Size(244, 37);
			this->comboType->TabIndex = 9;
			this->comboType->SelectedIndexChanged += gcnew System::EventHandler(this, &Registration::comboType_SelectedIndexChanged);
			// 
			// labelRooms
			// 
			this->labelRooms->AutoSize = true;
			this->labelRooms->BackColor = System::Drawing::Color::Transparent;
			this->labelRooms->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->labelRooms->Location = System::Drawing::Point(165, 536);
			this->labelRooms->Name = L"labelRooms";
			this->labelRooms->Size = System::Drawing::Size(95, 29);
			this->labelRooms->TabIndex = 10;
			this->labelRooms->Text = L"Комнат";
			// 
			// textYear
			// 
			this->textYear->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->textYear->Location = System::Drawing::Point(278, 479);
			this->textYear->Mask = L"0000";
			this->textYear->Name = L"textYear";
			this->textYear->Size = System::Drawing::Size(58, 36);
			this->textYear->TabIndex = 12;
			// 
			// labelYear
			// 
			this->labelYear->AutoSize = true;
			this->labelYear->BackColor = System::Drawing::Color::Transparent;
			this->labelYear->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->labelYear->Location = System::Drawing::Point(94, 482);
			this->labelYear->Name = L"labelYear";
			this->labelYear->Size = System::Drawing::Size(173, 29);
			this->labelYear->TabIndex = 13;
			this->labelYear->Text = L"Год постройки";
			// 
			// labelnfo1
			// 
			this->labelnfo1->AutoSize = true;
			this->labelnfo1->BackColor = System::Drawing::Color::Transparent;
			this->labelnfo1->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->labelnfo1->Location = System::Drawing::Point(224, 596);
			this->labelnfo1->Name = L"labelnfo1";
			this->labelnfo1->Size = System::Drawing::Size(197, 29);
			this->labelnfo1->TabIndex = 17;
			this->labelnfo1->Text = L"Инфраструктура";
			// 
			// checkPark
			// 
			this->checkPark->AutoSize = true;
			this->checkPark->BackColor = System::Drawing::Color::Transparent;
			this->checkPark->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->checkPark->Location = System::Drawing::Point(274, 654);
			this->checkPark->Name = L"checkPark";
			this->checkPark->Size = System::Drawing::Size(102, 33);
			this->checkPark->TabIndex = 18;
			this->checkPark->Text = L"Парк";
			this->checkPark->UseVisualStyleBackColor = false;
			// 
			// checkStore
			// 
			this->checkStore->AutoSize = true;
			this->checkStore->BackColor = System::Drawing::Color::Transparent;
			this->checkStore->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->checkStore->Location = System::Drawing::Point(274, 704);
			this->checkStore->Name = L"checkStore";
			this->checkStore->Size = System::Drawing::Size(158, 33);
			this->checkStore->TabIndex = 19;
			this->checkStore->Text = L"Магазины";
			this->checkStore->UseVisualStyleBackColor = false;
			// 
			// checkSchool
			// 
			this->checkSchool->AutoSize = true;
			this->checkSchool->BackColor = System::Drawing::Color::Transparent;
			this->checkSchool->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->checkSchool->Location = System::Drawing::Point(274, 755);
			this->checkSchool->Name = L"checkSchool";
			this->checkSchool->Size = System::Drawing::Size(262, 33);
			this->checkSchool->TabIndex = 20;
			this->checkSchool->Text = L"Школа, детский сад";
			this->checkSchool->UseVisualStyleBackColor = false;
			// 
			// buttonInput
			// 
			this->buttonInput->BackColor = System::Drawing::Color::Sienna;
			this->buttonInput->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonInput->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->buttonInput->Location = System::Drawing::Point(226, 818);
			this->buttonInput->Name = L"buttonInput";
			this->buttonInput->Size = System::Drawing::Size(184, 68);
			this->buttonInput->TabIndex = 21;
			this->buttonInput->Text = L"ГОТОВО";
			this->buttonInput->UseVisualStyleBackColor = false;
			this->buttonInput->Click += gcnew System::EventHandler(this, &Registration::buttonInput_Click);
			// 
			// labelCity
			// 
			this->labelCity->AutoSize = true;
			this->labelCity->BackColor = System::Drawing::Color::Transparent;
			this->labelCity->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->labelCity->Location = System::Drawing::Point(176, 288);
			this->labelCity->Name = L"labelCity";
			this->labelCity->Size = System::Drawing::Size(74, 29);
			this->labelCity->TabIndex = 22;
			this->labelCity->Text = L"Город";
			// 
			// comboCity
			// 
			this->comboCity->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->comboCity->FormattingEnabled = true;
			this->comboCity->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Магнитогорск", L"Челябинск" });
			this->comboCity->Location = System::Drawing::Point(275, 280);
			this->comboCity->Name = L"comboCity";
			this->comboCity->Size = System::Drawing::Size(244, 37);
			this->comboCity->TabIndex = 23;
			this->comboCity->SelectedIndexChanged += gcnew System::EventHandler(this, &Registration::comboCity_SelectedIndexChanged);
			// 
			// labelStreet
			// 
			this->labelStreet->AutoSize = true;
			this->labelStreet->BackColor = System::Drawing::Color::Transparent;
			this->labelStreet->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->labelStreet->Location = System::Drawing::Point(56, 323);
			this->labelStreet->Name = L"labelStreet";
			this->labelStreet->Size = System::Drawing::Size(79, 29);
			this->labelStreet->TabIndex = 24;
			this->labelStreet->Text = L"Улица";
			// 
			// textStreet
			// 
			this->textStreet->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->textStreet->Location = System::Drawing::Point(156, 323);
			this->textStreet->Name = L"textStreet";
			this->textStreet->Size = System::Drawing::Size(229, 36);
			this->textStreet->TabIndex = 25;
			// 
			// labelCorp
			// 
			this->labelCorp->AutoSize = true;
			this->labelCorp->BackColor = System::Drawing::Color::Transparent;
			this->labelCorp->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->labelCorp->Location = System::Drawing::Point(407, 326);
			this->labelCorp->Name = L"labelCorp";
			this->labelCorp->Size = System::Drawing::Size(87, 29);
			this->labelCorp->TabIndex = 26;
			this->labelCorp->Text = L"корпус";
			// 
			// textCorp
			// 
			this->textCorp->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->textCorp->Location = System::Drawing::Point(494, 323);
			this->textCorp->Name = L"textCorp";
			this->textCorp->Size = System::Drawing::Size(87, 36);
			this->textCorp->TabIndex = 27;
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::SystemColors::Info;
			this->buttonExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->buttonExit->Location = System::Drawing::Point(226, 910);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(184, 48);
			this->buttonExit->TabIndex = 28;
			this->buttonExit->Text = L"Назад";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Registration::buttonExit_Click);
			// 
			// numericRooms
			// 
			this->numericRooms->Font = (gcnew System::Drawing::Font(L"Constantia", 8.875F));
			this->numericRooms->Location = System::Drawing::Point(278, 536);
			this->numericRooms->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericRooms->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericRooms->Name = L"numericRooms";
			this->numericRooms->Size = System::Drawing::Size(90, 36);
			this->numericRooms->TabIndex = 30;
			this->numericRooms->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericRooms->ValueChanged += gcnew System::EventHandler(this, &Registration::numericRooms_ValueChanged);
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(650, 1068);
			this->Controls->Add(this->numericRooms);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->textCorp);
			this->Controls->Add(this->labelCorp);
			this->Controls->Add(this->textStreet);
			this->Controls->Add(this->labelStreet);
			this->Controls->Add(this->comboCity);
			this->Controls->Add(this->labelCity);
			this->Controls->Add(this->buttonInput);
			this->Controls->Add(this->checkSchool);
			this->Controls->Add(this->checkStore);
			this->Controls->Add(this->checkPark);
			this->Controls->Add(this->labelnfo1);
			this->Controls->Add(this->labelYear);
			this->Controls->Add(this->textYear);
			this->Controls->Add(this->labelRooms);
			this->Controls->Add(this->comboType);
			this->Controls->Add(this->labelType);
			this->Controls->Add(this->comboDistrict);
			this->Controls->Add(this->labelDistrict);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->textPassword);
			this->Controls->Add(this->textLogin);
			this->Controls->Add(this->labelCreatePassword);
			this->Controls->Add(this->labelCreateName);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Registration::Registration_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Registration::Registration_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericRooms))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Registration_Load(System::Object^ sender, System::EventArgs^ e) {
		textLogin->Text = "";
		textPassword->Text = "";
		comboCity->Text = "Не указано";
		textStreet->Text = "";
		textCorp->Text = "";
		comboDistrict->Text = "Не указано";
		comboType->Text = "Не указано";
		textYear->Text = "";
		numericRooms->Value = 1;
		checkPark->Checked = false;
		checkStore->Checked = false;
		checkSchool->Checked = false;
	}
	private: System::Void comboCity_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		int item = comboCity->SelectedIndex;
		switch (item)
		{
		/*
		
		case 0: {
			city = "Копейск";
			comboDistrict->Items->Clear();
			comboDistrict->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Центральный", L"Потанино", L"Горняк", L"Старокомышинск", L"Новостройка" });
			break;
		}*/
		case 0: {
			city = "Магнитогорск";
			comboDistrict->Items->Clear();
			comboDistrict->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ленинский", L"Орджоникидзевский", L"Правобережный" });
			break;
		}
		case 1: {
			city = "Челябинск";
			comboDistrict->Items->Clear();
			comboDistrict->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Калининский", L"Курчатовский", L"Ленинский", L"Металлургический",
					L"Советский", L"Трактозаводский", L"Центральный"
			});
			break;
		}
		default: {
			comboDistrict->Items->Clear();
			comboDistrict->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Не указано" });
			comboDistrict->Text = "Не указано";
			comboDistrict->Enabled = false;
			city = "Не указано";
			break;
		}
		}
		comboDistrict->Text = "Не указано";
		disrict = nullptr;
	}
	private: System::Void comboType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		int item = comboType->SelectedIndex;
		switch (item)
		{
		case 0: {
			type = "Блочный";
			break;
		}
		case 1: {
			type = "Деревянный";
			break;
		}
		case 2: {
			type = "Кирпичный";
			break;
		}
		case 3: {
			type = "Монолитный";
			break;
		}
		case 4: {
			type = "Панельный";
			break;
		}
		default: {
			comboType->Text = "Не указано";
			type = "Не указано";
			break;
		}
		}
	}
	private: System::Void comboDistrict_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		int item = comboDistrict->SelectedIndex;

		/*
		if (city == "Копейск") {

			switch (item)
			{
			case 0: {
				disrict = "Центральный";
				break;
			}
			case 1: {
				disrict = "Потанино";
				break;
			}
			case 2: {
				disrict = "Горняк";
				break;
			}
			case 3: {
				disrict = "Старокомышинск";
				break;
			}
			case 4: {
				disrict = "Новостройка";
				break;
			}
			default: {
				disrict = "Не указано";
				break;
			}
			}

		}
		else */
		if (city == "Магнитогорск") {

			switch (item)
			{
			case 0: {
				disrict = "Ленинский";
				break;
			}
			case 1: {
				disrict = "Орджоникидзевский";
				break;
			}
			case 2: {
				disrict = "Правобережный";
				break;
			}
			default: {
				disrict = "Не указано";
				break;
			}
			}
		}
		else if (city = "Челябинск") {

			switch (item)
			{
			case 0: {
				disrict = "Калининский";
				break;
			}
			case 1: {
				disrict = "Курчатовский";
				break;
			}
			case 2: {
				disrict = "Ленинский";
				break;
			}
			case 3: {
				disrict = "Металлургический";
				break;
			}
			case 4: {
				disrict = "Советский";
				break;
			}
			case 5: {
				disrict = "Трактозаводский";
				break;
			}
			case 6: {
				disrict = "Центральный";
				break;
			}
			default: {
				disrict = "Не указано";
				break;
			}
			}

		}
		else disrict = "Не указано";
	}
	private: System::Void numericRooms_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		numOfRooms = (int)numericRooms->Value;
	}
	private: System::Void buttonInput_Click(System::Object^ sender, System::EventArgs^ e) {
		using namespace Runtime::InteropServices;

		String^ login = textLogin->Text;
		String^ password = textPassword->Text;
		String^ street = textStreet->Text;
		String^ corp = textCorp->Text;
		String^ city1 = city;
		String^ district1 = disrict;
		String^ type1 = type;
		String^ year1 = textYear->Text;

		park = checkPark->Checked;
		store = checkStore->Checked;
		school = checkSchool->Checked;

		System::Windows::Forms::DialogResult result;

		if ((login == "") || (password == "") || (street == "") || (corp == "") || (disrict == nullptr) || (type == nullptr) || (city == nullptr) || (year == ""))
			result = System::Windows::Forms::MessageBox::Show("Заполните все поля", "Ошибка при регистрации", MessageBoxButtons::OK, MessageBoxIcon::Error);

		if (result != System::Windows::Forms::DialogResult::OK) {

			// инициализация пользователя
			House h = {};
			h.owner = msclr::interop::marshal_as< std::string >(login);
			h.city = msclr::interop::marshal_as< std::string >(city1);
			h.district = msclr::interop::marshal_as< std::string >(district1);
			h.street = msclr::interop::marshal_as<std::string>(street);
			h.corp = msclr::interop::marshal_as<std::string>(corp);
			h.houseType = msclr::interop::marshal_as< std::string>(type1);
			h.year = stoi(msclr::interop::marshal_as< std::string>(year1));

			if (numOfRooms == 0) numOfRooms = stoi(msclr::interop::marshal_as< std::string >(numericRooms->Text));
			if (numOfRooms > 20) numOfRooms = 20;
			h.numOfRooms = numOfRooms;
			h.parkAvlbt = park;
			h.storeAvlbt = store;
			h.schoolAvlbt = school;

			// пароль
			string p = msclr::interop::marshal_as< std::string>(password);

			// добавление в базу данных нового пользователя
			BaseOfHouses base;
			if (base.Add(h, p) == false) {
				MessageBox::Show(
					"Логин занят, придумайте другой", "Ошибка при регистрации",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
				textLogin->Text = "";
				textPassword->Text = "";
				return;
			}

			SearchWindow^ sForm = gcnew SearchWindow(otherForm, login, false);	//инициализация формы
			sForm->Show();
			this->Hide();
		}
	}
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		otherForm->Show();
	}
	private: System::Void Registration_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Вы уверены, что хотите закрыть приложение?",
			"Завершение программы",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning
		);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			e->Cancel = false;
		}
		else {
			e->Cancel = true;
		}

	}
	private: System::Void textPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Registration_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void textLogin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
