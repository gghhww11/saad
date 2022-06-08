#include "StartWindow.h"
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	HousingExchange::StartWindow startForm;
	Application::Run(% startForm);
}


