#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(void)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	WIndowsFormTemplete::MyForm form;
	Application::Run(%form);
}