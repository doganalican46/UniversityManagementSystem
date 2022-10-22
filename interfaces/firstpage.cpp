#include"firstpage.h"
#include"loginpage.h"//student
#include"loginpage_i.h"
#include"loginpage_fc.h"
using namespace universitymanagementsystem;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	universitymanagementsystem::firstpage form;
	Application::Run(% form);
}