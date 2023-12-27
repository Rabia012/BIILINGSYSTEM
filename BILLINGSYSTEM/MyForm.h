#pragma once

namespace BILLINGSYSTEM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		double bread = 150;
		double noodles = 75;
		double rice = 200;
		double flour = 180;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;

		   double milk = 120;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnReceipt;


	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::Button^ btnTotal;


	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::RichTextBox^ rtReceipt;

	private: System::Windows::Forms::Label^ numitems;
	private: System::Windows::Forms::Label^ lblCost;


	private: System::Windows::Forms::NumericUpDown^ numFlour;
	private: System::Windows::Forms::Label^ lblFlour;


	private: System::Windows::Forms::NumericUpDown^ numRice;
	private: System::Windows::Forms::Label^ lblRice;


	private: System::Windows::Forms::NumericUpDown^ numNoodles;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ lblNoodles;



	private: System::Windows::Forms::NumericUpDown^ numMilk;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblMilk;


	private: System::Windows::Forms::NumericUpDown^ numBread;


	private: System::Windows::Forms::Label^ lblBread;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;






















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnReceipt = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->rtReceipt = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->numitems = (gcnew System::Windows::Forms::Label());
			this->lblCost = (gcnew System::Windows::Forms::Label());
			this->numFlour = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblFlour = (gcnew System::Windows::Forms::Label());
			this->numRice = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblRice = (gcnew System::Windows::Forms::Label());
			this->numNoodles = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lblNoodles = (gcnew System::Windows::Forms::Label());
			this->numMilk = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblMilk = (gcnew System::Windows::Forms::Label());
			this->numBread = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblBread = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numFlour))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNoodles))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMilk))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBread))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SandyBrown;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 36);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1336, 648);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Beige;
			this->panel5->Controls->Add(this->btnReceipt);
			this->panel5->Controls->Add(this->btnPrint);
			this->panel5->Controls->Add(this->btnTotal);
			this->panel5->Controls->Add(this->btnReset);
			this->panel5->Controls->Add(this->btnExit);
			this->panel5->Location = System::Drawing::Point(18, 544);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1298, 84);
			this->panel5->TabIndex = 1;
			// 
			// btnReceipt
			// 
			this->btnReceipt->BackColor = System::Drawing::Color::SandyBrown;
			this->btnReceipt->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReceipt->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnReceipt->Location = System::Drawing::Point(266, 11);
			this->btnReceipt->Name = L"btnReceipt";
			this->btnReceipt->Size = System::Drawing::Size(250, 70);
			this->btnReceipt->TabIndex = 0;
			this->btnReceipt->Text = L"Receipt";
			this->btnReceipt->UseVisualStyleBackColor = false;
			this->btnReceipt->Click += gcnew System::EventHandler(this, &MyForm::btnReceipt_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::SandyBrown;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPrint->Location = System::Drawing::Point(522, 11);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(250, 70);
			this->btnPrint->TabIndex = 0;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &MyForm::btnPrint_Click);
			// 
			// btnTotal
			// 
			this->btnTotal->BackColor = System::Drawing::Color::SandyBrown;
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotal->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnTotal->Location = System::Drawing::Point(10, 11);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(250, 70);
			this->btnTotal->TabIndex = 0;
			this->btnTotal->Text = L"Total";
			this->btnTotal->UseVisualStyleBackColor = false;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::btnTotal_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::SandyBrown;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnReset->Location = System::Drawing::Point(778, 11);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(250, 70);
			this->btnReset->TabIndex = 0;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::SandyBrown;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnExit->Location = System::Drawing::Point(1034, 11);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(250, 70);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Beige;
			this->panel4->Controls->Add(this->rtReceipt);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(855, 115);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(461, 423);
			this->panel4->TabIndex = 2;
			// 
			// rtReceipt
			// 
			this->rtReceipt->Location = System::Drawing::Point(13, 54);
			this->rtReceipt->Name = L"rtReceipt";
			this->rtReceipt->Size = System::Drawing::Size(434, 355);
			this->rtReceipt->TabIndex = 0;
			this->rtReceipt->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Elephant", 22.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Navy;
			this->label3->Location = System::Drawing::Point(158, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 47);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Receipt";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Beige;
			this->panel3->Controls->Add(this->comboBox5);
			this->panel3->Controls->Add(this->comboBox4);
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Controls->Add(this->comboBox3);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->numitems);
			this->panel3->Controls->Add(this->lblCost);
			this->panel3->Controls->Add(this->numFlour);
			this->panel3->Controls->Add(this->lblFlour);
			this->panel3->Controls->Add(this->numRice);
			this->panel3->Controls->Add(this->lblRice);
			this->panel3->Controls->Add(this->numNoodles);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->lblNoodles);
			this->panel3->Controls->Add(this->numMilk);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->lblMilk);
			this->panel3->Controls->Add(this->numBread);
			this->panel3->Controls->Add(this->lblBread);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Location = System::Drawing::Point(18, 115);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(831, 423);
			this->panel3->TabIndex = 1;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Elephant", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->ForeColor = System::Drawing::Color::Navy;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Bread", L"Milk", L"Noodles", L"Rice", L"Flour",
					L"", L""
			});
			this->comboBox5->Location = System::Drawing::Point(17, 301);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(143, 43);
			this->comboBox5->TabIndex = 3;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Elephant", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::Color::Navy;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Bread", L"Milk", L"Noodles", L"Rice", L"Flour",
					L"", L""
			});
			this->comboBox4->Location = System::Drawing::Point(17, 249);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(143, 43);
			this->comboBox4->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Elephant", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::Navy;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Bread", L"Milk", L"Noodles", L"Rice", L"Flour",
					L"", L""
			});
			this->comboBox2->Location = System::Drawing::Point(17, 138);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(143, 43);
			this->comboBox2->TabIndex = 3;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Elephant", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::Navy;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Bread", L"Milk", L"Noodles", L"Rice", L"Flour",
					L"", L""
			});
			this->comboBox3->Location = System::Drawing::Point(17, 187);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(143, 43);
			this->comboBox3->TabIndex = 2;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Elephant", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Navy;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Bread", L"Milk", L"Noodles", L"Rice", L"Flour",
					L"", L""
			});
			this->comboBox1->Location = System::Drawing::Point(17, 76);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(143, 43);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// numitems
			// 
			this->numitems->BackColor = System::Drawing::Color::White;
			this->numitems->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numitems->Location = System::Drawing::Point(201, 358);
			this->numitems->Name = L"numitems";
			this->numitems->Size = System::Drawing::Size(334, 42);
			this->numitems->TabIndex = 0;
			this->numitems->Text = L"0";
			this->numitems->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->numitems->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// lblCost
			// 
			this->lblCost->BackColor = System::Drawing::Color::White;
			this->lblCost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCost->Location = System::Drawing::Point(569, 358);
			this->lblCost->Name = L"lblCost";
			this->lblCost->Size = System::Drawing::Size(247, 42);
			this->lblCost->TabIndex = 0;
			this->lblCost->Text = L"Rs. 0.00";
			this->lblCost->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblCost->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// numFlour
			// 
			this->numFlour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numFlour->Location = System::Drawing::Point(198, 294);
			this->numFlour->Name = L"numFlour";
			this->numFlour->Size = System::Drawing::Size(337, 49);
			this->numFlour->TabIndex = 1;
			this->numFlour->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numFlour->ValueChanged += gcnew System::EventHandler(this, &MyForm::numFlour_ValueChanged);
			// 
			// lblFlour
			// 
			this->lblFlour->BackColor = System::Drawing::Color::White;
			this->lblFlour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFlour->Location = System::Drawing::Point(569, 296);
			this->lblFlour->Name = L"lblFlour";
			this->lblFlour->Size = System::Drawing::Size(247, 42);
			this->lblFlour->TabIndex = 0;
			this->lblFlour->Text = L"Rs. 0.00";
			this->lblFlour->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblFlour->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// numRice
			// 
			this->numRice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numRice->Location = System::Drawing::Point(198, 239);
			this->numRice->Name = L"numRice";
			this->numRice->Size = System::Drawing::Size(337, 49);
			this->numRice->TabIndex = 1;
			this->numRice->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numRice->ValueChanged += gcnew System::EventHandler(this, &MyForm::numRice_ValueChanged);
			// 
			// lblRice
			// 
			this->lblRice->BackColor = System::Drawing::Color::White;
			this->lblRice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRice->Location = System::Drawing::Point(569, 241);
			this->lblRice->Name = L"lblRice";
			this->lblRice->Size = System::Drawing::Size(247, 42);
			this->lblRice->TabIndex = 0;
			this->lblRice->Text = L"Rs. 0.00";
			this->lblRice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblRice->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// numNoodles
			// 
			this->numNoodles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numNoodles->Location = System::Drawing::Point(198, 186);
			this->numNoodles->Name = L"numNoodles";
			this->numNoodles->Size = System::Drawing::Size(337, 49);
			this->numNoodles->TabIndex = 1;
			this->numNoodles->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numNoodles->ValueChanged += gcnew System::EventHandler(this, &MyForm::numNoodles_ValueChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Elephant", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Navy;
			this->label12->Location = System::Drawing::Point(33, 358);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(106, 42);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Total";
			// 
			// lblNoodles
			// 
			this->lblNoodles->BackColor = System::Drawing::Color::White;
			this->lblNoodles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoodles->Location = System::Drawing::Point(569, 186);
			this->lblNoodles->Name = L"lblNoodles";
			this->lblNoodles->Size = System::Drawing::Size(247, 42);
			this->lblNoodles->TabIndex = 0;
			this->lblNoodles->Text = L"Rs. 0.00";
			this->lblNoodles->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblNoodles->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// numMilk
			// 
			this->numMilk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMilk->Location = System::Drawing::Point(198, 131);
			this->numMilk->Name = L"numMilk";
			this->numMilk->Size = System::Drawing::Size(337, 49);
			this->numMilk->TabIndex = 1;
			this->numMilk->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numMilk->ValueChanged += gcnew System::EventHandler(this, &MyForm::numMilk_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Elephant", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Navy;
			this->label8->Location = System::Drawing::Point(33, 241);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 42);
			this->label8->TabIndex = 0;
			// 
			// lblMilk
			// 
			this->lblMilk->BackColor = System::Drawing::Color::White;
			this->lblMilk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMilk->Location = System::Drawing::Point(569, 131);
			this->lblMilk->Name = L"lblMilk";
			this->lblMilk->Size = System::Drawing::Size(247, 42);
			this->lblMilk->TabIndex = 0;
			this->lblMilk->Text = L"Rs. 0.00";
			this->lblMilk->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblMilk->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// numBread
			// 
			this->numBread->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numBread->Location = System::Drawing::Point(198, 76);
			this->numBread->Name = L"numBread";
			this->numBread->Size = System::Drawing::Size(337, 49);
			this->numBread->TabIndex = 1;
			this->numBread->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numBread->ValueChanged += gcnew System::EventHandler(this, &MyForm::numBread_ValueChanged);
			// 
			// lblBread
			// 
			this->lblBread->BackColor = System::Drawing::Color::White;
			this->lblBread->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBread->Location = System::Drawing::Point(569, 76);
			this->lblBread->Name = L"lblBread";
			this->lblBread->Size = System::Drawing::Size(247, 42);
			this->lblBread->TabIndex = 0;
			this->lblBread->Text = L"Rs. 0.00";
			this->lblBread->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblBread->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Navy;
			this->label18->Location = System::Drawing::Point(526, 14);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(277, 51);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Cost of items";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Navy;
			this->label17->Location = System::Drawing::Point(191, 17);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(257, 51);
			this->label17->TabIndex = 0;
			this->label17->Text = L"No. of items";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Elephant", 24, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Navy;
			this->label16->Location = System::Drawing::Point(23, 17);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(137, 51);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Items";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Beige;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(18, 25);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1298, 84);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 43.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(331, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(657, 87);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Billing Management System";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			this->printPreviewDialog1->Load += gcnew System::EventHandler(this, &MyForm::printPreviewDialog1_Load);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1370, 741);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numFlour))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNoodles))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMilk))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBread))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		numBread->Value = 0;
		numNoodles->Value = 0;
		numMilk->Value = 0;
		numRice->Value = 0;
		numFlour->Value = 0;
		numitems->Text = "0";
		rtReceipt->Clear();
		lblBread->Text = "Rs. 0.00";
		lblNoodles->Text = "Rs. 0.00";
		lblMilk->Text = "Rs. 0.00";
		lblRice->Text = "Rs. 0.00";
		lblFlour->Text = "Rs. 0.00";
		lblCost->Text = "Rs. 0.00";

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void printPreviewDialog1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		System::Windows::Forms::DialogResult iExit;
		iExit = MessageBox::Show("Confirm if you want to exit.", "Billing Management Systems", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);
		if (iExit == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
	private: System::Void numBread_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Text == "Bread") {
			double i = Convert::ToDouble(numBread->Value);
			lblBread->Text = String::Format("{0:0}", i * bread);
		}
		else if (comboBox1->Text == "Milk") {
			double i = Convert::ToDouble(numBread->Value);
			lblBread->Text = String::Format("{0:0}", i * milk);
		}
		else if (comboBox1->Text == "Noodles") {
			double i = Convert::ToDouble(numBread->Value);
			lblBread->Text = String::Format("{0:0}", i * noodles);
		}
		else if (comboBox1->Text == "Rice") {
			double i = Convert::ToDouble(numBread->Value);
			lblBread->Text = String::Format("{0:0}", i * rice);
		}
		else if (comboBox1->Text == "Flour") {
			double i = Convert::ToDouble(numBread->Value);
			lblBread->Text = String::Format("{0:0}", i * flour);
		}
	}

private: System::Void numMilk_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->Text == "Bread") {
		double i = Convert::ToDouble(numMilk->Value);
		lblMilk->Text = String::Format("{0:0}", i * bread);
	}
	else if (comboBox2->Text == "Milk") {
		double i = Convert::ToDouble(numMilk->Value);
		lblMilk->Text = String::Format("{0:0}", i * milk);
	}
	else if (comboBox2->Text == "Noodles") {
		double i = Convert::ToDouble(numMilk->Value);
		lblMilk->Text = String::Format("{0:0}", i * noodles);
	}
	else if (comboBox2->Text == "Rice") {
		double i = Convert::ToDouble(numMilk->Value);
		lblMilk->Text = String::Format("{0:0}", i * rice);
	}
	else if (comboBox2->Text == "Flour") {
		double i = Convert::ToDouble(numMilk->Value);
		lblMilk->Text = String::Format("{0:0}", i * flour);
	}
	
}
private: System::Void numNoodles_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox3->Text == "Bread") {
		double i = Convert::ToDouble(numNoodles->Value);
		lblNoodles->Text = String::Format("{0:0}", i * bread);
	}
	else if (comboBox3->Text == "Milk") {
		double i = Convert::ToDouble(numNoodles->Value);
		lblNoodles->Text = String::Format("{0:0}", i * milk);
	}
	else if (comboBox3->Text == "Noodles") {
		double i = Convert::ToDouble(numNoodles->Value);
		lblNoodles->Text = String::Format("{0:0}", i * noodles);
	}
	else if (comboBox3->Text == "Rice") {
		double i = Convert::ToDouble(numNoodles->Value);
		lblNoodles->Text = String::Format("{0:0}", i * rice);
	}
	else if (comboBox3->Text == "Flour") {
		double i = Convert::ToDouble(numNoodles->Value);
		lblNoodles->Text = String::Format("{0:0}", i * flour);
	}
	
}
private: System::Void numRice_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox4->Text == "Bread") {
		double i = Convert::ToDouble(numRice->Value);
		lblRice->Text = String::Format("{0:0}", i * bread);
	}
	else if (comboBox4->Text == "Milk") {
		double i = Convert::ToDouble(numRice->Value);
		lblRice->Text = String::Format("{0:0}", i * milk);
	}
	else if (comboBox4->Text == "Noodles") {
		double i = Convert::ToDouble(numRice->Value);
		lblRice->Text = String::Format("{0:0}", i * noodles);
	}
	else if (comboBox4->Text == "Rice") {
		double i = Convert::ToDouble(numRice->Value);
		lblRice->Text = String::Format("{0:0}", i * rice);
	}
	else if (comboBox4->Text == "Flour") {
		double i = Convert::ToDouble(numRice->Value);
		lblRice->Text = String::Format("{0:0}", i * flour);
	}
	
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//double i = Convert::ToDouble(numFlour->Value);
	//lblFlour->Text = String::Format("{0:0}", i * flour);
}
private: System::Void btnTotal_Click(System::Object^ sender, System::EventArgs^ e) {
	double q[7], p[7];
	q[0] = Convert::ToDouble(numBread->Value);
	q[1] = Convert::ToDouble(numRice->Value);
	q[2] = Convert::ToDouble(numMilk->Value);
	q[3] = Convert::ToDouble(numFlour->Value);
	q[4] = Convert::ToDouble(numNoodles->Value);

	q[5] = q[0] + q[1] + q[2] + q[3] + q[4];
	numitems->Text = Convert::ToString(q[5]);

	p[0] = q[0] * bread;
	p[1] = q[1] * rice;
	p[2] = q[2] * milk;
	p[3] = q[3] * flour;
	p[4] = q[4] * noodles;

	p[5] = p[0] + p[1] + p[2] + p[3] + p[4];
	lblCost->Text = String::Format("{0:0}", p[5]);
}
private: System::Void btnReceipt_Click(System::Object^ sender, System::EventArgs^ e) {
	rtReceipt->Clear();
	if (numitems->Text != "0") {
		rtReceipt->AppendText(label16->Text + "\t" + "\t" + label17->Text + "\t" + "\t" + "\t" + label18->Text + "\n" + "\n");
	}
	if (numBread->Value > 0) {
	rtReceipt->AppendText(comboBox1->Text + "\t" + "\t" + numBread->Value + "\t" + "\t" + "\t" + lblBread->Text + "\n" + "\n");
	}
	 if(numMilk->Value > 0){
	rtReceipt->AppendText(comboBox2->Text + "\t" + "\t" + numMilk->Value + "\t" + "\t" + "\t" + lblMilk->Text + "\n" + "\n");
	}
	 if(numNoodles->Value > 0){
	
	rtReceipt->AppendText(comboBox3->Text + "\t" + "\t" + numNoodles->Value + "\t" + "\t" + "\t" + lblNoodles->Text + "\n" + "\n");
	}
	 if (numRice->Value > 0) {
		rtReceipt->AppendText(comboBox4->Text + "\t" + "\t" + numRice->Value + "\t" + "\t" + "\t" + lblRice->Text + "\n" + "\n");
	}
 if (numFlour->Value > 0) {
		rtReceipt->AppendText(comboBox5->Text + "\t" + "\t" + numFlour->Value + "\t" + "\t" + "\t" + lblFlour->Text + "\n" + "\n");
	}
	 if(numitems->Text != "0"){
	rtReceipt->AppendText(label12->Text + "\t" + "\t" + numitems->Text + "\t" + "\t" + "\t" + lblCost->Text + "\t" + "\n" + "\n");
	}
}
private: System::Void numFlour_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox5->Text == "Bread") {
		double i = Convert::ToDouble(numFlour->Value);
		lblFlour->Text = String::Format("{0:0}", i * bread);
	}
	else if (comboBox5->Text == "Milk") {
		double i = Convert::ToDouble(numFlour->Value);
		lblFlour->Text = String::Format("{0:0}", i * milk);
	}
	else if (comboBox5->Text == "Noodles") {
		double i = Convert::ToDouble(numFlour->Value);
		lblFlour->Text = String::Format("{0:0}", i * noodles);
	}
	else if (comboBox5->Text == "Rice") {
		double i = Convert::ToDouble(numFlour->Value);
		lblFlour->Text = String::Format("{0:0}", i * rice);
	}
	else if (comboBox5->Text == "Flour") {
		double i = Convert::ToDouble(numFlour->Value);
		lblFlour->Text = String::Format("{0:0}", i * flour);
	}
}
private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
	printPreviewDialog1->ShowDialog();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	System::Drawing::Font^ fntstring = gcnew System::Drawing::Font("Time New Rome", 14, FontStyle::Regular);
	e->Graphics->DrawString(rtReceipt->Text, fntstring, Brushes::BlueViolet, 100, 100);
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
