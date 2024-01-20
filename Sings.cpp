#include "MyForm.h"

namespace Calcula {
	/*                      /** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\
													Realization of sings
										SINGS [+,-,*,/,=,(,),pow,sqrt,sin,tan,ctan,%];
							 At this place when we can add the sings for further processing
	*/

	void MyForm::plus_Click(System::Object^ sender, System::EventArgs^ e) {
		bool plusPress = true;
		if (canAddSing(currentText, 0, plusPress)) {
			if (!currentText[0] != '+' && !currentText->EndsWith("+")) {
				if (currentText->Length <= 13) {
					currentText += "+";
					label1->Text = currentText;
					plusCheked = true;
				}

				else {
					// Size Work
					if (currentText->Length >= 14) {
						if (stopSmallSize < 3) {
							label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
						}
						currentText += "+";
						label1->Text = currentText;
						++stopSmallSize;

					}
				}
			}

		}
	}

	void MyForm::minus_Click(System::Object^ sender, System::EventArgs^ e) {
		bool minusPress = true;
		if (currentText->Length <= 13) {
			if (canAddSing(currentText, minusPress, 0)) {

				if (!currentText[0] != '-' && !currentText->EndsWith("-")) {
					currentText += "-";
					label1->Text = currentText;

					minusCheked = true;
				}
			}
		}
		// Work Size
		else {
			if (currentText->Length >= 14) {
				if (canAddSing(currentText, minusPress, 0)) {
					if (stopSmallSize < 3) {
						label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
					}
					currentText += "-";
					label1->Text = currentText;
					++stopSmallSize;
				}
			}
		}

	}

	void MyForm::multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		if (canAddSing(currentText, 0,0)) {
			if (!currentText[0] != '*' && !currentText->EndsWith("*")) {
				if (currentText->Length <= 13) {
					currentText += "*";
					label1->Text = currentText;

					multiplyCheked = true;
				}
				// Work Size
				else {
					if (currentText->Length >= 14) {
						if (stopSmallSize < 3) {
							label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
						}
						currentText += "*";
						label1->Text = currentText;
						++stopSmallSize;

					}
				}
			}
		}

	}

	void MyForm::divide_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentText[0] == '0' && currentText->Length == 1 || currentText[0] == '(') {
			MessageBox::Show("Invalid input: Cannot start with division operator.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}


		if (canAddSing(currentText, 0,0)) {
			if (!currentText[0] != '/' && !currentText->EndsWith("/")) {
				if (currentText->Length <= 13) {
					currentText += "/";
					label1->Text = currentText;

					divideCheked = true;
				}
				// Work Size
				else {
					if (currentText->Length >= 14) {
						if (stopSmallSize < 3) {
							label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
						}
						currentText += "/";
						label1->Text = currentText;
						++stopSmallSize;
					}
				}
			}
		}
	}



	void MyForm::equals_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentText->Length > 2) {
			if (currentText[0] == '-')
			{
				currentText = "0" + currentText;
				label1->Text = currentText;
			}
			else
			{
				label1->Text = currentText;
			}
			double result = Logic(currentText, label1);
			currentText = result.ToString();
			label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, 28);

			//Ctrl + Z
			Last_ResultCtrlZ = result.ToString();
		}
	}

	void MyForm::Bracket_left_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Char::IsDigit(currentText[currentText->Length - 1]))
		{
			currentText += "*";
		}


		if (currentText == "0") {
			currentText->Substring(1);
			currentText = "(";
			label1->Text = currentText;

		}
		if (currentText->Length <= 13) {
			currentText += "(";
			label1->Text = currentText;
		}

		// Work Size
		else {
			if (currentText->Length >= 14) {
				if (stopSmallSize < 3) {
					label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
				}
				currentText += "(";
				label1->Text = currentText;
				++stopSmallSize;

			}
		}
	}

	void MyForm::Bracket_right_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentText->Length <= 13) {
			currentText += ")";
			label1->Text = currentText;
		}
		// Work Size
		else {
			if (currentText->Length >= 14) {
				if (stopSmallSize < 3) {
					label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
				}
				currentText += ")";
				label1->Text = currentText;
				++stopSmallSize;

			}
		}

	}

	void MyForm::Degree_Click(System::Object^ sender, System::EventArgs^ e) {
		if (canAddSing(currentText, 0,0)) {
			if (!currentText[0] != '^' && !currentText->EndsWith("^")) {
				if (currentText->Length <= 13) {
					if (currentText->Length != 0 && currentText != "0") {
						currentText += "^";
						label1->Text = currentText;
					}

				}	// Work Size
				else {
					if (currentText->Length >= 14) {
						if (canAddSing(currentText, 0, 0)) {
							if (stopSmallSize < 3) {
								label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
							}
							currentText += "^";
							label1->Text = currentText;
							++stopSmallSize;
						}
					}
				}
			}
		}
	}

	void MyForm::Root_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentText == "0") {
			currentText->Substring(1);
			currentText = L"\u221A";
			label1->Text = currentText;
		}


		else {
			if (!currentText[0] != L'\u221A' && !currentText->EndsWith(L"\u221A")) {
				if (currentText->Length <= 13) {
					if (currentText->Length != 0 && currentText != "0") {
						currentText += L"\u221A";
						label1->Text = currentText;
					}
				}	// Work Size
				else {
					if (currentText->Length >= 14) {
						if (stopSmallSize < 3) {
							label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
						}
						currentText += L"\u221A";
						label1->Text = currentText;
						++stopSmallSize;
						
					}
				}
			}

		}
	}

	void MyForm::sin_Click(System::Object^ sender, System::EventArgs^ e) {

		if (currentText == "0") {
			currentText->Substring(1);
			currentText = "sin";
			label1->Text = currentText;
		}

		else {
			if (currentText->Length <= 13) {
				if (currentText->Length != 0 && currentText != "0") {
					currentText += "sin";
					label1->Text = currentText;
				}
			}	// Work Size

			else {
				if (currentText->Length >= 14) {
					if (stopSmallSize < 3) {
						label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
					}
					currentText += "sin";
					label1->Text = currentText;
					++stopSmallSize;

				}
			}
		}
	}

	void MyForm::cos_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentText == "0") {

			currentText->Substring(1);
			currentText = "cos";
			label1->Text = currentText;

		}
		else {
			if (currentText->Length <= 13) {
				if (currentText->Length != 0 && currentText != "0") {
					currentText += "cos";
					label1->Text = currentText;
				}

			}	// Work Size
			else {
				if (currentText->Length >= 14) {
					if (stopSmallSize < 3) {
						label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
					}
					currentText += "cos";
					label1->Text = currentText;
					++stopSmallSize;
				}
			}
		}

	}

	void MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentText == "0") {
			currentText->Substring(1);
			currentText = "tan";
			label1->Text = currentText;
		}

		else {
			if (currentText->Length <= 13) {
				if (currentText->Length != 0 && currentText != "0") {
					currentText += "tan";
					label1->Text = currentText;
				}
			}
		}
		// Work Size
		if (currentText->Length >= 14) {

			if (stopSmallSize < 3) {
				label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
			}
			currentText += "tan";
			label1->Text = currentText;
			++stopSmallSize;
		}
	}

	void MyForm::percentage_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentText[0] == '0' && currentText->Length == 1 || currentText[0] == '(') {
			MessageBox::Show("Invalid input: Cannot start with percentage operator.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (canAddSing(currentText, 0,0)) {
			if (!currentText[0] != '%' && !currentText->EndsWith("%")) {
				if (currentText->Length <= 13) {
					currentText += "%";
					label1->Text = currentText;
				}

				else {
					// Size Work
					if (currentText->Length >= 14) {
						if (stopSmallSize < 3) {
							label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
						}
						currentText += "%";
						label1->Text = currentText;
						++stopSmallSize;

					}
				}
			}

		}
	}



}




