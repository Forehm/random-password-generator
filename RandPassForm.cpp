#include "RandPassForm.h"
#include <msclr\marshal_cppstd.h>
#include <ctime>
#include <string>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


std::string RandPass(int number_of_symbols)
{
	srand(time(NULL));
	char arr[] = { 'q', 'w', 'e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','1','2','3','4','5','6','7','8','9','0' };
	std::string pass;

	for (int i = 0; i < number_of_symbols; i++)
	{
		pass += arr[rand() % 36];
	}

	return pass;
}


bool is_numeric(std::string str)
{
	char arr[10] = { '0','1','2','3','4','5','6','7','8','9' };

	for (int i = 0; i < str.size(); ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (str[i] == arr[j])
			{
				break;
			}
			if (str[i] != arr[j] && j == 9)
			{
				return false;
			}
		}
	}
	return true;
}



void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	RandomPass::MyForm form;
	Application::Run(% form);
}



System::Void RandomPass::MyForm::textBoxNumber_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	
}

System::Void RandomPass::MyForm::textBoxPassword_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	
}

System::Void RandomPass::MyForm::buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string number_string = msclr::interop::marshal_as<std::string>(textBoxNumber->Text);
	
	
	int number;


	if (number_string == "")
	{
		number = 0;
		textBoxPassword->Text = gcnew String("<- Print the number of symbols");



	}
	else
	{
		bool check = is_numeric(number_string);

		if (check)
		{
			number = stoi(number_string);

			textBoxPassword->Text = gcnew String(RandPass(number).c_str());
		}
		else
		{
			textBoxPassword->Text = "<-print only a number";
		}
	}

	

	 
	


	
}
