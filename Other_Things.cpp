#include "MyForm.h"
#include "Test.h"
#include <msclr/marshal_cppstd.h> // Include this header for string conversions


namespace Calcula {
	/*                      /** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\
													Realization other things
	OTHER [Keyboard input,button Delete,button Delete All,timer1,button MyForm(CTRL + Z),button What,button Return(button1),button Desing];
							 At this place when we can add the remaining for further processing
	*/



	bool label1_Check = false;

	void MyForm::MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Check if the pressed key is a digit from '1' to '9' 
		if (e->KeyChar >= '0' && e->KeyChar <= '9') {
			if (e->KeyChar == '0') {
				zero_Click(sender, e);
			}
			else if (e->KeyChar == '1') {
				one_Click(sender, e);
			}
			else if (e->KeyChar == '2') {
				two_Click(sender, e);
			}
			else if (e->KeyChar == '3') {
				three_Click(sender, e);
			}
			else if (e->KeyChar == '4') {
				four_Click(sender, e);
			}
			else if (e->KeyChar == '5') {
				five_Click(sender, e);
			}
			else if (e->KeyChar == '6') {
				six_Click(sender, e);
			}
			else if (e->KeyChar == '7') {
				seven_Click(sender, e);
			}
			else if (e->KeyChar == '8') {
				eight_Click(sender, e);
			}
			else if (e->KeyChar == '9') {
				nine_Click(sender, e);
			}
		}
		if (e->KeyChar == '+' || e->KeyChar == '-' || e->KeyChar == '*' || e->KeyChar == '/' || e->KeyChar == '.' || e->KeyChar == '=' || e->KeyChar == '(' || e->KeyChar == ')' ||e->KeyChar == '^' || e->KeyChar == '%')
		{
			if (e->KeyChar == '+') {
				plus_Click(sender, e);
			}
			else if (e->KeyChar == '-') {
				minus_Click(sender, e);
			}
			else if (e->KeyChar == '*') {
				multiply_Click(sender, e);
			}
			else if (e->KeyChar == '/' || e->KeyChar == '?') {
				divide_Click(sender, e);
			}
			else if (e->KeyChar == '.') {
				point_Click_1(sender, e);
			}
			else if (e->KeyChar == '=') {
				equals_Click(sender, e);
			}
			else if (e->KeyChar == '(') {
				Bracket_left_Click(sender, e);
			}
			else if (e->KeyChar == ')') {
				Bracket_right_Click(sender, e);
			}
			else if (e->KeyChar == '^') {
				Bracket_right_Click(sender, e);
			}
			else if (e->KeyChar == '%') {
				percentage_Click(sender, e);
			}
		}
		e->Handled = true;
	}

	void MyForm::Devete_Click(System::Object^ sender, System::EventArgs^ e) {
		int a = currentText->Length;

		if (currentText->Length > 0) {
			if (currentText->EndsWith("sin") || currentText->EndsWith("cos") || currentText->EndsWith("tan")) {
				currentText = currentText->Substring(0, currentText->Length - 3);
				AddTextToCurrentText();
				label1->Text = currentText;
				label2->Text = currentText;
				timer1->Enabled = true;

			}
			else {
				currentText = currentText->Substring(0, currentText->Length - 1);

				AddTextToCurrentText();
				label1->Text = currentText;
				label2->Text = currentText;
				timer1->Enabled = true;


			}

			if (currentText->Length == 0) {
				currentText = "0";
				Debag_Point = true;
				operationPerformed = false;
				AddTextToCurrentText();
				label1->Text = currentText;
				label2->Text = currentText;
				timer1->Enabled = true;


			}
			else {
				// For point
				if (currentText == ".")
				{
					plusCheked = true;
				}

				if (a > 14 && a <= 17) {
					label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints + 2.25);
				}
				else {
					--a;
				}
				label1->Text = currentText;

				timer1->Enabled = true;

			}
		}	if (stopSmallSize != 0) {
				--stopSmallSize;
		}

		plusCheked = true;
	}

	void MyForm::C_Click(System::Object^ sender, System::EventArgs^ e) {
		currentText = "0";
		operationPerformed = false;
		label1->Text = currentText;
		label2->Text = currentText;

		Debag_Point = true;

		plusCheked = true;

		stopSmallSize = 0;

		label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, 28);

	}

	void MyForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		currentText2 = currentText;

		if (textChangedFlag) {	// Change control
			if (currentText->Length > 1) {

				double result = Logic(currentText2, label2);
				label2->Text = result.ToString();
			}
			textChangedFlag = false;
			timer1->Enabled = true;
		}
		else {
			timer1->Enabled = false;
		}
	}
	

	void MyForm::label1_Click(System::Object^ sender, System::EventArgs^ e) {
		// turn on CTRL + V
		if (count_Click_Label1 % 2 == 0) {
			label1_Check = true;
		}
		// turn off CTRL + V
		else {
			label1_Check = false;
		}
		++count_Click_Label1;
	}

	void MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//Devete
		if (e->KeyCode == Keys::Back)
		{
			Devete_Click(sender, e);
		}
		// Ctrl + Z. Return old result, its gonna working when you alredy use button =.
		if (e->Control && e->KeyCode == Keys::Z)
		{

			label1->Text = Last_ResultCtrlZ;

		}
		//	Start Test, you can do it if choses bool Start on true in file Test.cpp.
		if (e->Control && e->KeyCode == Keys::T)
		{
			StartTest(currentText);
			
		}
		//Ctrl + V, you can do it if you click on label1 one time and have any equation in storing your computer. Ctrl + V = insert 
		if (label1_Check == true && e->Control && e->KeyCode == Keys::V) {

			// Get text from the clipboard
			currentText = Clipboard::GetText();
		
			string input = msclr::interop::marshal_as<string>(System::String::Concat(currentText));

			if (input.size() == 0) {
				currentText = "0";
				return;
			}
			
			// Check every character in the string
			for (int i = 0; i < input.size(); ++i) {
				if (!Char::IsDigit(input[i]) &&
					input[i] != '+' &&
					input[i] != '-' &&
					input[i] != '*' &&
					input[i] != '/' &&
					input[i] != '(' &&
					input[i] != ')' &&
					input[i] != '^' &&
					input[i] != '%' &&
					input[i] != '?' &&							// root
					input[i] != 's' && input[i] != 'i' && input[i] != 'n' &&
					input[i] != 'c' && input[i] != 'o' && input[i] != 's' &&
					input[i] != 't' && input[i] != 'a' && input[i] != 'n') {
					
					MessageBox::Show("Invalid input: Invalid characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					cout << input[i];
					currentText = "0";
					label1->Text = currentText;
					operationPerformed = false;			// for numbers
					return;
				}
			}
			
			label1->Text = currentText;	
			operationPerformed = false;

			// можно получить сразу результат тогда это исправит баг на 02 и размером 
		}

		e->Handled = true;

	}


	void MyForm::What_Click(System::Object^ sender, System::EventArgs^ e) {
		// program small 

		if (isExpanded == true) {
			this->Size = System::Drawing::Size(435, 470); // right // down 

			if (ChangePhoto == true) {
				System::Drawing::Image^ backgroundImage = this->BackgroundImage;
				System::Drawing::Size newBackgroundSize(435, 470);
				System::Drawing::Image^ resizedBackgroundImage = ResizeImage(backgroundImage, newBackgroundSize);

				this->BackgroundImage = resizedBackgroundImage;
			}

			this->zero->Size = System::Drawing::Size(88, 58);
			this->zero->Location = System::Drawing::Point(86, 360);

			this->What->Visible = false;
			this->What->Location = System::Drawing::Point(86, 100);

			this->label1->MaximumSize = System::Drawing::Size(600, 80);
			this->label1->Size = System::Drawing::Size(440, 99);
			this->label1->Location = System::Drawing::Point(4, 40);


			this->label2->MaximumSize = System::Drawing::Size(600, 30);
			this->label2->Size = System::Drawing::Size(440, 99);
			this->label2->Location = System::Drawing::Point(-4, 120);
			

			isExpanded = false;
		}
	}

	void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) { // Return
		this->Size = System::Drawing::Size(346, 413);

		// return '0' in its place
		this->zero->Size = System::Drawing::Size(188, 70);
		this->zero->Location = System::Drawing::Point(36, 363);

		// return sing '?' &&7 do visible 
		this->What->Location = System::Drawing::Point(-2, 363);
		this->What->Visible = true;
		isExpanded = true;

		// return label in its place 

		this->label1->Location = System::Drawing::Point(16, 40);
		this->label1->MaximumSize = System::Drawing::Size(340, 80);
		
		this->label2->Location = System::Drawing::Point(6, 120);
		this->label2->MaximumSize = System::Drawing::Size(340, 30);



	// timer for photo 
		if (ChangePhoto == true) {
			System::Drawing::Image^ backgroundImage = this->BackgroundImage;
			System::Drawing::Size newBackgroundSize(346, 413); 
			System::Drawing::Image^ resizedBackgroundImage = ResizeImage(backgroundImage, newBackgroundSize);
				
			this->BackgroundImage = resizedBackgroundImage;
		}
	}

	void MyForm::Desing_Click(System::Object^ sender, System::EventArgs^ e) {
		DesingCalculator^ f2 = gcnew DesingCalculator();

		f2->ShowDialog();
		newDesingTimer->Start();
	}

		void  MyForm::newDesingTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
			if (textChangedFlag = false) {

			}
			else if (TransmitLinks_to_Photo::SelectedImage != nullptr) {

				this->BackgroundImage = ResizeImage(TransmitLinks_to_Photo::SelectedImage, this->ClientSize);
				transmitData->SelectedImage = nullptr;
				newDesingTimer->Enabled = false;
				ChangePhoto = true;
			}

			else if (!String::IsNullOrEmpty(TransmitLinks_to_Photo::Path)) {
				System::Drawing::Image^ imageFromFile = System::Drawing::Image::FromFile(TransmitLinks_to_Photo::Path);
				// Resize the image to fit the form's client area 
				this->BackgroundImage = ResizeImage(imageFromFile, this->ClientSize);
				transmitData->Path = nullptr;
				newDesingTimer->Enabled = false;
				ChangePhoto = true;


				if (textChangedFlag) {
					textChangedFlag = false;
					newDesingTimer->Enabled = true;
				}
				else {
					newDesingTimer->Enabled = false;
				}
			}
			if (textChangedFlag) {
				textChangedFlag = false;
				newDesingTimer->Enabled = true;
			}
			else {
				newDesingTimer->Enabled = false;
			}

			if (TransmitLinks_to_Photo::getColorNumber == true) {
				Console::WriteLine("GetColoNumber " + TransmitLinks_to_Photo::getColorNumber);
				FooBlack();

				if (textChangedFlag) {
					textChangedFlag = false;
					newDesingTimer->Enabled = true;
				}
				else {
					newDesingTimer->Enabled = false;
				}
			}

			else if (TransmitLinks_to_Photo::getColorNumber == false) {
				Console::WriteLine("GetColoNumber " + TransmitLinks_to_Photo::getColorNumber);
				FooWhite();
				if (textChangedFlag) {
					textChangedFlag = false;
					newDesingTimer->Enabled = true;
				}
				else {
					newDesingTimer->Enabled = false;
				}
			}
		}


	void MyForm::button11_Click(System::Object^ sender, System::EventArgs^ e) {
			
		label1->Text = Last_ResultCtrlZ;

	}


}