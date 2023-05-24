#include "ModelForm.h"

System::Void KPOS::ModelForm::ModelForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	int n = OSystem::OS()->getProcessesNumber();

	for (int i = 0; i < 8; i++)
	{
		groupBoxes[i]->Visible = (i < n);

		if (i < n)
			textBox9->Text += L"Процесс " + (i + 1).ToString() + L" создан.\r\n";
	}

	textBox9->Text += L"\r\n";

	while (true) 
	{
		for (int i = 0; i < n; i++)
		{

		}
	}
}
