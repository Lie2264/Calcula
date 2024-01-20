#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    //*
    SetConsoleOutputCP(CP_UTF8);            // Git Hub
    //*

    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    Calcula::MyForm form;
    Application::Run(% form);



    return 0;
}

