#pragma once
#include "windows.h";
#include "stdio.h";
#include "stdlib.h"
namespace monitoreo_refri {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::IO::Ports::SerialPort^  serialPort;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		int i = 0, j = 0;
		FILE *fi;
		Graphics ^g;
		Pen ^p1, ^p2, ^p3, ^p4, ^def;
		Brush ^b;
		int x, y1, y2, y3, y4;
		int h, w;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  picture;

			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				 this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->textBox6 = (gcnew System::Windows::Forms::TextBox());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->textBox5 = (gcnew System::Windows::Forms::TextBox());
				 this->serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
				 this->picture = (gcnew System::Windows::Forms::PictureBox());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 this->label9 = (gcnew System::Windows::Forms::Label());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->label12 = (gcnew System::Windows::Forms::Label());
				 this->label13 = (gcnew System::Windows::Forms::Label());
				 this->label14 = (gcnew System::Windows::Forms::Label());
				 this->label15 = (gcnew System::Windows::Forms::Label());
				 this->label16 = (gcnew System::Windows::Forms::Label());
				 this->groupBox1->SuspendLayout();
				 this->groupBox2->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->Controls->Add(this->label4);
				 this->groupBox1->Controls->Add(this->label3);
				 this->groupBox1->Controls->Add(this->label2);
				 this->groupBox1->Controls->Add(this->label1);
				 this->groupBox1->Controls->Add(this->textBox4);
				 this->groupBox1->Controls->Add(this->textBox3);
				 this->groupBox1->Controls->Add(this->textBox2);
				 this->groupBox1->Controls->Add(this->textBox1);
				 this->groupBox1->Location = System::Drawing::Point(35, 194);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Size = System::Drawing::Size(171, 147);
				 this->groupBox1->TabIndex = 0;
				 this->groupBox1->TabStop = false;
				 this->groupBox1->Text = L"Temperatura";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(6, 114);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(49, 13);
				 this->label4->TabIndex = 7;
				 this->label4->Text = L"Sensor 4";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(6, 87);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(49, 13);
				 this->label3->TabIndex = 6;
				 this->label3->Text = L"Sensor 3";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(6, 60);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(49, 13);
				 this->label2->TabIndex = 5;
				 this->label2->Text = L"Sensor 2";
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(6, 33);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(49, 13);
				 this->label1->TabIndex = 4;
				 this->label1->Text = L"Sensor 1";
				 // 
				 // textBox4
				 // 
				 this->textBox4->Enabled = false;
				 this->textBox4->Location = System::Drawing::Point(61, 111);
				 this->textBox4->Name = L"textBox4";
				 this->textBox4->Size = System::Drawing::Size(100, 20);
				 this->textBox4->TabIndex = 3;
				 // 
				 // textBox3
				 // 
				 this->textBox3->Enabled = false;
				 this->textBox3->Location = System::Drawing::Point(61, 84);
				 this->textBox3->Name = L"textBox3";
				 this->textBox3->Size = System::Drawing::Size(100, 20);
				 this->textBox3->TabIndex = 2;
				 // 
				 // textBox2
				 // 
				 this->textBox2->Enabled = false;
				 this->textBox2->Location = System::Drawing::Point(61, 57);
				 this->textBox2->Name = L"textBox2";
				 this->textBox2->Size = System::Drawing::Size(100, 20);
				 this->textBox2->TabIndex = 1;
				 // 
				 // textBox1
				 // 
				 this->textBox1->Enabled = false;
				 this->textBox1->Location = System::Drawing::Point(61, 30);
				 this->textBox1->Name = L"textBox1";
				 this->textBox1->Size = System::Drawing::Size(100, 20);
				 this->textBox1->TabIndex = 0;
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(71, 87);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(85, 23);
				 this->button1->TabIndex = 1;
				 this->button1->Text = L"Conectar";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				 // 
				 // groupBox2
				 // 
				 this->groupBox2->Controls->Add(this->button3);
				 this->groupBox2->Controls->Add(this->button2);
				 this->groupBox2->Controls->Add(this->label6);
				 this->groupBox2->Controls->Add(this->textBox6);
				 this->groupBox2->Controls->Add(this->button1);
				 this->groupBox2->Controls->Add(this->label5);
				 this->groupBox2->Controls->Add(this->textBox5);
				 this->groupBox2->Location = System::Drawing::Point(12, 12);
				 this->groupBox2->Name = L"groupBox2";
				 this->groupBox2->Size = System::Drawing::Size(227, 176);
				 this->groupBox2->TabIndex = 4;
				 this->groupBox2->TabStop = false;
				 this->groupBox2->Text = L"Comunicación Serial";
				 // 
				 // button3
				 // 
				 this->button3->Location = System::Drawing::Point(71, 145);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(85, 23);
				 this->button3->TabIndex = 5;
				 this->button3->Text = L"Parar";
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(71, 116);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(85, 23);
				 this->button2->TabIndex = 4;
				 this->button2->Text = L"Iniciar";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Location = System::Drawing::Point(6, 56);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(107, 13);
				 this->label6->TabIndex = 3;
				 this->label6->Text = L"Baudios por segundo";
				 // 
				 // textBox6
				 // 
				 this->textBox6->Location = System::Drawing::Point(115, 53);
				 this->textBox6->Name = L"textBox6";
				 this->textBox6->Size = System::Drawing::Size(100, 20);
				 this->textBox6->TabIndex = 2;
				 this->textBox6->Text = L"9600";
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(6, 33);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(38, 13);
				 this->label5->TabIndex = 1;
				 this->label5->Text = L"Puerto";
				 // 
				 // textBox5
				 // 
				 this->textBox5->Location = System::Drawing::Point(115, 27);
				 this->textBox5->Name = L"textBox5";
				 this->textBox5->Size = System::Drawing::Size(100, 20);
				 this->textBox5->TabIndex = 0;
				 this->textBox5->Text = L"COM18";
				 // 
				 // serialPort
				 // 
				 this->serialPort->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort_DataReceived);
				 // 
				 // picture
				 // 
				 this->picture->BackColor = System::Drawing::Color::Black;
				 this->picture->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				 this->picture->Location = System::Drawing::Point(298, 9);
				 this->picture->Name = L"picture";
				 this->picture->Size = System::Drawing::Size(400, 400);
				 this->picture->TabIndex = 5;
				 this->picture->TabStop = false;
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Location = System::Drawing::Point(253, 245);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(27, 13);
				 this->label7->TabIndex = 6;
				 this->label7->Text = L"0 °C";
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->Location = System::Drawing::Point(253, 204);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(33, 13);
				 this->label8->TabIndex = 7;
				 this->label8->Text = L"20 °C";
				 // 
				 // label9
				 // 
				 this->label9->AutoSize = true;
				 this->label9->Location = System::Drawing::Point(253, 166);
				 this->label9->Name = L"label9";
				 this->label9->Size = System::Drawing::Size(33, 13);
				 this->label9->TabIndex = 8;
				 this->label9->Text = L"40 °C";
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->Location = System::Drawing::Point(253, 127);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(33, 13);
				 this->label10->TabIndex = 9;
				 this->label10->Text = L"60 °C";
				 // 
				 // label11
				 // 
				 this->label11->AutoSize = true;
				 this->label11->Location = System::Drawing::Point(253, 86);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(33, 13);
				 this->label11->TabIndex = 10;
				 this->label11->Text = L"80 °C";
				 // 
				 // label12
				 // 
				 this->label12->AutoSize = true;
				 this->label12->Location = System::Drawing::Point(253, 46);
				 this->label12->Name = L"label12";
				 this->label12->Size = System::Drawing::Size(39, 13);
				 this->label12->TabIndex = 11;
				 this->label12->Text = L"100 °C";
				 // 
				 // label13
				 // 
				 this->label13->AutoSize = true;
				 this->label13->Location = System::Drawing::Point(253, 5);
				 this->label13->Name = L"label13";
				 this->label13->Size = System::Drawing::Size(39, 13);
				 this->label13->TabIndex = 12;
				 this->label13->Text = L"120 °C";
				 // 
				 // label14
				 // 
				 this->label14->AutoSize = true;
				 this->label14->Location = System::Drawing::Point(253, 286);
				 this->label14->Name = L"label14";
				 this->label14->Size = System::Drawing::Size(36, 13);
				 this->label14->TabIndex = 15;
				 this->label14->Text = L"-20 °C";
				 // 
				 // label15
				 // 
				 this->label15->AutoSize = true;
				 this->label15->Location = System::Drawing::Point(253, 326);
				 this->label15->Name = L"label15";
				 this->label15->Size = System::Drawing::Size(36, 13);
				 this->label15->TabIndex = 14;
				 this->label15->Text = L"-40 °C";
				 // 
				 // label16
				 // 
				 this->label16->AutoSize = true;
				 this->label16->Location = System::Drawing::Point(253, 366);
				 this->label16->Name = L"label16";
				 this->label16->Size = System::Drawing::Size(36, 13);
				 this->label16->TabIndex = 13;
				 this->label16->Text = L"-60 °C";
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(706, 413);
				 this->Controls->Add(this->label14);
				 this->Controls->Add(this->label15);
				 this->Controls->Add(this->label16);
				 this->Controls->Add(this->label13);
				 this->Controls->Add(this->label12);
				 this->Controls->Add(this->label11);
				 this->Controls->Add(this->label10);
				 this->Controls->Add(this->label9);
				 this->Controls->Add(this->label8);
				 this->Controls->Add(this->label7);
				 this->Controls->Add(this->picture);
				 this->Controls->Add(this->groupBox2);
				 this->Controls->Add(this->groupBox1);
				 this->Name = L"MyForm";
				 this->Text = L"Monitoreo";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
				 this->groupBox2->ResumeLayout(false);
				 this->groupBox2->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (button1->Text == "Conectar") {
			serialPort->PortName = textBox5->Text;
			serialPort->BaudRate = Convert::ToInt32(textBox6->Text);
			textBox5->Enabled = false;
			textBox6->Enabled = false;
		}
			
		for (int j = 0; j < 30; j++)
				g->DrawLine(def, j*w / 30 + 7, h / 2, j*w / 30, h / 2);
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 30; j++) {
					g->DrawLine(def, j*w / 30 + 7, h / 2 + i*h / 10, j*w / 30, h / 2 + i*h / 10);
					g->DrawLine(def, j*w / 30 + 7, h / 2 - i*h / 10, j*w / 30, h / 2 - i*h / 10);
				}
			}
			for (int j = 0; j < 30; j++)
				g->DrawLine(def, w / 2, j*w / 30 + 7, w / 2, j*w / 30);
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 30; j++) {
					g->DrawLine(def, w / 2 + i*h / 10, j*w / 30 + 7, w / 2 + i*h / 10, j*w / 30);
					g->DrawLine(def, w / 2 - i*h / 10, j*w / 30 + 7, w / 2 - i*h / 10, j*w / 30);
				}
			}
			fi = fopen("monitoreo.txt", "w+");
			fputs("MONITOREO DE TEMPERATURA\n", fi);
			fputs("UAQ Facultad de Ingenieria\n", fi);
			x = 1;

		}
	private: System::Void serialPort_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
		String^ z;
		if (serialPort->BytesToRead) {
			z = serialPort->ReadLine();
			Delegado ^Escribir = gcnew Delegado(this, &MyForm::Monitoreo);
			this->Invoke(Escribir, z);
		}
	}
			 delegate void Delegado(String^ z);
			 int datof;
			 const int Rc = 10000;
			 const int Vcc = 5;
			 double A = 1.11492089e-3;
			 double B = 2.372075385e-4;
			 double C = 6.954079529e-8;
			 double K = 2.5;
			 double V;
			 double R;
			 double logR;
			 double Temp;
			 double kelvin;
			 double celsius;

			 void Monitoreo(String^ z)
			 {
				 int::TryParse(z, datof);
				 V = datof / 1024. * Vcc;
				 R = (Rc * V) / (Vcc - V);
				 logR = Math::Log(R);
				 Temp = 1.0 / (A + B * logR + C * logR * logR * logR);
				 kelvin = Temp - (V*V / (K*R) * 1000);
				 celsius = kelvin - 273.15;
				 celsius = Math::Round(celsius, 2);
				 if (celsius > 120)
					 celsius = 120;
				 else if (celsius < -80)
					 celsius = -80;

				 //celsius = datof;
				 switch (j)
				 {
				 case 0:
					 textBox1->Text = Convert::ToString(celsius);
					 fprintf(fi, "Sensor 1: %.2f °C \n", celsius);
					 g->DrawEllipse(p1, x - 1, h / 2 + h / 10 - Convert::ToInt64(celsius * 2) - 1, 1, 1);
					 j++;
					 break;
				 case 1:
					 textBox2->Text = Convert::ToString(celsius);
					 fprintf(fi, "Sensor 2: %.2f °C \n", celsius);
					 g->DrawEllipse(p2, x - 1, h / 2 + h / 10 - Convert::ToInt32(celsius * 2) - 1, 1, 1);
					 j++;
					 break;
				 case 2:
					 textBox3->Text = Convert::ToString(celsius);
					 fprintf(fi, "Sensor 3: %.2f °C \n", celsius);
					 g->DrawEllipse(p3, x - 1, h / 2 + h / 10 - Convert::ToInt32(celsius * 2) - 1, 1, 1);
					 j++;
					 break;
				 case 3:
					 textBox4->Text = Convert::ToString(celsius);
					 fprintf(fi, "Sensor 4: %.2f °C \n\n", celsius);
					 g->DrawEllipse(p4, x - 1, h / 2 + h / 10 - Convert::ToInt32(celsius * 2) - 1, 1, 1);
					 j = 0;
					 if (x < w)
						 x = x++;
					 else {
						 x = 1;
						 g->Clear(Color::Black);
						 for (int j = 0; j < 30; j++)
							 g->DrawLine(def, j*w / 30 + 7, h / 2, j*w / 30, h / 2);
						 for (int i = 0; i < 10; i++) {
							 for (int j = 0; j < 30; j++) {
								 g->DrawLine(def, j*w / 30 + 7, h / 2 + i*h / 10, j*w / 30, h / 2 + i*h / 10);
								 g->DrawLine(def, j*w / 30 + 7, h / 2 - i*h / 10, j*w / 30, h / 2 - i*h / 10);
							 }
						 }
						 for (int j = 0; j < 30; j++)
							 g->DrawLine(def, w / 2, j*w / 30 + 7, w / 2, j*w / 30);
						 for (int i = 0; i < 10; i++) {
							 for (int j = 0; j < 30; j++) {
								 g->DrawLine(def, w / 2 + i*h / 10, j*w / 30 + 7, w / 2 + i*h / 10, j*w / 30);
								 g->DrawLine(def, w / 2 - i*h / 10, j*w / 30 + 7, w / 2 - i*h / 10, j*w / 30);
							 }
						 }
					 }
					 break;
				 }
			 }

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	g = picture->CreateGraphics();
	p1 = gcnew Pen(Color::Yellow);
	p2 = gcnew Pen(Color::Blue);
	p3 = gcnew Pen(Color::Green);
	p4 = gcnew Pen(Color::Red);
	def = gcnew Pen(Color::White);
	b = gcnew SolidBrush(Color::Black);
	h = picture->Height;
	w = picture->Width;
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	serialPort->Open();
	button1->Enabled = false;
	x = 1;
	j = 0;
	g->Clear(Color::Black);
	for (int k = 0; k < 30; k++)
		g->DrawLine(def, k*w / 30 + 7, h / 2, k*w / 30, h / 2);
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 30; k++) {
			g->DrawLine(def, k*w / 30 + 7, h / 2 + i*h / 10, k*w / 30, h / 2 + i*h / 10);
			g->DrawLine(def, k*w / 30 + 7, h / 2 - i*h / 10, k*w / 30, h / 2 - i*h / 10);
		}
	}
	for (int k = 0; k < 30; k++)
		g->DrawLine(def, w / 2, k*w / 30 + 7, w / 2, k*w / 30);
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 30; k++) {
			g->DrawLine(def, w / 2 + i*h / 10, k*w / 30 + 7, w / 2 + i*h / 10, k*w / 30);
			g->DrawLine(def, w / 2 - i*h / 10, k*w / 30 + 7, w / 2 - i*h / 10, k*w / 30);
		}
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	serialPort->Close();
	textBox5->Enabled = true;
	textBox6->Enabled = true;
	button1->Enabled = true;
	fclose(fi);
}
};
}
