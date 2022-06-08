#pragma once
#define _USE_MATH_DEFINES
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


















	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button2;














	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button27;

	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;








	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;






















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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(754, 9);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(31, 15);
			this->button9->TabIndex = 12;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->chart1->BackSecondaryColor = System::Drawing::Color::Red;
			this->chart1->BorderlineColor = System::Drawing::Color::Maroon;
			chartArea1->AxisX->Crossing = 0;
			chartArea1->AxisX->InterlacedColor = System::Drawing::Color::White;
			chartArea1->AxisX->Interval = 0.5;
			chartArea1->AxisX->LabelStyle->ForeColor = System::Drawing::Color::WhiteSmoke;
			chartArea1->AxisX->LineColor = System::Drawing::Color::White;
			chartArea1->AxisX->LineWidth = 2;
			chartArea1->AxisX->MajorGrid->Interval = 0.5;
			chartArea1->AxisX->MajorGrid->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea1->AxisX->MajorGrid->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			chartArea1->AxisX->Maximum = 6;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisX->ScaleBreakStyle->LineColor = System::Drawing::Color::Bisque;
			chartArea1->AxisX->TitleForeColor = System::Drawing::Color::White;
			chartArea1->AxisX2->InterlacedColor = System::Drawing::Color::Black;
			chartArea1->AxisX2->MajorGrid->LineColor = System::Drawing::Color::White;
			chartArea1->AxisX2->MajorTickMark->LineColor = System::Drawing::Color::White;
			chartArea1->AxisY->Crossing = 0;
			chartArea1->AxisY->InterlacedColor = System::Drawing::Color::Black;
			chartArea1->AxisY->Interval = 0.5;
			chartArea1->AxisY->LineColor = System::Drawing::Color::White;
			chartArea1->AxisY->LineWidth = 2;
			chartArea1->AxisY->MajorGrid->Interval = 0.5;
			chartArea1->AxisY->MajorGrid->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			chartArea1->AxisY->Maximum = 3;
			chartArea1->AxisY->Minimum = -3;
			chartArea1->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea1->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			chartArea1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Top;
			chartArea1->BorderColor = System::Drawing::Color::Silver;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(-30, 0);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			series1->Name = L"Series1";
			series2->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Gainsboro;
			series2->Name = L"Series2";
			series3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)));
			series3->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Color = System::Drawing::Color::LightGray;
			series3->Name = L"Series3";
			series4->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			series4->BorderWidth = 2;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Color = System::Drawing::Color::Thistle;
			series4->Name = L"Series4";
			series5->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			series5->BorderWidth = 2;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Color = System::Drawing::Color::LightSteelBlue;
			series5->Name = L"Series5";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Name = L"Series6";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Size = System::Drawing::Size(606, 576);
			this->chart1->TabIndex = 15;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->button1->Location = System::Drawing::Point(559, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 347);
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
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(517, 413);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 20);
			this->button3->TabIndex = 18;
			this->button3->Text = L"2";
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
			this->button5->Location = System::Drawing::Point(517, 517);
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
			this->button6->Location = System::Drawing::Point(517, 491);
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
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->label6->Location = System::Drawing::Point(32, 8);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 16);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Differential Equations";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->button2->Location = System::Drawing::Point(517, 413);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 20);
			this->button2->TabIndex = 51;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(517, 361);
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
			this->button23->Location = System::Drawing::Point(517, 361);
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
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(517, 465);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(25, 20);
			this->button24->TabIndex = 69;
			this->button24->Text = L"4";
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
			this->button21->Location = System::Drawing::Point(517, 465);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(25, 20);
			this->button21->TabIndex = 70;
			this->button21->Text = L"4";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Visible = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(517, 439);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(25, 20);
			this->button25->TabIndex = 71;
			this->button25->Text = L"3";
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
			this->button26->Location = System::Drawing::Point(517, 439);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(25, 20);
			this->button26->TabIndex = 72;
			this->button26->Text = L"3";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Visible = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(716, 9);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(31, 15);
			this->button27->TabIndex = 73;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(559, 136);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(214, 32);
			this->button29->TabIndex = 84;
			this->button29->Text = L"2xy\'+y^2=1";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click_1);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->Location = System::Drawing::Point(559, 106);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(214, 32);
			this->button30->TabIndex = 83;
			this->button30->Text = L"xy\'+x^2+xy-1=0";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click_1);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(554, 36);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 29);
			this->label12->TabIndex = 85;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(517, 387);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(25, 20);
			this->button4->TabIndex = 86;
			this->button4->Text = L"1";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(517, 387);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(25, 20);
			this->button10->TabIndex = 87;
			this->button10->Text = L"1";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_2);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(559, 165);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(214, 32);
			this->button14->TabIndex = 89;
			this->button14->Text = L"(2xy^2-y)dx+xdx=0";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_2);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(559, 76);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(214, 32);
			this->button15->TabIndex = 88;
			this->button15->Text = L"y-y\'=y^2+xy\'";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(797, 576);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label6);
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
	this->chart1->Series[0]->Points->Clear();
	this->chart1->Series[1]->Points->Clear();
	this->chart1->Series[2]->Points->Clear();
	this->chart1->Series[3]->Points->Clear();
	this->chart1->Series[4]->Points->Clear();
	this->chart1->Series[0]->Enabled = true;
	this->chart1->Series[1]->Enabled = true;
	this->chart1->Series[2]->Enabled = true;
	this->chart1->Series[3]->Enabled = true;
	this->chart1->Series[4]->Enabled = true;
	this->button26->Visible = true;
	this->button23->Visible = true;
	this->button2->Visible = true;
	this->button10->Visible = true;
	this->button21->Visible = true;
	// строим график
	dx = (double)(ubound - lbound) / n;
	double step = 0.01;
	a = -25;
	b = 25;
	x = a;

	int i, n;
	double x, y, h;
	double k1, k2, k3, k4;
	h = 0.5;
	n = 15*2;
	// pred-cor
	x = 0.01;
	y = function(x, s);
	this->chart1->Series[4]->Points->AddXY(x, y);
	for (i = 0; i < n; i++)
	{
		k1 = h * ode(x, y, s);
		k2 = h * ode(x + (h / 2), y + (k1 / 2), s);
		y = y + k2;
		x += h;
		this->chart1->Series[4]->Points->AddXY(x, y);
	}
	// 3rd
	x = 0.01;
	y = function(x, s);
	this->chart1->Series[1]->Points->AddXY(x, y);
	for (i = 0; i < n; i++)
	{
		k1 = h * ode(x, y, s);
		k2 = h * ode(x + (h / 2), y + (k1 / 2), s);
		k3 = h * ode(x + h, y + (2 * k2) - k1, s);
		y += ((k1 + 4 * k2 + k3) / 6);
		x += h;
		this->chart1->Series[1]->Points->AddXY(x, y);
	}
	// 4th
	x = 0.01;
	y = function(x, s);
	this->chart1->Series[3]->Points->AddXY(x, y);
	for (i = 0; i < n; i++)
	{
		k1 = h * ode(x, y, s);
		k2 = h * ode(x + (h / 2), y + (k1 / 2), s);
		k3 = h * ode(x + (h/2), y + (k2/2), s);
		k4 = h * ode(x + h, y + k3, s);
		y = y + ((k1 + 2 * k2 + 2* k3 + k4) / 6);
		x = x + h;
		this->chart1->Series[3]->Points->AddXY(x, y);
	}
	// eiler
	x = 0.01;
	y = function(x,s);
	this->chart1->Series[2]->Points->AddXY(x, y); // eiler
	for (i = 0; i < n; i++)
	{
		if (x == 0) {
			y += h * ode(x + 0.01, y, s); // вычисление yi
			x += h;
			this->chart1->Series[2]->Points->AddXY(x, y);
			y += h * ode(x - 0.01, y, s); // вычисление yi
			x += h;
			this->chart1->Series[2]->Points->AddXY(x, y);
			i++;
			i++;
		}
		y += h * ode(x, y, s); // вычисление yi
		x += h;
		this->chart1->Series[2]->Points->AddXY(x, y);
	}
	h = 0.1;
	n = 150;
	x = 0.01;
	y = function(x, s);
	this->chart1->Series[0]->Points->AddXY(x, y);
	for (i = 0; i < n; i++) // function
	{
		x += h;
		y = function(x, s);
		this->chart1->Series[0]->Points->AddXY(x, y);
	}
	
	
}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[4]->Enabled = true;
	this->button2->Visible = true;
}

private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	/*this->chart1->ChartAreas[0]->AxisX->Minimum--;*/
	this->chart1->ChartAreas[0]->AxisX->Maximum++;
	this->chart1->ChartAreas[0]->AxisY->Minimum--;
	this->chart1->ChartAreas[0]->AxisY->Maximum++;
	
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	if (this->chart1->ChartAreas[0]->AxisX->Maximum == 1 && this->chart1->ChartAreas[0]->AxisY->Maximum == 1
		&& this->chart1->ChartAreas[0]->AxisX->Minimum == -1 && this->chart1->ChartAreas[0]->AxisY->Minimum == -1) {
	}
	else {
		/*this->chart1->ChartAreas[0]->AxisX->Minimum++;*/
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
	if (this->chart1->ChartAreas[0]->AxisX->Minimum == 0) {
	}
	else {
		this->chart1->ChartAreas[0]->AxisX->Minimum--;
		this->chart1->ChartAreas[0]->AxisX->Maximum--;
	}
	
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->ChartAreas[0]->AxisY->Minimum--;
	this->chart1->ChartAreas[0]->AxisY->Maximum--;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[4]->Enabled = false;
	this->button2->Visible = false;
}
private: System::Void button4_Click_3(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "x" + " dx";
}
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "x+1" + " dx";

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "1/x" + " dx";

}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "x^2" + " dx";
	

}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "x^3" + " dx";
	
	
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "sin(x)" + " dx";

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "cos(x)" + " dx";
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label12->Text = "ln(x)" + " dx";
}

private: System::Void button22_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[0]->Enabled = true;
	this->button22->Visible=false;
	this->button23->Visible = true;
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[0]->Enabled = false;
	this->button23->Visible = false;
	this->button22->Visible = true;
}
private: System::Void button30_Click_1(System::Object^ sender, System::EventArgs^ e) {
	s = 1;
	label12->Text = "xy'+x^2+xy-1=0";
	button1->Enabled = true;
	this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
		static_cast<System::Int32>(static_cast<System::Byte>(240)));
}
private: System::Void button29_Click_1(System::Object^ sender, System::EventArgs^ e) {
	s = 2;
	label12->Text = "2xy'+y^2=1";
	button1->Enabled = true;
	this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
		static_cast<System::Int32>(static_cast<System::Byte>(240)));
}
private: System::Void button10_Click_2(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[2]->Enabled = false;
	this->button10->Visible = false;
}
private: System::Void button14_Click_2(System::Object^ sender, System::EventArgs^ e) {
	s = 3;
	label12->Text = "(2xy^2-y)dx+xdx=0";
	button1->Enabled = true;
	this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
		static_cast<System::Int32>(static_cast<System::Byte>(240)));
}
private: System::Void button15_Click_1(System::Object^ sender, System::EventArgs^ e) {
	s = 5;
	label12->Text = "y-y'=y^2+xy'";
	button1->Enabled = true;
	this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
		static_cast<System::Int32>(static_cast<System::Byte>(240)));
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[2]->Enabled = true;
	this->button10->Visible = true;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[1]->Enabled = false;
	this->button26->Visible = false;
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[1]->Enabled = true;
	this->button26->Visible = true;
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[3]->Enabled = false;
	this->button21->Visible = false;
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[3]->Enabled = true;
	this->button21->Visible = true;
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}


