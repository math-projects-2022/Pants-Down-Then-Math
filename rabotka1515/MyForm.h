#pragma once
#include <windows.h>
#include "Math.h"
#include "integral.h"






namespace rabotka1515 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	


	
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:

	public:
		
		double a, b, dx, lbound, ubound, res, x,y;
		int n, s = 1, sernum;
		bool seriesflag = 0, uboundflag = 0, lboundflag = 0, nflag=0;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label9;





	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button27;



	public:

	private: System::Windows::Forms::Button^ button9;

	public:
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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



	protected:



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(754, 9);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(31, 15);
			this->button9->TabIndex = 12;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->chart1->BackSecondaryColor = System::Drawing::Color::Red;
			this->chart1->BorderlineColor = System::Drawing::Color::Maroon;
			chartArea2->AxisX->Crossing = 0;
			chartArea2->AxisX->InterlacedColor = System::Drawing::Color::White;
			chartArea2->AxisX->Interval = 0.5;
			chartArea2->AxisX->LabelStyle->ForeColor = System::Drawing::Color::WhiteSmoke;
			chartArea2->AxisX->LineColor = System::Drawing::Color::White;
			chartArea2->AxisX->LineWidth = 2;
			chartArea2->AxisX->MajorGrid->Interval = 0.5;
			chartArea2->AxisX->MajorGrid->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea2->AxisX->MajorGrid->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			chartArea2->AxisX->Maximum = 3;
			chartArea2->AxisX->Minimum = -3;
			chartArea2->AxisX->ScaleBreakStyle->LineColor = System::Drawing::Color::Bisque;
			chartArea2->AxisX->TitleForeColor = System::Drawing::Color::White;
			chartArea2->AxisX2->InterlacedColor = System::Drawing::Color::White;
			chartArea2->AxisX2->MajorGrid->LineColor = System::Drawing::Color::White;
			chartArea2->AxisX2->MajorTickMark->LineColor = System::Drawing::Color::White;
			chartArea2->AxisY->Crossing = 0;
			chartArea2->AxisY->InterlacedColor = System::Drawing::Color::White;
			chartArea2->AxisY->Interval = 0.5;
			chartArea2->AxisY->LabelStyle->ForeColor = System::Drawing::Color::WhiteSmoke;
			chartArea2->AxisY->LineColor = System::Drawing::Color::White;
			chartArea2->AxisY->LineWidth = 2;
			chartArea2->AxisY->MajorGrid->Interval = 0.5;
			chartArea2->AxisY->MajorGrid->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			chartArea2->AxisY->Maximum = 3;
			chartArea2->AxisY->Minimum = -3;
			chartArea2->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea2->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			chartArea2->AxisY->TitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)));
			chartArea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			chartArea2->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Top;
			chartArea2->BorderColor = System::Drawing::Color::Silver;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series9->BorderWidth = 3;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			series9->Name = L"Series1";
			series10->BorderWidth = 3;
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series10->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			series10->Name = L"Series2";
			series11->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)));
			series11->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			series11->BorderWidth = 2;
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)));
			series11->Name = L"Series3";
			series12->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			series12->BorderWidth = 2;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Color = System::Drawing::Color::Gainsboro;
			series12->Name = L"Series4";
			series13->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			series13->BorderWidth = 2;
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->Color = System::Drawing::Color::Gainsboro;
			series13->Name = L"Series5";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series14->Name = L"Series6";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series15->Name = L"Series7";
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series16->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			series16->Name = L"Series8";
			this->chart1->Series->Add(series9);
			this->chart1->Series->Add(series10);
			this->chart1->Series->Add(series11);
			this->chart1->Series->Add(series12);
			this->chart1->Series->Add(series13);
			this->chart1->Series->Add(series14);
			this->chart1->Series->Add(series15);
			this->chart1->Series->Add(series16);
			this->chart1->Size = System::Drawing::Size(576, 576);
			this->chart1->TabIndex = 15;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button1->Location = System::Drawing::Point(559, 498);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 49);
			this->button1->TabIndex = 16;
			this->button1->Text = L"–јЅќ“ј“№";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(518, 472);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 20);
			this->button3->TabIndex = 18;
			this->button3->Text = L" п";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(518, 524);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(25, 20);
			this->button5->TabIndex = 23;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(518, 498);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(25, 20);
			this->button6->TabIndex = 24;
			this->button6->Text = L"+";
			this->button6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label1->Location = System::Drawing::Point(555, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 17);
			this->label1->TabIndex = 25;
			this->label1->Text = L"—»ћѕ—ќЌ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label5->Location = System::Drawing::Point(555, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 17);
			this->label5->TabIndex = 27;
			this->label5->Text = L"“–јѕ≈÷»»";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label9->Location = System::Drawing::Point(554, 118);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 17);
			this->label9->TabIndex = 31;
			this->label9->Text = L"ѕ–яћќ”√ќЋ№Ќ» »";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->textBox2->Location = System::Drawing::Point(567, 282);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(20, 20);
			this->textBox2->TabIndex = 36;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->textBox1->Location = System::Drawing::Point(567, 179);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(20, 20);
			this->textBox1->TabIndex = 37;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label12->Location = System::Drawing::Point(605, 220);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(70, 36);
			this->label12->TabIndex = 38;
			this->label12->Text = L"x dx";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label6->Location = System::Drawing::Point(24, 8);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 16);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Integrals";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->textBox3->Location = System::Drawing::Point(558, 141);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(216, 20);
			this->textBox3->TabIndex = 42;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->textBox4->Location = System::Drawing::Point(558, 95);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(216, 20);
			this->textBox4->TabIndex = 43;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(512, 36);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(20, 10);
			this->button7->TabIndex = 46;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(503, 45);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(10, 20);
			this->button8->TabIndex = 47;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(531, 45);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(10, 20);
			this->button11->TabIndex = 48;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(512, 63);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(20, 10);
			this->button12->TabIndex = 49;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button13->Enabled = false;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(512, 45);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(20, 20);
			this->button13->TabIndex = 50;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(518, 472);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 20);
			this->button2->TabIndex = 51;
			this->button2->Text = L" п";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(558, 316);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(215, 22);
			this->button4->TabIndex = 52;
			this->button4->Text = L"x";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_3);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(558, 338);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(215, 22);
			this->button14->TabIndex = 53;
			this->button14->Text = L"x+1";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(558, 360);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(215, 22);
			this->button15->TabIndex = 54;
			this->button15->Text = L"sqrt(x)";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(558, 382);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(215, 22);
			this->button16->TabIndex = 55;
			this->button16->Text = L"x^2";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(558, 404);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(215, 22);
			this->button17->TabIndex = 56;
			this->button17->Text = L"x^3";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(558, 426);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(215, 22);
			this->button18->TabIndex = 57;
			this->button18->Text = L"sin(x)";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(558, 448);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(215, 22);
			this->button19->TabIndex = 58;
			this->button19->Text = L"cos(x)";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(558, 470);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(215, 22);
			this->button20->TabIndex = 59;
			this->button20->Text = L"(sin(x)-cos(x))^2";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(558, 205);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(41, 67);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 60;
			this->pictureBox1->TabStop = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->textBox5->Location = System::Drawing::Point(558, 49);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(216, 20);
			this->textBox5->TabIndex = 62;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->textBox6->Location = System::Drawing::Point(754, 179);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(20, 20);
			this->textBox6->TabIndex = 63;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label2->Location = System::Drawing::Point(727, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 24);
			this->label2->TabIndex = 64;
			this->label2->Text = L"n";
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button22->Enabled = false;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(518, 394);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(25, 20);
			this->button22->TabIndex = 66;
			this->button22->Text = L"f(x)";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click_1);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(518, 394);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(25, 20);
			this->button23->TabIndex = 67;
			this->button23->Text = L"f(x)";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Visible = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->Enabled = false;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(518, 420);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(25, 20);
			this->button24->TabIndex = 69;
			this->button24->Text = L" с";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(518, 420);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(25, 20);
			this->button21->TabIndex = 70;
			this->button21->Text = L" с";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Visible = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button25->Enabled = false;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(518, 446);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(25, 20);
			this->button25->TabIndex = 71;
			this->button25->Text = L" т";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->Location = System::Drawing::Point(518, 446);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(25, 20);
			this->button26->TabIndex = 72;
			this->button26->Text = L" т";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Visible = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->Location = System::Drawing::Point(716, 9);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(32, 15);
			this->button27->TabIndex = 73;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->ClientSize = System::Drawing::Size(797, 576);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button9);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Activated += gcnew System::EventHandler(this, &MyForm::MyForm_Activated);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	n = Double::Parse(textBox6->Text);
	ubound = Double::Parse(textBox1->Text);
	lbound = Double::Parse(textBox2->Text);
	if (lbound >= ubound && (n <= 6 || n % 2 != 0)) {
		this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(44)));
		this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(44)));
		this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(44)));
	}
	else if (lbound >= ubound || (n <= 6 || n % 2 != 0)) {
		if (lbound >= ubound) {
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
		}
		else {
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
		}
	}
	else {
		this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
			static_cast<System::Int32>(static_cast<System::Byte>(31)));
		this->chart1->Series[7]->Points->Clear();
		this->chart1->Series[0]->Points->Clear();
		this->chart1->Series[1]->Points->Clear();
		this->chart1->Series[2]->Points->Clear();
		this->chart1->Series[3]->Points->Clear();
		this->chart1->Series[4]->Points->Clear();
		this->chart1->Series[5]->Points->Clear();
		this->chart1->Series[6]->Points->Clear();
		this->button26->Visible = true;
		this->button22->Visible = true;
		this->button2->Visible = true;
		this->button23->Visible = true;
		this->button21->Visible = true;
		this->button24->Enabled = true;
		this->button22->Enabled = true;
		this->button25->Enabled = true;
		this->button3->Enabled = true;
		// строим график
		dx = (double)(ubound - lbound) / n;
		double step = 0.01;
		a = lbound - 25;
		b = ubound + 25;
		x = a;
		if (s == 3) {
			while (x < 0) {
				y = function(x, s);
				this->chart1->Series[0]->Points->AddXY(x, y);
				x += step;
			}
			x = x + step;
			while (x < b) {
				y = function(x, s);
				this->chart1->Series[1]->Points->AddXY(x, y);
				x += step;
			}
		}
		else {
			while (x <= b) {
				y = function(x, s);
				this->chart1->Series[0]->Points->AddXY(x, y);
				x += step;
			}
		}
		// simp
		double x0, y0, x1, y1, x2, y2;
		double A, B, C;
		int i = 1;

		for (int i = 0; i < sernum; i++) {
			if (seriesflag == 1) {
				int j = 8;
				rabotka1515::MyForm::chart1->Series->RemoveAt(j);
			}
		}
		seriesflag = 0;

		for (int j = 0; j < n / 2; j++) {
			
			x0 = lbound + j * dx * 2;
			y0 = function(x0, s);
			x1 = x0 + dx;
			y1 = function(x1, s);
			x2 = x0 + (2 * dx);
			y2 = function(x2, s);
			
			double mx[3][3];
			double d1[3][3];
			double d2[3][3];
			double d3[3][3];
			{ 
				mx[0][0] = pow(x0, 2);
				mx[0][1] = x0;
				mx[0][2] = 1;
				mx[1][0] = pow(x1, 2);
				mx[1][1] = x1;
				mx[1][2] = 1;
				mx[2][0] = pow(x2, 2);
				mx[2][1] = x2;
				mx[2][2] = 1;

				d1[0][0] = y0;
				d1[0][1] = x0;
				d1[0][2] = 1;
				d1[1][0] = y1;
				d1[1][1] = x1;
				d1[1][2] = 1;
				d1[2][0] = y2;
				d1[2][1] = x2;
				d1[2][2] = 1;

				d2[0][0] = pow(x0, 2);
				d2[0][1] = y0;
				d2[0][2] = 1;
				d2[1][0] = pow(x1, 2);
				d2[1][1] = y1;
				d2[1][2] = 1;
				d2[2][0] = pow(x2, 2);
				d2[2][1] = y2;
				d2[2][2] = 1;

				d3[0][0] = pow(x0, 2);
				d3[0][1] = x0;
				d3[0][2] = y0;
				d3[1][0] = pow(x1, 2);
				d3[1][1] = x1;
				d3[1][2] = y1;
				d3[2][0] = pow(x2, 2);
				d3[2][1] = x2;
				d3[2][2] = y2;
			}
			double opmx, opd1, opd2, opd3;

			opmx = mx[0][0] * ((mx[1][1] * mx[2][2]) - (mx[1][2] * mx[2][1])) - mx[0][1] * ((mx[1][0] * mx[2][2]) - (mx[1][2] * mx[2][0])) + mx[0][2] * ((mx[1][0] * mx[2][1]) - (mx[1][1] * mx[2][0]));
			opd1 = d1[0][0] * ((d1[1][1] * d1[2][2]) - (d1[1][2] * d1[2][1])) - d1[0][1] * ((d1[1][0] * d1[2][2]) - (d1[1][2] * d1[2][0])) + d1[0][2] * ((d1[1][0] * d1[2][1]) - (d1[1][1] * d1[2][0]));
			opd2 = d2[0][0] * ((d2[1][1] * d2[2][2]) - (d2[1][2] * d2[2][1])) - d2[0][1] * ((d2[1][0] * d2[2][2]) - (d2[1][2] * d2[2][0])) + d2[0][2] * ((d2[1][0] * d2[2][1]) - (d2[1][1] * d2[2][0]));
			opd3 = d3[0][0] * ((d3[1][1] * d3[2][2]) - (d3[1][2] * d3[2][1])) - d3[0][1] * ((d3[1][0] * d3[2][2]) - (d3[1][2] * d3[2][0])) + d3[0][2] * ((d3[1][0] * d3[2][1]) - (d3[1][1] * d3[2][0]));

			A = opd1 / opmx;
			B = opd2 / opmx;
			C = opd3 / opmx;

			rabotka1515::MyForm::chart1->Series->Add(j.ToString());
			this->chart1->Series[j.ToString()]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			this->chart1->Series[j.ToString()]->BorderWidth = 2;
			this->chart1->Series[j.ToString()]->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			
			for (x = x0; x <= x2; x = x + (dx * 0.1)) {
				y = (A * pow(x, 2) + B * x + C);
				this->chart1->Series[j.ToString()]->Points->AddXY(x, y);
			}

		}
		sernum = n / 2;
		seriesflag = 1;
		//трапеции
		/*for (x = lbound; x <= ubound - dx; x = x + dx) {
			if (x + dx == 0 && (s == 3||s==8)) {
				y = 0;
				this->chart1->Series[7]->Points->AddXY(x, y);
				y = function(x, s);
				this->chart1->Series[7]->Points->AddXY(x, y);
				y = function(x + dx, s);
				y = y * (-1);
				x = x + dx;
				this->chart1->Series[7]->Points->AddXY(x, y);
				x = x - dx;
			}
			else {
				y = 0;
				this->chart1->Series[7]->Points->AddXY(x, y);
				y = function(x, s);
				this->chart1->Series[7]->Points->AddXY(x, y);
				y = function(x + dx, s);
				x = x + dx;
				this->chart1->Series[7]->Points->AddXY(x, y);
				x = x - dx;
			}
		}*/
		for (x = lbound; x <= ubound - dx; x = x + dx) {
			y = 0;
			this->chart1->Series[7]->Points->AddXY(x, y);
			y = function(x, s);
			this->chart1->Series[7]->Points->AddXY(x, y);
			y = function(x + dx, s);
			x = x + dx;
			this->chart1->Series[7]->Points->AddXY(x, y);
			x = x - dx;

		}
		
		// квадратура

		for (x = lbound; x <= ubound - dx; x = x + dx) {
			y = 0;
			this->chart1->Series[2]->Points->AddXY(x, y);
			if (function(x,s)<0) {
				// y<0 y>
				if (function(x + dx, s) > function(x, s)) {
					if (function(x + dx, s) >= 0) {
						y = 0;
						this->chart1->Series[2]->Points->AddXY(x, y);
						x = x + dx;
						this->chart1->Series[2]->Points->AddXY(x, y);
						x = x - dx;
					}
					else {
						y = function(x + dx, s);
						this->chart1->Series[2]->Points->AddXY(x, y);
						x = x + dx;
						this->chart1->Series[2]->Points->AddXY(x, y);
						x = x - dx;
					}
					
				}
				// y<0 y<
				else if (function(x + dx, s) <= function(x, s)) {
					y = function(x, s);
					this->chart1->Series[2]->Points->AddXY(x, y);
					x = x + dx;
					this->chart1->Series[2]->Points->AddXY(x, y);
					x = x - dx;
				}
			}
			else {
				//y>0 y>
				if (function(x + dx, s) > function(x, s)) {
					y = function(x, s);
					this->chart1->Series[2]->Points->AddXY(x, y);
					x = x + dx;
					this->chart1->Series[2]->Points->AddXY(x, y);
					x = x - dx;
				}
				//y>0 y<
				else if (function(x + dx, s) <= function(x, s)) {
					if (function(x + dx, s) <= 0) {
						y = 0;
						this->chart1->Series[2]->Points->AddXY(x, y);
						x = x + dx;
						this->chart1->Series[2]->Points->AddXY(x, y);
						x = x - dx;
					}
					else {
						y = function(x + dx, s);
						this->chart1->Series[2]->Points->AddXY(x, y);
						x = x + dx;
						this->chart1->Series[2]->Points->AddXY(x, y);
						x = x - dx;
					}
				}
				
			}
			
			
		}

		// границы
		for (int i = -50; i < 50; i++) {
			x = lbound;
			y = i;
			this->chart1->Series[3]->Points->AddXY(x, y);
			x = ubound;
			this->chart1->Series[4]->Points->AddXY(x, y);
		}
		// вывод
		this->textBox5->Text = sumofIntSimp(lbound, ubound, n, dx, s).ToString();
		this->textBox4->Text = sumofIntTrap(lbound, ubound, n, dx, s).ToString();
		this->textBox3->Text = sumofInt(lbound, ubound, n, dx, s).ToString();
	}
	
}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[2]->Enabled = true;
	this->button3->Visible = false;
	this->button2->Visible = true;
}

private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->ChartAreas[0]->AxisX->Minimum--;
	this->chart1->ChartAreas[0]->AxisX->Maximum++;
	this->chart1->ChartAreas[0]->AxisY->Minimum--;
	this->chart1->ChartAreas[0]->AxisY->Maximum++;
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	if (this->chart1->ChartAreas[0]->AxisX->Maximum == 1 && this->chart1->ChartAreas[0]->AxisY->Maximum == 1
		&& this->chart1->ChartAreas[0]->AxisX->Minimum == -1 && this->chart1->ChartAreas[0]->AxisY->Minimum == -1) {
	}
	else {
		this->chart1->ChartAreas[0]->AxisX->Minimum++;
		this->chart1->ChartAreas[0]->AxisX->Maximum--;
		this->chart1->ChartAreas[0]->AxisY->Minimum++;
		this->chart1->ChartAreas[0]->AxisY->Maximum--;
	}
}

private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[0]->Points->Clear();
}
private: System::Void MyForm_Activated(System::Object^ sender, System::EventArgs^ e) {
	int x = 400, y = 400;
	this->chart1->Series[5]->Points->AddXY(x, y);
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->ChartAreas[0]->AxisY->Minimum++;
	this->chart1->ChartAreas[0]->AxisY->Maximum++;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->ChartAreas[0]->AxisX->Minimum++;
	this->chart1->ChartAreas[0]->AxisX->Maximum++;
}
private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->ChartAreas[0]->AxisX->Minimum--;
	this->chart1->ChartAreas[0]->AxisX->Maximum--;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->ChartAreas[0]->AxisY->Minimum--;
	this->chart1->ChartAreas[0]->AxisY->Maximum--;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[2]->Enabled = false;
	this->button3->Visible = true;
	this->button2->Visible = false;
}
private: System::Void button4_Click_3(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "x" + " dx";
	s = 1;
}
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "x+1" + " dx";
	s = 2;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "sqrt(x)" + " dx";
	s = 3;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "x^2" + " dx";
	
	s = 4;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "x^3" + " dx";
	
	s = 5;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "sin(x)" + " dx";
	s = 6;
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "cos(x)" + " dx";
	s = 7;
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "(sin(x)-cos(x))^2" + " dx";
	s = 8;
}

private: System::Void button22_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[0]->Enabled = true;
	this->chart1->Series[1]->Enabled = true;
	this->button22->Visible=false;
	this->button23->Visible = true;
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[0]->Enabled = false;
	this->chart1->Series[1]->Enabled = false;
	this->button23->Visible = false;
	this->button22->Visible = true;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text == "" || this->textBox1->Text == " " || this->textBox1->Text == "  " || this->textBox1->Text == "  ") {
		uboundflag = false;
	}
	else {
		uboundflag = true;
	}
	if (uboundflag == true && lboundflag == true && nflag == true) {
		this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
			static_cast<System::Int32>(static_cast<System::Byte>(249)));
		this->button1->Enabled = true;
	}
	else {
		this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
			static_cast<System::Int32>(static_cast<System::Byte>(63)));
		this->button1->Enabled = false;
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox2->Text == "" || this->textBox2->Text == " " || this->textBox2->Text == "  " || this->textBox2->Text == "  ") {
		lboundflag = false;
	}
	else {
		lboundflag = true;
	}
	if (uboundflag == true && lboundflag == true && nflag == true) {
		this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
			static_cast<System::Int32>(static_cast<System::Byte>(249)));
		this->button1->Enabled = true;
	}
	else {
		this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
			static_cast<System::Int32>(static_cast<System::Byte>(63)));
		this->button1->Enabled = false;
	}
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox6->Text == "" || this->textBox6->Text == " " || this->textBox6->Text == "  " || this->textBox6->Text == "  ") {
		nflag = false;
	}
	else {
		nflag = true;
	}
	if (uboundflag == true && lboundflag == true && nflag == true) {
		this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
			static_cast<System::Int32>(static_cast<System::Byte>(249)));
		this->button1->Enabled = true;
	}
	else {
		this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
			static_cast<System::Int32>(static_cast<System::Byte>(63)));
		this->button1->Enabled = false;
	}
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int j = 8; j < sernum+8; j++) {
		rabotka1515::MyForm::chart1->Series[j]->Enabled = true;
	}
	this->button21->Visible = true;
	this->button24->Visible = false;
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int j = 8; j < sernum + 8; j++) {
		rabotka1515::MyForm::chart1->Series[j]->Enabled = false;
	}

	this->button24->Visible = true;
	this->button21->Visible = false;
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	rabotka1515::MyForm::chart1->Series[7]->Enabled = true;
	this->button26->Visible = true;
	this->button25->Visible = false;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	rabotka1515::MyForm::chart1->Series[7]->Enabled = false;
	this->button26->Visible = false;
	this->button25->Visible = true;
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->WindowState = FormWindowState::Minimized;


}
};
}


