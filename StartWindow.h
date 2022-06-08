#pragma once
#include "AuthorWindow.h"
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>

namespace HousingExchange {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class StartWindow : public System::Windows::Forms::Form
	{
	public:
		StartWindow(void)
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
		~StartWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelHeading;
	protected:

	protected:


	private: System::Windows::Forms::Button^ startButton;
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
			this->labelHeading = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelHeading
			// 
			this->labelHeading->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelHeading->AutoSize = true;
			this->labelHeading->BackColor = System::Drawing::Color::Transparent;
			this->labelHeading->Font = (gcnew System::Drawing::Font(L"MV Boli", 30));
			this->labelHeading->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->labelHeading->Location = System::Drawing::Point(139, 47);
			this->labelHeading->Name = L"labelHeading";
			this->labelHeading->Size = System::Drawing::Size(690, 105);
			this->labelHeading->TabIndex = 1;
			this->labelHeading->Text = L"ќбмен жильем";
			// 
			// startButton
			// 
			this->startButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->startButton->BackColor = System::Drawing::Color::Sienna;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Impact", 19.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->startButton->Location = System::Drawing::Point(157, 205);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(627, 127);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"start";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &StartWindow::button_Click);
			// 
			// StartWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(974, 429);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->labelHeading);
			this->MaximizeBox = false;
			this->Name = L"StartWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StartWindow";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &StartWindow::StartWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StartWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		startButton->Focus();
		}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		
		AuthorWindow^ mainForm = gcnew AuthorWindow();
		mainForm->Show();
		StartWindow::Hide();
		}
	
	};
}
