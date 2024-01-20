#pragma once
#include <string>  
#include <Windows.h> 
#include <algorithm>

#include "CanAddSing.h"  
#include "Logic.h"  
#include "DesingCalculator.h"
#include "TransmitLinks_to_Photo.h"

namespace Calcula {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ equals;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ C;
	private: System::Windows::Forms::Button^ Devete;
	private: System::Windows::Forms::Button^ percentage;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ point;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ What;
	private: System::Windows::Forms::Button^ sin;
	private: System::Windows::Forms::Button^ tan;
	private: System::Windows::Forms::Button^ cos;
	private: System::Windows::Forms::Button^ Root;
	private: System::Windows::Forms::Button^ Degree;
	private: System::Windows::Forms::Button^ Return;
	private: System::Windows::Forms::Button^ Bracket_right;
	private: System::Windows::Forms::Button^ Bracket_left;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ Desing;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

		   // Chanse colour 
		   void FooWhite() {
			   this->one->ForeColor = System::Drawing::Color::White;
			   this->two->ForeColor = System::Drawing::Color::White;
			   this->three->ForeColor = System::Drawing::Color::White;
			   this->four->ForeColor = System::Drawing::Color::White;
			   this->five->ForeColor = System::Drawing::Color::White;
			   this->six->ForeColor = System::Drawing::Color::White;
			   this->seven->ForeColor = System::Drawing::Color::White;
			   this->eight->ForeColor = System::Drawing::Color::White;
			   this->nine->ForeColor = System::Drawing::Color::White;
			   this->plus->ForeColor = System::Drawing::Color::White;
			   this->minus->ForeColor = System::Drawing::Color::White;
			   this->divide->ForeColor = System::Drawing::Color::White;
			   this->multiply->ForeColor = System::Drawing::Color::White;
			   this->Desing->ForeColor = System::Drawing::Color::White;
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label2->ForeColor = System::Drawing::Color::White;
			   this->Devete->ForeColor = System::Drawing::Color::White;
			   this->C->ForeColor = System::Drawing::Color::White;
			   this->equals->ForeColor = System::Drawing::Color::White;
			   this->point->ForeColor = System::Drawing::Color::White;
			   this->zero->ForeColor = System::Drawing::Color::White;
			   this->percentage->ForeColor = System::Drawing::Color::White;
			   this->What->ForeColor = System::Drawing::Color::White;
			   this->sin->ForeColor = System::Drawing::Color::White;
			   this->cos->ForeColor = System::Drawing::Color::White;
			   this->tan->ForeColor = System::Drawing::Color::White;
			   this->Bracket_right->ForeColor = System::Drawing::Color::White;
			   this->Bracket_left->ForeColor = System::Drawing::Color::White;
			   this->Degree->ForeColor = System::Drawing::Color::White;
			   this->Root->ForeColor = System::Drawing::Color::White;
			   this->button11->ForeColor = System::Drawing::Color::White;
			   this->Return->ForeColor = System::Drawing::Color::White;

		   }
		   void FooBlack() {
			   this->one->ForeColor = System::Drawing::Color::Black;
			   this->two->ForeColor = System::Drawing::Color::Black;
			   this->three->ForeColor = System::Drawing::Color::Black;
			   this->four->ForeColor = System::Drawing::Color::Black;
			   this->five->ForeColor = System::Drawing::Color::Black;
			   this->six->ForeColor = System::Drawing::Color::Black;
			   this->seven->ForeColor = System::Drawing::Color::Black;
			   this->eight->ForeColor = System::Drawing::Color::Black;
			   this->nine->ForeColor = System::Drawing::Color::Black;
			   this->plus->ForeColor = System::Drawing::Color::Black;
			   this->minus->ForeColor = System::Drawing::Color::Black;
			   this->divide->ForeColor = System::Drawing::Color::Black;
			   this->multiply->ForeColor = System::Drawing::Color::Black;
			   this->Desing->ForeColor = System::Drawing::Color::Black;
			   this->label1->ForeColor = System::Drawing::Color::Black;
			   this->label2->ForeColor = System::Drawing::Color::Black;
			   this->Devete->ForeColor = System::Drawing::Color::Black;
			   this->C->ForeColor = System::Drawing::Color::Black;
			   this->equals->ForeColor = System::Drawing::Color::Black;
			   this->point->ForeColor = System::Drawing::Color::Black;
			   this->zero->ForeColor = System::Drawing::Color::Black;
			   this->percentage->ForeColor = System::Drawing::Color::Black;
			   this->What->ForeColor = System::Drawing::Color::Black;
			   this->sin->ForeColor = System::Drawing::Color::Black;
			   this->cos->ForeColor = System::Drawing::Color::Black;
			   this->tan->ForeColor = System::Drawing::Color::Black;
			   this->Bracket_right->ForeColor = System::Drawing::Color::Black;
			   this->Bracket_left->ForeColor = System::Drawing::Color::Black;
			   this->Degree->ForeColor = System::Drawing::Color::Black;
			   this->Root->ForeColor = System::Drawing::Color::Black;
			   this->button11->ForeColor = System::Drawing::Color::Black;
			   this->Return->ForeColor = System::Drawing::Color::Black;

		   }



		   String^ currentText = "0";
		   String^ currentText2;
		   String^ Last_ResultCtrlZ;

		   // checker
		   bool drag = false;
		   bool isExpanded = true;

		   //Debag Point
		   String^ countPoint = ".";
		   bool plusCheked = true;
		   bool minusCheked = true;
		   bool multiplyCheked = true;
		   bool divideCheked = true;
		   bool ChangePhoto = false;
		   bool pointCheked = true;
		   bool Debag_Point = true;

		   // Flag to track changes in currentText
		   bool operationPerformed = false;
		   bool textChangedFlag = false;
		   
		   //For Size numbers
		   int stopSmallSize = 0;

		   // For photo transfer
		   TransmitLinks_to_Photo^ transmitData = gcnew TransmitLinks_to_Photo();

		   // For fast insert
			private:
				int count_Click_Label1 = 0;


		   // Desing Application 
											// X
	private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button1->BackColor = Color::Red;
	}
	private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button1->BackColor = Color::FromArgb(64, 64, 64);
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
		   // -
	private: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button2->BackColor = Color::RoyalBlue;
	}
	private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button2->BackColor = Color::FromArgb(64, 64, 64);
	}

	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;

	}

		  


	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drag = true;
		start_point = Point(e->X, e->Y);
	}

	private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (drag) {
			Point p = PointToScreen(e->Location);
			this->Location = Point(p.X - start_point.X, p.Y - start_point.Y);
		}
	}

	private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drag = false;
	}

		

	private: System::Void label3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drag = true;
		start_point = Point(e->X, e->Y);

	}
	private: System::Void label3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (drag) {
			Point p = PointToScreen(e->Location);
			this->Location = Point(p.X - start_point.X, p.Y - start_point.Y);
		}
	}
	private: System::Void label3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drag = false;
	}
		 

	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drag = true;
		start_point = Point(e->X, e->Y);

	}

	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (drag) {
			Point p = PointToScreen(e->Location);
			this->Location = Point(p.X - start_point.X, p.Y - start_point.Y);
		}
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drag = false;
	}


		   
	private: System::Windows::Forms::Timer^ newDesingTimer;

		   // Function to resize an image to fit a specified size
		   System::Drawing::Image^ ResizeImage(System::Drawing::Image^ image, System::Drawing::Size size) {
			   System::Drawing::Bitmap^ newImage = gcnew System::Drawing::Bitmap(size.Width, size.Height);
			   System::Drawing::Graphics^ g = System::Drawing::Graphics::FromImage(newImage);

			   g->DrawImage(image, 0, 0, size.Width, size.Height);
			   delete g;
			   return newImage;
		   }
	
	Point start_point = Point(0, 0);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;

			}
		}

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zero = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->equals = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->C = (gcnew System::Windows::Forms::Button());
			this->Devete = (gcnew System::Windows::Forms::Button());
			this->percentage = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->What = (gcnew System::Windows::Forms::Button());
			this->sin = (gcnew System::Windows::Forms::Button());
			this->tan = (gcnew System::Windows::Forms::Button());
			this->cos = (gcnew System::Windows::Forms::Button());
			this->Root = (gcnew System::Windows::Forms::Button());
			this->Degree = (gcnew System::Windows::Forms::Button());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->Bracket_right = (gcnew System::Windows::Forms::Button());
			this->Bracket_left = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->Desing = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->newDesingTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::Transparent;
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->zero->ForeColor = System::Drawing::Color::White;
			this->zero->Location = System::Drawing::Point(45, 445);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(188, 70);
			this->zero->TabIndex = 1;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::Transparent;
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->three->ForeColor = System::Drawing::Color::White;
			this->three->Location = System::Drawing::Point(229, 378);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(119, 70);
			this->three->TabIndex = 3;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::three_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::Transparent;
			this->two->FlatAppearance->BorderSize = 0;
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->two->ForeColor = System::Drawing::Color::White;
			this->two->Location = System::Drawing::Point(114, 378);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(119, 70);
			this->two->TabIndex = 4;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::two_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::Transparent;
			this->one->FlatAppearance->BorderSize = 0;
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->one->ForeColor = System::Drawing::Color::White;
			this->one->Location = System::Drawing::Point(-2, 378);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(119, 70);
			this->one->TabIndex = 5;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::Transparent;
			this->six->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->six->FlatAppearance->BorderSize = 0;
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->six->ForeColor = System::Drawing::Color::White;
			this->six->Location = System::Drawing::Point(229, 314);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(119, 70);
			this->six->TabIndex = 6;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::six_Click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::Color::Transparent;
			this->four->FlatAppearance->BorderSize = 0;
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->four->ForeColor = System::Drawing::Color::White;
			this->four->Location = System::Drawing::Point(-2, 314);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(119, 70);
			this->four->TabIndex = 7;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::four_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::Transparent;
			this->five->FlatAppearance->BorderSize = 0;
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->five->ForeColor = System::Drawing::Color::White;
			this->five->Location = System::Drawing::Point(114, 314);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(119, 70);
			this->five->TabIndex = 8;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::five_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::Transparent;
			this->seven->FlatAppearance->BorderSize = 0;
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->seven->ForeColor = System::Drawing::Color::White;
			this->seven->Location = System::Drawing::Point(-2, 251);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(119, 70);
			this->seven->TabIndex = 9;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::seven_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::Transparent;
			this->nine->FlatAppearance->BorderSize = 0;
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->nine->ForeColor = System::Drawing::Color::White;
			this->nine->Location = System::Drawing::Point(229, 251);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(119, 70);
			this->nine->TabIndex = 10;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::nine_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::Transparent;
			this->eight->FlatAppearance->BorderSize = 0;
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->eight->ForeColor = System::Drawing::Color::White;
			this->eight->Location = System::Drawing::Point(114, 251);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(119, 70);
			this->eight->TabIndex = 11;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::eight_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Transparent;
			this->plus->FlatAppearance->BorderSize = 0;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->plus->ForeColor = System::Drawing::Color::White;
			this->plus->Location = System::Drawing::Point(345, 378);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(119, 70);
			this->plus->TabIndex = 14;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::Transparent;
			this->minus->FlatAppearance->BorderSize = 0;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->minus->ForeColor = System::Drawing::Color::White;
			this->minus->Location = System::Drawing::Point(345, 314);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(119, 70);
			this->minus->TabIndex = 15;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// equals
			// 
			this->equals->BackColor = System::Drawing::Color::Transparent;
			this->equals->FlatAppearance->BorderSize = 0;
			this->equals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->equals->ForeColor = System::Drawing::Color::White;
			this->equals->Location = System::Drawing::Point(345, 445);
			this->equals->Name = L"equals";
			this->equals->Size = System::Drawing::Size(119, 70);
			this->equals->TabIndex = 16;
			this->equals->Text = L"=";
			this->equals->UseVisualStyleBackColor = false;
			this->equals->Click += gcnew System::EventHandler(this, &MyForm::equals_Click);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::Color::Transparent;
			this->multiply->FlatAppearance->BorderSize = 0;
			this->multiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->multiply->ForeColor = System::Drawing::Color::White;
			this->multiply->Location = System::Drawing::Point(345, 251);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(119, 70);
			this->multiply->TabIndex = 17;
			this->multiply->Text = L"х";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::multiply_Click);
			// 
			// C
			// 
			this->C->BackColor = System::Drawing::Color::Transparent;
			this->C->FlatAppearance->BorderSize = 0;
			this->C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->C->ForeColor = System::Drawing::Color::White;
			this->C->Location = System::Drawing::Point(-2, 184);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(119, 70);
			this->C->TabIndex = 18;
			this->C->Text = L"С";
			this->C->UseVisualStyleBackColor = false;
			this->C->Click += gcnew System::EventHandler(this, &MyForm::C_Click);
			// 
			// Devete
			// 
			this->Devete->BackColor = System::Drawing::Color::Transparent;
			this->Devete->FlatAppearance->BorderSize = 0;
			this->Devete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Devete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->Devete->ForeColor = System::Drawing::Color::White;
			this->Devete->Location = System::Drawing::Point(114, 184);
			this->Devete->Name = L"Devete";
			this->Devete->Size = System::Drawing::Size(119, 70);
			this->Devete->TabIndex = 19;
			this->Devete->Text = L"Dev";
			this->Devete->UseVisualStyleBackColor = false;
			this->Devete->Click += gcnew System::EventHandler(this, &MyForm::Devete_Click);
			// 
			// percentage
			// 
			this->percentage->BackColor = System::Drawing::Color::Transparent;
			this->percentage->FlatAppearance->BorderSize = 0;
			this->percentage->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->percentage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->percentage->ForeColor = System::Drawing::Color::White;
			this->percentage->Location = System::Drawing::Point(229, 184);
			this->percentage->Name = L"percentage";
			this->percentage->Size = System::Drawing::Size(119, 70);
			this->percentage->TabIndex = 20;
			this->percentage->Text = L"%";
			this->percentage->UseVisualStyleBackColor = false;
			this->percentage->Click += gcnew System::EventHandler(this, &MyForm::percentage_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::Transparent;
			this->divide->FlatAppearance->BorderSize = 0;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->divide->ForeColor = System::Drawing::Color::White;
			this->divide->Location = System::Drawing::Point(345, 184);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(119, 70);
			this->divide->TabIndex = 21;
			this->divide->Text = L"÷";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::divide_Click);
			// 
			// point
			// 
			this->point->BackColor = System::Drawing::Color::Transparent;
			this->point->FlatAppearance->BorderSize = 0;
			this->point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->point->ForeColor = System::Drawing::Color::White;
			this->point->Location = System::Drawing::Point(229, 445);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(119, 70);
			this->point->TabIndex = 23;
			this->point->Text = L".";
			this->point->UseVisualStyleBackColor = false;
			this->point->Click += gcnew System::EventHandler(this, &MyForm::point_Click_1);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(21, 152);
			this->label2->MaximumSize = System::Drawing::Size(650, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(542, 29);
			this->label2->TabIndex = 24;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// timer1
			// 
			this->timer1->Interval = 5;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// What
			// 
			this->What->BackColor = System::Drawing::Color::Transparent;
			this->What->FlatAppearance->BorderSize = 0;
			this->What->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->What->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->What->ForeColor = System::Drawing::Color::White;
			this->What->Location = System::Drawing::Point(0, 445);
			this->What->Name = L"What";
			this->What->Size = System::Drawing::Size(52, 70);
			this->What->TabIndex = 25;
			this->What->Text = L"\?";
			this->What->UseVisualStyleBackColor = false;
			this->What->Click += gcnew System::EventHandler(this, &MyForm::What_Click);
			// 
			// sin
			// 
			this->sin->BackColor = System::Drawing::Color::Transparent;
			this->sin->FlatAppearance->BorderSize = 0;
			this->sin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sin->ForeColor = System::Drawing::Color::White;
			this->sin->Location = System::Drawing::Point(461, 184);
			this->sin->Name = L"sin";
			this->sin->Size = System::Drawing::Size(119, 70);
			this->sin->TabIndex = 30;
			this->sin->Text = L"sin";
			this->sin->UseVisualStyleBackColor = false;
			this->sin->Click += gcnew System::EventHandler(this, &MyForm::sin_Click);
			// 
			// tan
			// 
			this->tan->BackColor = System::Drawing::Color::Transparent;
			this->tan->FlatAppearance->BorderSize = 0;
			this->tan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tan->ForeColor = System::Drawing::Color::White;
			this->tan->Location = System::Drawing::Point(461, 314);
			this->tan->Name = L"tan";
			this->tan->Size = System::Drawing::Size(119, 70);
			this->tan->TabIndex = 31;
			this->tan->Text = L"tan";
			this->tan->UseVisualStyleBackColor = false;
			this->tan->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// cos
			// 
			this->cos->BackColor = System::Drawing::Color::Transparent;
			this->cos->FlatAppearance->BorderSize = 0;
			this->cos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cos->ForeColor = System::Drawing::Color::White;
			this->cos->Location = System::Drawing::Point(461, 251);
			this->cos->Name = L"cos";
			this->cos->Size = System::Drawing::Size(119, 70);
			this->cos->TabIndex = 32;
			this->cos->Text = L"cos";
			this->cos->UseVisualStyleBackColor = false;
			this->cos->Click += gcnew System::EventHandler(this, &MyForm::cos_Click);
			// 
			// Root
			// 
			this->Root->BackColor = System::Drawing::Color::Transparent;
			this->Root->FlatAppearance->BorderSize = 0;
			this->Root->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Root->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->Root->ForeColor = System::Drawing::Color::White;
			this->Root->Location = System::Drawing::Point(461, 378);
			this->Root->Name = L"Root";
			this->Root->Size = System::Drawing::Size(119, 70);
			this->Root->TabIndex = 33;
			this->Root->Text = L"√";
			this->Root->UseVisualStyleBackColor = false;
			this->Root->Click += gcnew System::EventHandler(this, &MyForm::Root_Click);
			// 
			// Degree
			// 
			this->Degree->BackColor = System::Drawing::Color::Transparent;
			this->Degree->FlatAppearance->BorderSize = 0;
			this->Degree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Degree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->Degree->ForeColor = System::Drawing::Color::White;
			this->Degree->Location = System::Drawing::Point(461, 445);
			this->Degree->Name = L"Degree";
			this->Degree->Size = System::Drawing::Size(119, 70);
			this->Degree->TabIndex = 34;
			this->Degree->Text = L"x²";
			this->Degree->UseVisualStyleBackColor = false;
			this->Degree->Click += gcnew System::EventHandler(this, &MyForm::Degree_Click);
			// 
			// Return
			// 
			this->Return->BackColor = System::Drawing::Color::Transparent;
			this->Return->FlatAppearance->BorderSize = 0;
			this->Return->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Return->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Return->ForeColor = System::Drawing::Color::White;
			this->Return->Location = System::Drawing::Point(345, 508);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(119, 70);
			this->Return->TabIndex = 35;
			this->Return->Text = L"Return ";
			this->Return->UseVisualStyleBackColor = false;
			this->Return->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Bracket_right
			// 
			this->Bracket_right->BackColor = System::Drawing::Color::Transparent;
			this->Bracket_right->FlatAppearance->BorderSize = 0;
			this->Bracket_right->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Bracket_right->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->Bracket_right->ForeColor = System::Drawing::Color::White;
			this->Bracket_right->Location = System::Drawing::Point(172, 508);
			this->Bracket_right->Name = L"Bracket_right";
			this->Bracket_right->Size = System::Drawing::Size(176, 70);
			this->Bracket_right->TabIndex = 37;
			this->Bracket_right->Text = L")";
			this->Bracket_right->UseVisualStyleBackColor = false;
			this->Bracket_right->Click += gcnew System::EventHandler(this, &MyForm::Bracket_right_Click);
			// 
			// Bracket_left
			// 
			this->Bracket_left->BackColor = System::Drawing::Color::Transparent;
			this->Bracket_left->FlatAppearance->BorderSize = 0;
			this->Bracket_left->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Bracket_left->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->Bracket_left->ForeColor = System::Drawing::Color::White;
			this->Bracket_left->Location = System::Drawing::Point(-2, 508);
			this->Bracket_left->Name = L"Bracket_left";
			this->Bracket_left->Size = System::Drawing::Size(176, 70);
			this->Bracket_left->TabIndex = 38;
			this->Bracket_left->Text = L"(";
			this->Bracket_left->UseVisualStyleBackColor = false;
			this->Bracket_left->Click += gcnew System::EventHandler(this, &MyForm::Bracket_left_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(-2, 445);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(119, 70);
			this->button11->TabIndex = 40;
			this->button11->Text = L"Ctrl+Z";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// Desing
			// 
			this->Desing->BackColor = System::Drawing::Color::Transparent;
			this->Desing->FlatAppearance->BorderSize = 0;
			this->Desing->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Desing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Desing->ForeColor = System::Drawing::Color::White;
			this->Desing->Location = System::Drawing::Point(461, 508);
			this->Desing->Name = L"Desing";
			this->Desing->Size = System::Drawing::Size(119, 70);
			this->Desing->TabIndex = 39;
			this->Desing->Text = L"Desing";
			this->Desing->UseVisualStyleBackColor = false;
			this->Desing->Click += gcnew System::EventHandler(this, &MyForm::Desing_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(462, 27);
			this->panel1->TabIndex = 41;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseUp);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(33, 2);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 25);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Сalculator (Anime)";
			this->label3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::label3_MouseDown);
			this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::label3_MouseMove);
			this->label3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::label3_MouseUp);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(27, 27);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 44;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Right;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(408, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(27, 27);
			this->button2->TabIndex = 43;
			this->button2->Text = L"—";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button2_MouseEnter);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button2_MouseLeave);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Right;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(435, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(27, 27);
			this->button1->TabIndex = 42;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button1_MouseLeave);
			// 
			// newDesingTimer
			// 
			this->newDesingTimer->Tick += gcnew System::EventHandler(this, &MyForm::newDesingTimer_Tick);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(17, 44);
			this->label1->MaximumSize = System::Drawing::Size(650, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(520, 99);
			this->label1->TabIndex = 42;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(462, 518);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Bracket_left);
			this->Controls->Add(this->What);
			this->Controls->Add(this->Desing);
			this->Controls->Add(this->Bracket_right);
			this->Controls->Add(this->Return);
			this->Controls->Add(this->Degree);
			this->Controls->Add(this->Root);
			this->Controls->Add(this->cos);
			this->Controls->Add(this->tan);
			this->Controls->Add(this->sin);
			this->Controls->Add(this->point);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->percentage);
			this->Controls->Add(this->Devete);
			this->Controls->Add(this->C);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->equals);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->six);
			this->Controls->Add(this->one);
			this->Controls->Add(this->two);
			this->Controls->Add(this->three);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->button11);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion 
	private:
		System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
		   //									Numbers

	private:
		System::Void zero_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void one_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void two_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void three_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void four_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void five_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void six_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void seven_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void eight_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void nine_Click(System::Object^ sender, System::EventArgs^ e);



		//									Math Sings



	private:
		System::Void plus_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void minus_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void divide_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void point_Click_1(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void equals_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void Bracket_left_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void Bracket_right_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void Degree_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void Root_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void sin_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void cos_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void percentage_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void Devete_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void C_Click(System::Object^ sender, System::EventArgs^ e);


		System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
					System::EventArgs^ clickEventArgs = gcnew System::EventArgs();

			// Вызываем обработчик события Click программно
			button1_Click(sender, clickEventArgs);
		}
		

		System::Void AddTextToCurrentText() {
			textChangedFlag = true;
		}


	private:
		System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);


	private:
		System::Void What_Click(System::Object^ sender, System::EventArgs^ e);


	private: 
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);


	private: 
		System::Void Desing_Click(System::Object^ sender, System::EventArgs^ e);


	private:
		System::Void newDesingTimer_Tick(System::Object^ sender, System::EventArgs^ e);


	private: 
		System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
private:
	System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);


};
}

