#pragma once
#include <cmath>
namespace yapaySinirAglarý {

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
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  actionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  discriminantFunctionToolStripMenuItem;

	private:
		/// <summary>
		/// Required designer variable.
		int boyut = 1;
		int boyut2 = 1;
		int** class1Degerler = new int*[boyut];
		int** class2Degerler = new int*[boyut2];
		int i = 0, j = 0, bias = 1;
		float *weight = new float[3];
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::ToolStripMenuItem^  binaryToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  drawRandomLineToolStripMenuItem;
	private: System::Windows::Forms::Label^  label4;








	private: System::Windows::Forms::ToolStripMenuItem^  exiToolStripMenuItem;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ToolStripMenuItem^  continousToolStripMenuItem;





			 /// </summary>
			 System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
				 this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
				 this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				 this->actionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->drawRandomLineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->discriminantFunctionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->binaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->exiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 this->continousToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 this->menuStrip1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Location = System::Drawing::Point(27, 43);
				 this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(500, 500);
				 this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
				 this->pictureBox1->TabIndex = 0;
				 this->pictureBox1->TabStop = false;
				 this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
				 this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::tikla);
				 // 
				 // radioButton1
				 // 
				 this->radioButton1->AutoSize = true;
				 this->radioButton1->Checked = true;
				 this->radioButton1->Location = System::Drawing::Point(575, 83);
				 this->radioButton1->Margin = System::Windows::Forms::Padding(2);
				 this->radioButton1->Name = L"radioButton1";
				 this->radioButton1->Size = System::Drawing::Size(61, 19);
				 this->radioButton1->TabIndex = 1;
				 this->radioButton1->TabStop = true;
				 this->radioButton1->Text = L"Class 1";
				 this->radioButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 this->radioButton1->UseVisualStyleBackColor = true;
				 // 
				 // radioButton2
				 // 
				 this->radioButton2->AutoSize = true;
				 this->radioButton2->Location = System::Drawing::Point(734, 83);
				 this->radioButton2->Margin = System::Windows::Forms::Padding(2);
				 this->radioButton2->Name = L"radioButton2";
				 this->radioButton2->Size = System::Drawing::Size(64, 19);
				 this->radioButton2->TabIndex = 2;
				 this->radioButton2->Text = L"Class 2";
				 this->radioButton2->UseVisualStyleBackColor = true;
				 // 
				 // menuStrip1
				 // 
				 this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
				 this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
				 this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->actionsToolStripMenuItem });
				 this->menuStrip1->Location = System::Drawing::Point(0, 0);
				 this->menuStrip1->Name = L"menuStrip1";
				 this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
				 this->menuStrip1->Size = System::Drawing::Size(885, 24);
				 this->menuStrip1->TabIndex = 3;
				 this->menuStrip1->Text = L"menuStrip1";
				 // 
				 // actionsToolStripMenuItem
				 // 
				 this->actionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					 this->drawRandomLineToolStripMenuItem,
						 this->discriminantFunctionToolStripMenuItem, this->exiToolStripMenuItem
				 });
				 this->actionsToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comfortaa", 8.25F));
				 this->actionsToolStripMenuItem->Name = L"actionsToolStripMenuItem";
				 this->actionsToolStripMenuItem->Size = System::Drawing::Size(62, 20);
				 this->actionsToolStripMenuItem->Text = L"Ýþlemler";
				 // 
				 // drawRandomLineToolStripMenuItem
				 // 
				 this->drawRandomLineToolStripMenuItem->Name = L"drawRandomLineToolStripMenuItem";
				 this->drawRandomLineToolStripMenuItem->Size = System::Drawing::Size(188, 22);
				 this->drawRandomLineToolStripMenuItem->Text = L"Random çizme";
				 this->drawRandomLineToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::drawRandomLineToolStripMenuItem_Click);
				 // 
				 // discriminantFunctionToolStripMenuItem
				 // 
				 this->discriminantFunctionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					 this->binaryToolStripMenuItem,
						 this->continousToolStripMenuItem
				 });
				 this->discriminantFunctionToolStripMenuItem->Name = L"discriminantFunctionToolStripMenuItem";
				 this->discriminantFunctionToolStripMenuItem->Size = System::Drawing::Size(188, 22);
				 this->discriminantFunctionToolStripMenuItem->Text = L"1 Katmanlý Perceptron";
				 // 
				 // binaryToolStripMenuItem
				 // 
				 this->binaryToolStripMenuItem->Name = L"binaryToolStripMenuItem";
				 this->binaryToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				 this->binaryToolStripMenuItem->Text = L"Binary";
				 this->binaryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::binaryToolStripMenuItem_Click);
				 // 
				 // exiToolStripMenuItem
				 // 
				 this->exiToolStripMenuItem->Name = L"exiToolStripMenuItem";
				 this->exiToolStripMenuItem->Size = System::Drawing::Size(188, 22);
				 this->exiToolStripMenuItem->Text = L"Çýkýþ";
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(604, 175);
				 this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(95, 15);
				 this->label1->TabIndex = 4;
				 this->label1->Text = L"Týklanan Nokta : ";
				 this->label1->Visible = false;
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(604, 252);
				 this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(128, 15);
				 this->label2->TabIndex = 5;
				 this->label2->Text = L"Class 1 - Örnek Sayýsý : ";
				 this->label2->Visible = false;
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(572, 362);
				 this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(45, 15);
				 this->label4->TabIndex = 7;
				 this->label4->Text = L"Cycle : ";
				 this->label4->Visible = false;
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->Location = System::Drawing::Point(604, 296);
				 this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(131, 15);
				 this->label8->TabIndex = 9;
				 this->label8->Text = L"Class 2 - Örnek Sayýsý : ";
				 this->label8->Visible = false;
				 // 
				 // coToolStripMenuItem
				 // 
				 this->continousToolStripMenuItem->Name = L"coToolStripMenuItem";
				 this->continousToolStripMenuItem->Size = System::Drawing::Size(152, 22);
				 this->continousToolStripMenuItem->Text = L"Continous";
				 this->continousToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::continousToolStripMenuItem_Click);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::ControlDark;
				 this->ClientSize = System::Drawing::Size(885, 495);
				 this->Controls->Add(this->label8);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->menuStrip1);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->radioButton1);
				 this->Controls->Add(this->radioButton2);
				 this->Font = (gcnew System::Drawing::Font(L"Comfortaa", 8.25F));
				 this->MainMenuStrip = this->menuStrip1;
				 this->Margin = System::Windows::Forms::Padding(2);
				 this->Name = L"MyForm";
				 this->Text = L"Yapay Sinir Aðlarý";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 this->menuStrip1->ResumeLayout(false);
				 this->menuStrip1->PerformLayout();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		int genislik = pictureBox1->Size.Width;         // PictureBox'un geniþliði  "genislik"  adýnda bir deðiþkene atandý.
		int yükseklik = pictureBox1->Size.Height;       // PictureBox'un yüksekliði "yükseklik" adýnda bir deðiþkene atandý.
		Pen^ siyah = gcnew Pen(Color::Black);           // Koordinat sistemi oluþturmak için siyah bir kalem oluþturuldu.

		Graphics^ grafik = e->Graphics; 
		
		grafik->Clear(Color::White);   // Koordinat sistemi beyaza boyandý.
		grafik->DrawLine(siyah, genislik / 2, 0, genislik / 2, yükseklik);
		grafik->DrawLine(siyah, 0, yükseklik / 2, genislik, yükseklik / 2);

	}
	private: System::Void tikla(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		Pen^ yesil = gcnew Pen(Color::Green);  
		Pen^ kirmizi = gcnew Pen(Color::Red);

		Graphics^ noktaCiz = pictureBox1->CreateGraphics();

		int noktaX = e->X - (pictureBox1->Size.Width / 2);        
		int noktaY = (pictureBox1->Size.Height / 2) - e->Y;

		if (radioButton1->Checked) { //Class1 seçiliyse bu bloða girecek.
			
			noktaCiz->DrawLine(kirmizi, (e->X), (e->Y + 4), (e->X), (e->Y - 4));
			noktaCiz->DrawLine(kirmizi, (e->X - 4), (e->Y), (e->X + 4), (e->Y));
			int k = boyut - 1;
			for (k; k < boyut; k++)
				class1Degerler[k] = new int[2];
			boyut++;
			class1Degerler[i][0] = noktaX;
			class1Degerler[i][1] = noktaY;
			label1->Visible = true;
			label1->Text = "Týklanan Nokta : (" + noktaX + "," + noktaY + ")";
			label2->Visible = true;
			label2->Text = "Class 1 - Örnek Sayýsý : \n\t\t\t" + (boyut - 1);
			i++;
		}
		if (radioButton2->Checked) { //Class2 seçiliyse bu bloða girecek.
			noktaCiz->DrawLine(yesil, (e->X), (e->Y + 4), (e->X), (e->Y - 4));
			noktaCiz->DrawLine(yesil, (e->X - 4), (e->Y), (e->X + 4), (e->Y));
			int l = boyut2 - 1;
			for (l; l < boyut2; l++)
				class2Degerler[l] = new int[2];
			boyut2++;
			class2Degerler[j][0] = noktaX;
			class2Degerler[j][1] = noktaY;
			label1->Visible = true;
			label1->Text = "Týklanan Nokta : (" + noktaX + "," + noktaY+ ")";
			label8->Visible = true;
			label8->Text = "Class 2 / Örnek Sayýsý : \n\t\t\t" + (boyut2 - 1);
			j++;
		}
	}
	private: System::Void binaryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		float deltaAgirligi[3];
		int d1 = -1, d2 = 1, O,hata = 1;
		int net;
		float cizilecekX, cizilecekY, cizilecekY2;
		float c = 10;
		Graphics^ dogruCizme = pictureBox1->CreateGraphics();
		Pen^ siyah = gcnew Pen(Color::Black);
		Pen^ yesil = gcnew Pen(Color::Green);
		Pen^ kirmizi = gcnew Pen(Color::Red);
		siyah->Width = 1,6;
		int cycle = 0;
		while (hata<0.2) {
			hata = 0;
			for (int ii = 0; ii<(boyut - 1); ii++) {

				net = (weight[0] * class1Degerler[ii][0] + weight[1] * class1Degerler[ii][1] + weight[2] * bias);
				if (net > 0) O = 1;
				else O = -1;

				deltaAgirligi[0] = c * (d1 - O)*class1Degerler[ii][0];
				deltaAgirligi[1] = c * (d1 - O)*class1Degerler[ii][1];
				deltaAgirligi[2] = c * (d1 - O)*bias;

				weight[0] += deltaAgirligi[0];
				weight[1] += deltaAgirligi[1];
				weight[2] += deltaAgirligi[2];

				//Cizdirme noktalarýnýn bulunmasý
				if (weight[0] == 0) { // y= a doðrusu
					cizilecekY = (pictureBox1->Size.Height / 2) - (-weight[2] / weight[1]);
					cizilecekX = pictureBox1->Size.Width; 
					pictureBox1->Refresh();
					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}
					dogruCizme->DrawLine(siyah, 0.0, cizilecekY, cizilecekX, cizilecekY);
				}
				else if (weight[1] == 0) { 
					cizilecekX = (-weight[2] / weight[0]) + (pictureBox1->Size.Width / 2);
					cizilecekY = pictureBox1->Size.Height; 
					pictureBox1->Refresh();
					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}
					dogruCizme->DrawLine(siyah, cizilecekX, 0.0, cizilecekX, cizilecekY);
				}
				else { // Ýki parametreli doðru

					cizilecekY = (pictureBox1->Size.Height / 2) - ((-weight[2] - pictureBox1->Size.Width / 2 * weight[0]) / weight[1]);
					cizilecekY2 = (pictureBox1->Size.Height / 2) - ((-weight[2] + pictureBox1->Size.Width / 2 * weight[0]) / weight[1]);
					pictureBox1->Refresh();
					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}
					dogruCizme->DrawLine(siyah, (float)pictureBox1->Size.Width, cizilecekY, 0.0, cizilecekY2);

				}
				hata += abs(d1 - O) / 2;

			}

			for (int jj = 0; jj<(boyut2 - 1); jj++) {
				net = (weight[0] * class2Degerler[jj][0] + weight[1] * class2Degerler[jj][1] + weight[2] * bias);
				if (net > 0) O = 1;
				else O = -1;

				deltaAgirligi[0] = c * (d2 - O)*class2Degerler[jj][0];
				deltaAgirligi[1] = c * (d2 - O)*class2Degerler[jj][1];
				deltaAgirligi[2] = c * (d2 - O)*bias;

				weight[0] += deltaAgirligi[0];
				weight[1] += deltaAgirligi[1];
				weight[2] += deltaAgirligi[2];

				//Çizdirmenin baþlayacaðý noktalarýn bulunmasý
				if (weight[0] == 0) { 
					cizilecekY = (pictureBox1->Size.Height / 2) - (-weight[2] / weight[1]);
					cizilecekX = pictureBox1->Size.Width; 
					pictureBox1->Refresh();
					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}
					dogruCizme->DrawLine(siyah, 0.0, cizilecekY, cizilecekX, cizilecekY);
				}
				else if (weight[1] == 0) { // x=a doðrusu
					cizilecekX = (-weight[2] / weight[0]) + (pictureBox1->Size.Width / 2);
					cizilecekY = pictureBox1->Size.Height; //max y
					pictureBox1->Refresh();

					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}
					dogruCizme->DrawLine(siyah, cizilecekX, 0.0, cizilecekX, cizilecekY);
				}
				else { // iki parametreli normal doðru

					cizilecekY = (pictureBox1->Size.Height / 2) - ((-weight[2] - pictureBox1->Size.Width / 2 * weight[0]) / weight[1]);
					cizilecekY2 = (pictureBox1->Size.Height / 2) - ((-weight[2] + pictureBox1->Size.Width / 2 * weight[0]) / weight[1]);
					pictureBox1->Refresh();
					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}


					dogruCizme->DrawLine(siyah, (float)pictureBox1->Size.Width, cizilecekY, 0.0, cizilecekY2);

				}
				hata += abs(d2 - O) / 2;
			}
			cycle++;
			label4->Visible = true;
			label4->Text = ("Cycle : " + cycle);
		}
		MessageBox::Show("     Tamamlandý!\n           Cycle: " + cycle, "Binary Sonucu");
	}//BINARY PERCEPTRON
	private: System::Void continousToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		float deltaWeightsForContinous[3];
		int d1 = -1, d2 = 1, O;
		float hata = 1;
		int net;
		float fnet = 0;
		float derivedFnet = 0;
		fnet = 2 / 1 - (exp(net));
		derivedFnet = 1 / 2 * (1 - (fnet*fnet));
		float cizilecekX, cizilecekY, cizilecekY2;
		float m = 0.1;
		int c = 1;
		Graphics^ dogruCizme = pictureBox1->CreateGraphics();
		Pen^ siyah = gcnew Pen(Color::Black);
		Pen^ yesil = gcnew Pen(Color::Green);
		Pen^ kirmizi = gcnew Pen(Color::Red);
		siyah->Width = 1, 6;
		int cycle = 0;
		while (hata != 0) {
			hata = 0;
			for (int ii = 0; ii<(boyut - 1); ii++) {
                net = (weight[0] * class1Degerler[ii][0] + weight[1] * class1Degerler[ii][1] + weight[2] * bias);
				fnet = 2 / 1 - (exp(net));
				derivedFnet = 1 / 2 * (1 - (fnet*fnet));

				deltaWeightsForContinous[0] = (d2 - fnet) * derivedFnet*class1Degerler[ii][0];
				deltaWeightsForContinous[1] = (d2 - fnet) * derivedFnet*class1Degerler[ii][1];
				deltaWeightsForContinous[2] = (d2 - fnet) * derivedFnet*class1Degerler[ii][2];

				weight[0] += deltaWeightsForContinous[0];
				weight[1] += deltaWeightsForContinous[1];
				weight[2] += deltaWeightsForContinous[2];



				//Cizdirme noktalarýnýn bulunmasý
				if (weight[0] == 0) { // y= a doðrusu
					cizilecekY = (pictureBox1->Size.Height / 2) - (-weight[2] / weight[1]);
					cizilecekX = pictureBox1->Size.Width;
					pictureBox1->Refresh();
					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}
					dogruCizme->DrawLine(siyah, 0.0, cizilecekY, cizilecekX, cizilecekY);
				}
				else if (weight[1] == 0) {
					cizilecekX = (-weight[2] / weight[0]) + (pictureBox1->Size.Width / 2);
					cizilecekY = pictureBox1->Size.Height;
					pictureBox1->Refresh();
					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}
					dogruCizme->DrawLine(siyah, cizilecekX, 0.0, cizilecekX, cizilecekY);
				}
				else { // Ýki parametreli doðru

					cizilecekY = (pictureBox1->Size.Height / 2) - ((-weight[2] - pictureBox1->Size.Width / 2 * weight[0]) / weight[1]);
					cizilecekY2 = (pictureBox1->Size.Height / 2) - ((-weight[2] + pictureBox1->Size.Width / 2 * weight[0]) / weight[1]);
					pictureBox1->Refresh();
					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}
					dogruCizme->DrawLine(siyah, (float)pictureBox1->Size.Width, cizilecekY, 0.0, cizilecekY2);

				}
				hata = 1 / 2 * (d2 - fnet)*(d2 - fnet);

			}

			for (int jj = 0; jj<(boyut2 - 1); jj++) {
				net = (weight[0] * class1Degerler[jj][0] + weight[1] * class1Degerler[jj][1] + weight[2] * bias);
				fnet = 2 / 1 - (exp(net));
				derivedFnet = 1 / 2 * (1 - (fnet*fnet));

				deltaWeightsForContinous[0] = (d2 - fnet) * derivedFnet*class1Degerler[jj][0];
				deltaWeightsForContinous[1] = (d2 - fnet) * derivedFnet*class1Degerler[jj][1];
				deltaWeightsForContinous[2] = (d2 - fnet) * derivedFnet*class1Degerler[jj][2];

				weight[0] += deltaWeightsForContinous[0];
				weight[1] += deltaWeightsForContinous[1];
				weight[2] += deltaWeightsForContinous[2];

				//Çizdirmenin baþlayacaðý noktalarýn bulunmasý
				if (weight[0] == 0) {
					cizilecekY = (pictureBox1->Size.Height / 2) - (-weight[2] / weight[1]);
					cizilecekX = pictureBox1->Size.Width;
					pictureBox1->Refresh();
					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}
					dogruCizme->DrawLine(siyah, 0.0, cizilecekY, cizilecekX, cizilecekY);
				}
				else if (weight[1] == 0) { // x=a doðrusu
					cizilecekX = (-weight[2] / weight[0]) + (pictureBox1->Size.Width / 2);
					cizilecekY = pictureBox1->Size.Height; //max y
					pictureBox1->Refresh();

					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}
					dogruCizme->DrawLine(siyah, cizilecekX, 0.0, cizilecekX, cizilecekY);
				}
				else { // iki parametreli normal doðru

					cizilecekY = (pictureBox1->Size.Height / 2) - ((-weight[2] - pictureBox1->Size.Width / 2 * weight[0]) / weight[1]);
					cizilecekY2 = (pictureBox1->Size.Height / 2) - ((-weight[2] + pictureBox1->Size.Width / 2 * weight[0]) / weight[1]);
					pictureBox1->Refresh();
					for (int m = 0; m < boyut - 1; m++) {
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]), (class1Degerler[m][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class1Degerler[m][1]));
						dogruCizme->DrawLine(kirmizi, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) - 4, (class1Degerler[m][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class1Degerler[m][1]) + 4);
					}
					for (int n = 0; n < boyut2 - 1; n++) {
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2) - 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]), (class2Degerler[n][0] + pictureBox1->Size.Width / 2) + 4, (pictureBox1->Size.Height / 2 - class2Degerler[n][1]));
						dogruCizme->DrawLine(yesil, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) - 4, (class2Degerler[n][0] + pictureBox1->Size.Width / 2), (pictureBox1->Size.Height / 2 - class2Degerler[n][1]) + 4);
					}


					dogruCizme->DrawLine(siyah, (float)pictureBox1->Size.Width, cizilecekY, 0.0, cizilecekY2);

				}
				hata = 1 / 2 * (d2 - fnet)*(d2 - fnet);
			}
			cycle++;
			label4->Visible = true;
			label4->Text = ("Cycle : " + cycle);
		}
		MessageBox::Show("     Tamamlandý!\n           Cycle: " + cycle, "Continous Sonucu");


    }//CONTÝNOUS PERCEPTRON
	private: System::Void drawRandomLineToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Pen^ siyah = gcnew Pen(Color::Black);
		siyah->Width = 1.5;
		Graphics^ randomCiz = pictureBox1->CreateGraphics();
		weight[0] = 3;
		weight[1] = 5;
		weight[2] = 8;


		int yEkseni = (pictureBox1->Size.Height / 3) - (4 - (pictureBox1->Size.Width / 3) / 3);
		int yEkseni2 = (pictureBox1->Size.Height / 3) - (4 + (pictureBox1->Size.Width / 3)) / 3;
		
		
		randomCiz->DrawLine(siyah, 0, yEkseni, pictureBox1->Size.Width, yEkseni2);
		MessageBox::Show("Random deðerler verildi.");
	}

	private: System::Void exiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}