#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;




int SuperTrans(int i, Label^ label1, Label^ label2) {
	int i_o = Convert::ToInt32(label1->Text);
	int r = 0;
	while (i_o)
	{
		r = r * 10 + (i_o % 10);
		i_o /= 10;
	}
	label2->Text = r.ToString();
	return r;
}


