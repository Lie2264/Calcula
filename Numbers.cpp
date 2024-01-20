#include "MyForm.h"

namespace Calcula {
    /*                      /** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\
                                                    Realization of numbers
                                                        NUMBER [0-9] and point[.];
                             At this place when we can add the numbers for further processing
    */

    void MyForm::zero_Click(System::Object^ sender, System::EventArgs^ e) {
        if (currentText[0] == '0' && currentText->Length == 1) {
            return;
        }
        if (!operationPerformed && currentText[0] != '-' && Debag_Point == true && currentText[0] != '('
            && currentText[0] != 'c' && currentText[0] != 's' && currentText[0] != 't' && currentText[0] != L'\u221A') {

            currentText = currentText->Substring(1);
            operationPerformed = true;
        }
        if (currentText->Length <= 13) {
            currentText += "0";
            AddTextToCurrentText();
            label1->Text = currentText;
            timer1->Enabled = true;
        }

        // Size
        else {
            if (currentText->Length >= 14) {     // If the maximum number of digits is reached, reduce the font size.
                if (stopSmallSize < 3) {
                    label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25); 
                }
                currentText += "0";
                AddTextToCurrentText();			// for label2
                label1->Text = currentText;
                timer1->Enabled = true;			// for label2
                ++stopSmallSize;
            }
        }
    }

    void MyForm::one_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!operationPerformed && currentText[0] != '-' && Debag_Point == true && currentText[0] != '('
            && currentText[0] != 'c' && currentText[0] != 's' && currentText[0] != 't' && currentText[0] != L'\u221A') {

            currentText = currentText->Substring(1);
            operationPerformed = true;
        }
        if (currentText->Length <= 13) {


            currentText += "1";
            AddTextToCurrentText();
            label1->Text = currentText;

            timer1->Enabled = true;
        }
        else {
            if (currentText->Length >= 14) {
                if (stopSmallSize < 3) {
                    label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
                }
                currentText += "1"; 
                AddTextToCurrentText();			// for label2
                label1->Text = currentText;
                timer1->Enabled = true;			// for label2
                ++stopSmallSize;
            }
        }
    }

    void MyForm::two_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!operationPerformed && currentText[0] != '-' && Debag_Point == true && currentText[0] != '('
            && currentText[0] != 'c' && currentText[0] != 's' && currentText[0] != 't' && currentText[0] != L'\u221A') {

            currentText = currentText->Substring(1);
            operationPerformed = true;
        }

        if (currentText->Length <= 13) {
            currentText += "2";
            AddTextToCurrentText();
            label1->Text = currentText;
            timer1->Enabled = true;
        }
        else {
            if (currentText->Length >= 14) {
                if (stopSmallSize < 3) {
                    label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25); 
                }
                currentText += "2";
                AddTextToCurrentText();			// for label2
                label1->Text = currentText;
                timer1->Enabled = true;			// for label2
                ++stopSmallSize;
            }
        }

    }


    Void MyForm::three_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!operationPerformed && currentText[0] != '-' && Debag_Point == true && currentText[0] != '('
            && currentText[0] != 'c' && currentText[0] != 's' && currentText[0] != 't' && currentText[0] != L'\u221A') {

            currentText = currentText->Substring(1);
            operationPerformed = true;
        }
        if (currentText->Length <= 13) {
            currentText += "3";
            AddTextToCurrentText();
            label1->Text = currentText;
            timer1->Enabled = true;
        }
        else {
            if (currentText->Length >= 14) {
                if (stopSmallSize < 3) {
                    label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25); 
                }
                currentText += "3";
                AddTextToCurrentText();			// for label2
                label1->Text = currentText;
                timer1->Enabled = true;			// for label2
                ++stopSmallSize;
            }
        }
    }

    void MyForm::four_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!operationPerformed && currentText[0] != '-' && Debag_Point == true && currentText[0] != '('
            && currentText[0] != 'c' && currentText[0] != 's' && currentText[0] != 't' && currentText[0] != L'\u221A') {

            currentText = currentText->Substring(1);
            operationPerformed = true;
        }
        if (currentText->Length <= 13) {
            currentText += "4";
            AddTextToCurrentText();
            label1->Text = currentText;

            timer1->Enabled = true;

        }
        else {
            if (currentText->Length >= 14) {

                // for and if  
                if (stopSmallSize < 3) {
                    label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25); 
                }

                currentText += "4";
                AddTextToCurrentText();			// for label2
                label1->Text = currentText;
                timer1->Enabled = true;			// for label2
                ++stopSmallSize;

            }
        }
    }
    void MyForm::five_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!operationPerformed && currentText[0] != '-' && Debag_Point == true && currentText[0] != '('
            && currentText[0] != 'c' && currentText[0] != 's' && currentText[0] != 't' && currentText[0] != L'\u221A') {

            currentText = currentText->Substring(1);
            operationPerformed = true;
        }
        if (currentText->Length <= 13) {
            currentText += "5";
            AddTextToCurrentText();
            label1->Text = currentText;
            timer1->Enabled = true;
        }
        else {
            if (currentText->Length >= 14) {
                if (stopSmallSize < 3) {
                    label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25); 
                }
                currentText += "5"; 
                AddTextToCurrentText();			// for label2
                label1->Text = currentText;
                timer1->Enabled = true;			// for label2
                ++stopSmallSize;

            }
        }
    }

    void MyForm::six_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!operationPerformed && currentText[0] != '-' && Debag_Point == true && currentText[0] != '('
            && currentText[0] != 'c' && currentText[0] != 's' && currentText[0] != 't' && currentText[0] != L'\u221A') {

            currentText = currentText->Substring(1);
            operationPerformed = true;
        }
        if (currentText->Length <= 13) {
            currentText += "6";
            AddTextToCurrentText();
            label1->Text = currentText;
            timer1->Enabled = true;
        }
        else {
            if (currentText->Length >= 14) {
                if (stopSmallSize < 3) {
                    label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
                }
                currentText += "6";
                AddTextToCurrentText();			// for label2
                label1->Text = currentText;
                timer1->Enabled = true;			// for label2
                ++stopSmallSize;
            }
        }

    }


    Void MyForm::seven_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!operationPerformed && currentText[0] != '-' && Debag_Point == true && currentText[0] != '('
            && currentText[0] != 'c' && currentText[0] != 's' && currentText[0] != 't' && currentText[0] != L'\u221A') {

            currentText = currentText->Substring(1);
            operationPerformed = true;
        }
        if (currentText->Length <= 13) {

            currentText += "7";
            AddTextToCurrentText();
            label1->Text = currentText;
            timer1->Enabled = true;
        }
        else {
            if (currentText->Length >= 14) {
                if (stopSmallSize < 3) {
                    label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
                }
                currentText += "7";
                AddTextToCurrentText();			// for label2
                label1->Text = currentText;
                timer1->Enabled = true;			// for label2
                ++stopSmallSize;
            }
        }
    }

    void MyForm::eight_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!operationPerformed && currentText[0] != '-' && Debag_Point == true && currentText[0] != '('
            && currentText[0] != 'c' && currentText[0] != 's' && currentText[0] != 't' && currentText[0] != L'\u221A') {

            currentText = currentText->Substring(1);
            operationPerformed = true;
        }
        if (currentText->Length <= 13) {
            currentText += "8";
            AddTextToCurrentText();
            label1->Text = currentText;
            timer1->Enabled = true;
        }
        else {
            if (currentText->Length >= 14) {
                if (stopSmallSize < 3) {
                    label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
                }
                currentText += "8";
                AddTextToCurrentText();			// for label2
                label1->Text = currentText;
                timer1->Enabled = true;			// for label2
                ++stopSmallSize;

            }
        }

    }


    void MyForm::nine_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!operationPerformed && currentText[0] != '-' && Debag_Point == true && currentText[0] != '('
            && currentText[0] != 'c' && currentText[0] != 's' && currentText[0] != 't' && currentText[0] != L'\u221A') {

            currentText = currentText->Substring(1);
            operationPerformed = true;
        }
        if (currentText->Length <= 13) {
            currentText += "9";
            AddTextToCurrentText();
            label1->Text = currentText;
            timer1->Enabled = true;
        }

        else {
            if (currentText->Length >= 14) {
                if (stopSmallSize < 3) {
                    label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
                }
                currentText += "9";
                AddTextToCurrentText();			// for label2
                label1->Text = currentText;
                timer1->Enabled = true;			// for label2
                if (stopSmallSize <= 3) {
                    ++stopSmallSize;
                }


            }
        }
    }
    void MyForm::point_Click_1(System::Object^ sender, System::EventArgs^ e) {
        if (canAddSing(currentText, 0,0)) {
            if (!currentText[0] != '.' && !currentText->EndsWith(".")) {
                if (currentText->Length <= 13) {
                    // Logic to avoid many dots in one expression
                    pointCheked = true;
                    if (pointCheked == true)
                    {
                        countPoint = "";
                        pointCheked = false;
                    }
                    if (plusCheked == true || minusCheked == true || multiplyCheked == true || divideCheked == true)
                    {
                        countPoint = ".";
                        plusCheked = false;
                        minusCheked = false;
                        multiplyCheked = false;
                        divideCheked = false;
                    }

                    if (currentText[0] == '1') {
                        currentText += '0';
                    }
                    //
                    Debag_Point = false;
                    //
                    currentText = currentText + countPoint;
                    label1->Text = currentText;


                }
                // Work with Size 
                else {
                    if (currentText->Length >= 14) {
                        if (stopSmallSize < 3) {
                            label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, label1->Font->SizeInPoints - 2.25);
                        }
                        currentText += ".";
                        label1->Text = currentText;
                        ++stopSmallSize;
                    }

                }
            }
        }
    }

}