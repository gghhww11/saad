#pragma once
#include "House.h"
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>

namespace HousingExchange {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для SearchWindow
	/// </summary>
	public ref class SearchWindow : public System::Windows::Forms::Form
	{
	private:
		System::Windows::Forms::Form^ otherForm;

		String^ user;
		bool logIn;
		bool changeable;

		String^ city;
		String^ disrict;
		String^ street;
		String^ corp;
		String^ type;
		int numOfRooms;
		String^ year;
		bool park;
		bool store;
		bool school;

	private: System::Windows::Forms::ListView^ listView;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::Button^ buttonExchange;
	private: System::Windows::Forms::Button^ buttonCanselExchange;


	public:
		SearchWindow(System::Windows::Forms::Form^ o, String^ h, bool log)
		{
			InitializeComponent();
			otherForm = o;
			user = h;
			logIn = log;
			changeable = (logIn) ? true : false;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SearchWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ buttonSearch;
	protected:

	private: System::Windows::Forms::CheckBox^ checkSchool;
	protected:

	private: System::Windows::Forms::CheckBox^ checkStore;

	private: System::Windows::Forms::CheckBox^ checkPark;

	private: System::Windows::Forms::Label^ labelInfo;

	private: System::Windows::Forms::Label^ labelYear;

	private: System::Windows::Forms::MaskedTextBox^ textYear;
	private: System::Windows::Forms::Label^ labelRooms;



	private: System::Windows::Forms::ComboBox^ comboType;
	private: System::Windows::Forms::Label^ labelType;


	private: System::Windows::Forms::ComboBox^ comboDistrict;
	private: System::Windows::Forms::Label^ labelDistrict;






	private: System::Windows::Forms::ComboBox^ comboCity;
	private: System::Windows::Forms::Label^ labelCity;




	private: System::Windows::Forms::Label^ labelResults;

	private: System::Windows::Forms::NumericUpDown^ numericRooms;
	private: System::Windows::Forms::Button^ buttonExit;

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
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->checkSchool = (gcnew System::Windows::Forms::CheckBox());
			this->checkStore = (gcnew System::Windows::Forms::CheckBox());
			this->checkPark = (gcnew System::Windows::Forms::CheckBox());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->labelYear = (gcnew System::Windows::Forms::Label());
			this->textYear = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelRooms = (gcnew System::Windows::Forms::Label());
			this->comboType = (gcnew System::Windows::Forms::ComboBox());
			this->labelType = (gcnew System::Windows::Forms::Label());
			this->comboDistrict = (gcnew System::Windows::Forms::ComboBox());
			this->labelDistrict = (gcnew System::Windows::Forms::Label());
			this->comboCity = (gcnew System::Windows::Forms::ComboBox());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->labelResults = (gcnew System::Windows::Forms::Label());
			this->numericRooms = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->listView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->buttonExchange = (gcnew System::Windows::Forms::Button());
			this->buttonCanselExchange = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericRooms))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonSearch
			// 
			this->buttonSearch->BackColor = System::Drawing::Color::Sienna;
			this->buttonSearch->Location = System::Drawing::Point(198, 641);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(184, 77);
			this->buttonSearch->TabIndex = 34;
			this->buttonSearch->Text = L"ПОИСК";
			this->buttonSearch->UseVisualStyleBackColor = false;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &SearchWindow::buttonSearch_Click);
			// 
			// checkSchool
			// 
			this->checkSchool->AutoSize = true;
			this->checkSchool->BackColor = System::Drawing::Color::Transparent;
			this->checkSchool->Location = System::Drawing::Point(238, 549);
			this->checkSchool->Name = L"checkSchool";
			this->checkSchool->Size = System::Drawing::Size(242, 29);
			this->checkSchool->TabIndex = 33;
			this->checkSchool->Text = L"Школа, детский сад";
			this->checkSchool->UseVisualStyleBackColor = false;
			// 
			// checkStore
			// 
			this->checkStore->AutoSize = true;
			this->checkStore->BackColor = System::Drawing::Color::Transparent;
			this->checkStore->Location = System::Drawing::Point(238, 498);
			this->checkStore->Name = L"checkStore";
			this->checkStore->Size = System::Drawing::Size(144, 29);
			this->checkStore->TabIndex = 32;
			this->checkStore->Text = L"Магазины";
			this->checkStore->UseVisualStyleBackColor = false;
			// 
			// checkPark
			// 
			this->checkPark->AutoSize = true;
			this->checkPark->BackColor = System::Drawing::Color::Transparent;
			this->checkPark->Location = System::Drawing::Point(238, 448);
			this->checkPark->Name = L"checkPark";
			this->checkPark->Size = System::Drawing::Size(94, 29);
			this->checkPark->TabIndex = 31;
			this->checkPark->Text = L"Парк";
			this->checkPark->UseVisualStyleBackColor = false;
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->BackColor = System::Drawing::Color::Transparent;
			this->labelInfo->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelInfo->Location = System::Drawing::Point(188, 390);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(216, 29);
			this->labelInfo->TabIndex = 30;
			this->labelInfo->Text = L"Инфраструктура";
			// 
			// labelYear
			// 
			this->labelYear->AutoSize = true;
			this->labelYear->BackColor = System::Drawing::Color::Transparent;
			this->labelYear->Location = System::Drawing::Point(54, 267);
			this->labelYear->Name = L"labelYear";
			this->labelYear->Size = System::Drawing::Size(158, 25);
			this->labelYear->TabIndex = 29;
			this->labelYear->Text = L"Год постройки";
			// 
			// textYear
			// 
			this->textYear->Location = System::Drawing::Point(238, 264);
			this->textYear->Mask = L"0000";
			this->textYear->Name = L"textYear";
			this->textYear->Size = System::Drawing::Size(75, 31);
			this->textYear->TabIndex = 28;
			// 
			// labelRooms
			// 
			this->labelRooms->AutoSize = true;
			this->labelRooms->BackColor = System::Drawing::Color::Transparent;
			this->labelRooms->Location = System::Drawing::Point(125, 321);
			this->labelRooms->Name = L"labelRooms";
			this->labelRooms->Size = System::Drawing::Size(87, 25);
			this->labelRooms->TabIndex = 26;
			this->labelRooms->Text = L"Комнат";
			// 
			// comboType
			// 
			this->comboType->FormattingEnabled = true;
			this->comboType->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Блочный", L"Деревянный", L"Кирпичный", L"Монолитный",
					L"Панельный"
			});
			this->comboType->Location = System::Drawing::Point(238, 211);
			this->comboType->Name = L"comboType";
			this->comboType->Size = System::Drawing::Size(244, 33);
			this->comboType->TabIndex = 25;
			this->comboType->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchWindow::comboType_SelectedIndexChanged);
			// 
			// labelType
			// 
			this->labelType->AutoSize = true;
			this->labelType->BackColor = System::Drawing::Color::Transparent;
			this->labelType->Location = System::Drawing::Point(108, 215);
			this->labelType->Name = L"labelType";
			this->labelType->Size = System::Drawing::Size(106, 25);
			this->labelType->TabIndex = 24;
			this->labelType->Text = L"Тип дома";
			// 
			// comboDistrict
			// 
			this->comboDistrict->FormattingEnabled = true;
			this->comboDistrict->Location = System::Drawing::Point(238, 153);
			this->comboDistrict->Name = L"comboDistrict";
			this->comboDistrict->Size = System::Drawing::Size(244, 33);
			this->comboDistrict->TabIndex = 23;
			this->comboDistrict->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchWindow::comboDistrict_SelectedIndexChanged);
			// 
			// labelDistrict
			// 
			this->labelDistrict->AutoSize = true;
			this->labelDistrict->BackColor = System::Drawing::Color::Transparent;
			this->labelDistrict->Location = System::Drawing::Point(138, 161);
			this->labelDistrict->Name = L"labelDistrict";
			this->labelDistrict->Size = System::Drawing::Size(74, 25);
			this->labelDistrict->TabIndex = 22;
			this->labelDistrict->Text = L"Район";
			// 
			// comboCity
			// 
			this->comboCity->FormattingEnabled = true;
			this->comboCity->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Магнитогорск", L"Челябинск" });
			this->comboCity->Location = System::Drawing::Point(238, 93);
			this->comboCity->Name = L"comboCity";
			this->comboCity->Size = System::Drawing::Size(244, 33);
			this->comboCity->TabIndex = 36;
			this->comboCity->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchWindow::comboCity_SelectedIndexChanged);
			// 
			// labelCity
			// 
			this->labelCity->AutoSize = true;
			this->labelCity->BackColor = System::Drawing::Color::Transparent;
			this->labelCity->Location = System::Drawing::Point(142, 101);
			this->labelCity->Name = L"labelCity";
			this->labelCity->Size = System::Drawing::Size(72, 25);
			this->labelCity->TabIndex = 35;
			this->labelCity->Text = L"Город";
			// 
			// labelResults
			// 
			this->labelResults->AutoSize = true;
			this->labelResults->BackColor = System::Drawing::Color::Transparent;
			this->labelResults->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelResults->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelResults->Location = System::Drawing::Point(888, 25);
			this->labelResults->Name = L"labelResults";
			this->labelResults->Size = System::Drawing::Size(433, 41);
			this->labelResults->TabIndex = 40;
			this->labelResults->Text = L"РЕЗУЛЬТАТЫ ПОИСКА";
			// 
			// numericRooms
			// 
			this->numericRooms->Location = System::Drawing::Point(238, 319);
			this->numericRooms->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericRooms->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericRooms->Name = L"numericRooms";
			this->numericRooms->Size = System::Drawing::Size(90, 31);
			this->numericRooms->TabIndex = 41;
			this->numericRooms->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::White;
			this->buttonExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonExit->Location = System::Drawing::Point(198, 724);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(184, 63);
			this->buttonExit->TabIndex = 42;
			this->buttonExit->Text = L"Главное меню";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &SearchWindow::buttonExit_Click);
			// 
			// listView
			// 
			this->listView->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(10) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9, this->columnHeader10
			});
			this->listView->FullRowSelect = true;
			this->listView->GridLines = true;
			this->listView->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView->HideSelection = false;
			this->listView->HoverSelection = true;
			this->listView->Location = System::Drawing::Point(590, 93);
			this->listView->MultiSelect = false;
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(1051, 638);
			this->listView->TabIndex = 43;
			this->listView->UseCompatibleStateImageBehavior = false;
			this->listView->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Город";
			this->columnHeader1->Width = 94;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Район";
			this->columnHeader2->Width = 85;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Улица";
			this->columnHeader3->Width = 75;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Корпус";
			this->columnHeader4->Width = 59;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Тип дома";
			this->columnHeader5->Width = 75;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Год постройки";
			this->columnHeader6->Width = 65;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Комнат";
			this->columnHeader7->Width = 63;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Парк";
			this->columnHeader8->Width = 59;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Магазины";
			this->columnHeader9->Width = 66;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Школа/дет.сад";
			this->columnHeader10->Width = 81;
			// 
			// buttonExchange
			// 
			this->buttonExchange->BackColor = System::Drawing::Color::White;
			this->buttonExchange->Location = System::Drawing::Point(590, 741);
			this->buttonExchange->Name = L"buttonExchange";
			this->buttonExchange->Size = System::Drawing::Size(369, 46);
			this->buttonExchange->TabIndex = 44;
			this->buttonExchange->Text = L"Согласиться на обмен";
			this->buttonExchange->UseVisualStyleBackColor = false;
			this->buttonExchange->Click += gcnew System::EventHandler(this, &SearchWindow::buttonExchange_Click);
			// 
			// buttonCanselExchange
			// 
			this->buttonCanselExchange->BackColor = System::Drawing::Color::White;
			this->buttonCanselExchange->Location = System::Drawing::Point(965, 740);
			this->buttonCanselExchange->Name = L"buttonCanselExchange";
			this->buttonCanselExchange->Size = System::Drawing::Size(368, 46);
			this->buttonCanselExchange->TabIndex = 45;
			this->buttonCanselExchange->Text = L"Отказаться от обмена";
			this->buttonCanselExchange->UseVisualStyleBackColor = false;
			this->buttonCanselExchange->Click += gcnew System::EventHandler(this, &SearchWindow::buttonCancel_Click);
			// 
			// SearchWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->ClientSize = System::Drawing::Size(1974, 813);
			this->Controls->Add(this->buttonCanselExchange);
			this->Controls->Add(this->buttonExchange);
			this->Controls->Add(this->listView);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->numericRooms);
			this->Controls->Add(this->labelResults);
			this->Controls->Add(this->comboCity);
			this->Controls->Add(this->labelCity);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->checkSchool);
			this->Controls->Add(this->checkStore);
			this->Controls->Add(this->checkPark);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->labelYear);
			this->Controls->Add(this->textYear);
			this->Controls->Add(this->labelRooms);
			this->Controls->Add(this->comboType);
			this->Controls->Add(this->labelType);
			this->Controls->Add(this->comboDistrict);
			this->Controls->Add(this->labelDistrict);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(2000, 884);
			this->Name = L"SearchWindow";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SearchWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SearchWindow::SearchWindow_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SearchWindow::SearchWindow_FormClosed);
			this->Load += gcnew System::EventHandler(this, &SearchWindow::SearchWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericRooms))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SearchWindow_Load(System::Object^ sender, System::EventArgs^ e) {

		// зарегистрированный пользователь
		if (logIn) {

			BaseOfHouses database;
			House h = database.Find(user);

			//инициализация полей согласно информации о пользователе
			comboCity->SelectedItem = gcnew System::String(h.requirements.rcity.c_str());
			comboDistrict->Text = gcnew System::String(h.requirements.rdistrict.c_str());
			comboType->Text = gcnew System::String(h.requirements.rhouseType.c_str());
			auto year = std::to_string(h.requirements.ryear);
			textYear->Text = gcnew System::String(year.c_str());
			numericRooms->Value = h.requirements.rnumOfRooms;
			checkPark->Checked = h.requirements.rparkAvlbt;
			checkStore->Checked = h.requirements.rstoreAvlbt;
			checkSchool->Checked = h.requirements.rschoolAvlbt;

		}
		// незарегистрированный пользователь
		else {

			System::Windows::Forms::MessageBox::Show(
				"Вы успешно зарегистрировались в системе HOME swap,\n укажите Ваши требования к жилью, чтобы найти дом Вашей мечты!",
				"Справка", MessageBoxButtons::OK, MessageBoxIcon::Information);

			comboCity->Focus();
			comboCity->Text = "Не указано";
			comboDistrict->Text = "Не указано";
			comboType->Text = "Не указано";
			textYear->Text = "";
			numericRooms->Value = 1;
			checkPark->Checked = false;
			checkStore->Checked = false;
			checkSchool->Checked = false;
		}

	}
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (changeable) {
			this->Hide();
			otherForm->Show();
		}
		else {
			MessageBox::Show("Заполните требования к жилью, чтобы вернуться", "", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			return;
		}
	}
	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {

		if ((disrict == nullptr) || (type == nullptr) || (city == nullptr) || (year == "")) {
			System::Windows::Forms::MessageBox::Show("Заполните все поля", "Недостаточно данных", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int y = stoi(msclr::interop::marshal_as< std::string>(textYear->Text));
		if (y <= 1800) {
			System::Windows::Forms::MessageBox::Show("Некорректный год постройки", "Некорректные данные", MessageBoxButtons::OK, MessageBoxIcon::Stop);
			return;
		}
		listView->Items->Clear();
		BaseOfHouses database;

		//изменение сохранений в объекте класса
		if (changeable) {
			//using namespace Runtime::InteropServices;

			House house = database.Find(user);

			String^ city1 = city;
			String^ district1 = disrict;
			String^ type1 = type;
			String^ year1 = textYear->Text;

			park = checkPark->Checked;
			store = checkStore->Checked;
			school = checkSchool->Checked;

			// инициализация пользователя

			// если пользователь ввел кракозябру
			if (house.requirements.rcity != msclr::interop::marshal_as< std::string >(comboCity->Text)
				|| (house.requirements.rdistrict != msclr::interop::marshal_as< std::string >(comboDistrict->Text))
				|| (house.requirements.rhouseType != msclr::interop::marshal_as< std::string >(comboType->Text))) {

				System::Windows::Forms::MessageBox::Show("Выберите город, или район, или тип дома из выпадающего списка", "Некорректные данные",
					MessageBoxButtons::OK, MessageBoxIcon::Stop);
				return;
			}

			house.requirements.rcity = msclr::interop::marshal_as< std::string >(city1);
			house.requirements.rdistrict = msclr::interop::marshal_as< std::string >(district1);
			house.requirements.rhouseType = msclr::interop::marshal_as< std::string>(type1);
			house.requirements.ryear = stoi(msclr::interop::marshal_as< std::string>(year1));

			if (numOfRooms == 0) numOfRooms = stoi(msclr::interop::marshal_as< std::string >(numericRooms->Text));
			if (numOfRooms > 20) numOfRooms = 20;
			house.requirements.rnumOfRooms = numOfRooms;
			house.requirements.rparkAvlbt = park;
			house.requirements.rstoreAvlbt = store;
			house.requirements.rschoolAvlbt = school;

			//перезапись (ффункцию написать)
			BaseOfHouses database;
			database.Edit(house);
		}
		else {
			String^ city1 = city;
			String^ district1 = disrict;
			String^ type1 = type;
			String^ year1 = textYear->Text;

			park = checkPark->Checked;
			store = checkStore->Checked;
			school = checkSchool->Checked;
			// инициализация пользователя

			House temp;
			temp.requirements.rcity = (city1 == nullptr) ? "Не указано" : msclr::interop::marshal_as< std::string >(city1);
			temp.requirements.rdistrict = (district1 == nullptr) ? "Не указано" : msclr::interop::marshal_as< std::string >(district1);
			temp.requirements.rhouseType = (type1 == nullptr) ? "Не указано" : msclr::interop::marshal_as< std::string>(type1);
			temp.requirements.ryear = stoi(msclr::interop::marshal_as< std::string>(year1));

			if (numOfRooms == 0) numOfRooms = stoi(msclr::interop::marshal_as< std::string >(numericRooms->Text));
			if (numOfRooms > 20) numOfRooms = 20;
			temp.requirements.rnumOfRooms = numOfRooms;
			temp.requirements.rparkAvlbt = park;
			temp.requirements.rstoreAvlbt = store;
			temp.requirements.rschoolAvlbt = school;

			database.AddRequirements(temp);
			changeable = true;

		}
		// поиск подходящих вариантов
		House house = database.Find(user);
		list<House> list = database.FindExchage(house);
		if (list.size() == 0) MessageBox::Show("Упс", "Ничего не найдено", MessageBoxButtons::OK, MessageBoxIcon::None);
		else CreateListView(list);
	}
	private: System::Void buttonExchange_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView->SelectedIndices == nullptr) {
			MessageBox::Show("Выберите дом", "", MessageBoxButtons::OK, MessageBoxIcon::None);
			return;
		}
		else {
			BaseOfHouses database;
			int index = listView->SelectedIndices[0];
			database.Exchange(user, index);

		}
		MessageBox::Show("Наш сервис преступает к работе с документами.", "Поздравляем с обменом", MessageBoxButtons::OK, MessageBoxIcon::None);
		this->Close();
		otherForm->Show();
	}
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		BaseOfHouses database;
		if (!changeable) {
			House i;
			database.AddRequirements(i);
		}
		House h = database.Find(user);
		database.Refusual(h);

		this->Hide();
		otherForm->Show();
	}
	private: System::Void comboType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		int item = comboType->SelectedIndex;
		switch (item) {
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
	private: System::Void comboCity_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		int item = comboCity->SelectedIndex;
		switch (item)
		{
		
		case 0: {
			city = "Магнитогорск";
			comboDistrict->Items->Clear();
			comboDistrict->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ленинский", L"Орджоникидзевский", L"Правобережный" });
			break;
		}
		case 1: {
			city = "Челябинск";
			comboDistrict->Items->Clear();
			comboDistrict->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"Калининский", L"Курчатовский", L"Ленинский", L"Металлургический", L"Советский", L"Трактозаводский", L"Центральный" });
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

	}
	private: System::Void numericRooms_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		numOfRooms = (int)numericRooms->Value;
	}
	private: System::Void CreateListView(list<House> list) {
		System::Windows::Forms::ListViewItem^ viewItem;
		string s;

		for (House house : list) {

			viewItem = gcnew Windows::Forms::ListViewItem(gcnew System::String(house.city.c_str()));
			viewItem->SubItems->Add(gcnew System::String(house.district.c_str()));
			viewItem->SubItems->Add(gcnew System::String(house.street.c_str()));
			viewItem->SubItems->Add(gcnew System::String(house.corp.c_str()));
			viewItem->SubItems->Add(gcnew System::String(house.houseType.c_str()));
			viewItem->SubItems->Add(gcnew System::String(std::to_string(house.year).c_str()));
			viewItem->SubItems->Add(gcnew System::String(std::to_string(house.numOfRooms).c_str()));
			s = (house.parkAvlbt) ? "есть" : "";
			viewItem->SubItems->Add(gcnew System::String(s.c_str()));
			s = (house.storeAvlbt) ? "есть" : "";
			viewItem->SubItems->Add(gcnew System::String(s.c_str()));
			s = (house.schoolAvlbt) ? "есть" : "";
			viewItem->SubItems->Add(gcnew System::String(s.c_str()));
			viewItem->SubItems->Add(gcnew System::String(house.owner.c_str()));

			this->listView->Items->Add(viewItem);
		}
	}
	private: System::Void SearchWindow_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void SearchWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (!changeable) {
			MessageBox::Show("Вы не можете закрыть приложение на этом шаге, заполните требования и нажмите на кнопку поиска", "", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			e->Cancel = true;
		}
	}
	};
}

