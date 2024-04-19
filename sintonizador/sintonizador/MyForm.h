#pragma once

#include "stdlib.h"
#include "stdio.h"
#include "windows.h"

double coef[5] = { 0. };
double er[3] = { 0. };
double b[3] = { 0. };
int flag = 0;
namespace sintonizador {

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
	private: System::Windows::Forms::Button^  bt_sint;
	private: System::Windows::Forms::Button^  bt_reinicio;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::NumericUpDown^  nud_fd;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  nud_fi;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tb_fp;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  rb_pid;
	private: System::Windows::Forms::RadioButton^  rb_pd;
	private: System::Windows::Forms::RadioButton^  rb_pi;
	private: System::Windows::Forms::RadioButton^  rb_i;
	private: System::Windows::Forms::RadioButton^  rb_p;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tb_tiempo_res;

	private: System::Windows::Forms::TextBox^  tb_mf;

	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  tb_tao4p;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  tb_tao3p;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  tb_tao2p;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  tb_tao1p;

	private: System::Windows::Forms::NumericUpDown^  nud_ppo;
	private: System::Windows::Forms::NumericUpDown^  nud_pso;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  tb_z2p;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  tb_wn2p;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  tb_z1p;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  tb_wn1p;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::NumericUpDown^  nud_cso;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  tb_z2c;

	private: System::Windows::Forms::TextBox^  tb_tao4c;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  tb_wn2c;

	private: System::Windows::Forms::TextBox^  tb_tao3c;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  tb_z1c;

	private: System::Windows::Forms::TextBox^  tb_tao2c;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  tb_wn1c;

	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  tb_tao1c;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::NumericUpDown^  nud_cpo;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TextBox^  tb_kd;
	private: System::Windows::Forms::TextBox^  tb_ki;
	private: System::Windows::Forms::TextBox^  tb_kp;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Button^  bt_guardar;








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
		int control = 0;
		double ki, kp, kd = 0.;
		int i = 0;
		int dato = 0;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::Button^  bt_Controlar;
private: System::Windows::Forms::TextBox^  tb_sensor;
private: System::Windows::Forms::Label^  label30;

private: System::Windows::Forms::Label^  label29;
private: System::IO::Ports::SerialPort^  serialPort;
private: System::Windows::Forms::NumericUpDown^  nud_ref;
private: System::Windows::Forms::TextBox^  TB_signal;
private: System::Windows::Forms::Label^  label31;



private: System::Windows::Forms::Button^  bt_Discret;

		 void InitializeComponent(void)
		{
			 this->components = (gcnew System::ComponentModel::Container());
			 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			 this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			 this->nud_cso = (gcnew System::Windows::Forms::NumericUpDown());
			 this->label14 = (gcnew System::Windows::Forms::Label());
			 this->label17 = (gcnew System::Windows::Forms::Label());
			 this->label18 = (gcnew System::Windows::Forms::Label());
			 this->tb_z2c = (gcnew System::Windows::Forms::TextBox());
			 this->tb_tao4c = (gcnew System::Windows::Forms::TextBox());
			 this->label19 = (gcnew System::Windows::Forms::Label());
			 this->label20 = (gcnew System::Windows::Forms::Label());
			 this->tb_wn2c = (gcnew System::Windows::Forms::TextBox());
			 this->tb_tao3c = (gcnew System::Windows::Forms::TextBox());
			 this->label21 = (gcnew System::Windows::Forms::Label());
			 this->label22 = (gcnew System::Windows::Forms::Label());
			 this->tb_z1c = (gcnew System::Windows::Forms::TextBox());
			 this->tb_tao2c = (gcnew System::Windows::Forms::TextBox());
			 this->label23 = (gcnew System::Windows::Forms::Label());
			 this->tb_wn1c = (gcnew System::Windows::Forms::TextBox());
			 this->label24 = (gcnew System::Windows::Forms::Label());
			 this->tb_tao1c = (gcnew System::Windows::Forms::TextBox());
			 this->label25 = (gcnew System::Windows::Forms::Label());
			 this->nud_cpo = (gcnew System::Windows::Forms::NumericUpDown());
			 this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			 this->nud_pso = (gcnew System::Windows::Forms::NumericUpDown());
			 this->label11 = (gcnew System::Windows::Forms::Label());
			 this->label15 = (gcnew System::Windows::Forms::Label());
			 this->label10 = (gcnew System::Windows::Forms::Label());
			 this->tb_z2p = (gcnew System::Windows::Forms::TextBox());
			 this->tb_tao4p = (gcnew System::Windows::Forms::TextBox());
			 this->label12 = (gcnew System::Windows::Forms::Label());
			 this->label9 = (gcnew System::Windows::Forms::Label());
			 this->tb_wn2p = (gcnew System::Windows::Forms::TextBox());
			 this->tb_tao3p = (gcnew System::Windows::Forms::TextBox());
			 this->label16 = (gcnew System::Windows::Forms::Label());
			 this->label8 = (gcnew System::Windows::Forms::Label());
			 this->tb_z1p = (gcnew System::Windows::Forms::TextBox());
			 this->tb_tao2p = (gcnew System::Windows::Forms::TextBox());
			 this->label13 = (gcnew System::Windows::Forms::Label());
			 this->tb_wn1p = (gcnew System::Windows::Forms::TextBox());
			 this->label7 = (gcnew System::Windows::Forms::Label());
			 this->tb_tao1p = (gcnew System::Windows::Forms::TextBox());
			 this->label6 = (gcnew System::Windows::Forms::Label());
			 this->nud_ppo = (gcnew System::Windows::Forms::NumericUpDown());
			 this->nud_fd = (gcnew System::Windows::Forms::NumericUpDown());
			 this->label3 = (gcnew System::Windows::Forms::Label());
			 this->nud_fi = (gcnew System::Windows::Forms::NumericUpDown());
			 this->label2 = (gcnew System::Windows::Forms::Label());
			 this->tb_fp = (gcnew System::Windows::Forms::TextBox());
			 this->label1 = (gcnew System::Windows::Forms::Label());
			 this->bt_sint = (gcnew System::Windows::Forms::Button());
			 this->bt_reinicio = (gcnew System::Windows::Forms::Button());
			 this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			 this->rb_pid = (gcnew System::Windows::Forms::RadioButton());
			 this->rb_pd = (gcnew System::Windows::Forms::RadioButton());
			 this->rb_pi = (gcnew System::Windows::Forms::RadioButton());
			 this->rb_i = (gcnew System::Windows::Forms::RadioButton());
			 this->rb_p = (gcnew System::Windows::Forms::RadioButton());
			 this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			 this->tb_tiempo_res = (gcnew System::Windows::Forms::TextBox());
			 this->tb_mf = (gcnew System::Windows::Forms::TextBox());
			 this->label5 = (gcnew System::Windows::Forms::Label());
			 this->label4 = (gcnew System::Windows::Forms::Label());
			 this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			 this->tb_kd = (gcnew System::Windows::Forms::TextBox());
			 this->tb_ki = (gcnew System::Windows::Forms::TextBox());
			 this->tb_kp = (gcnew System::Windows::Forms::TextBox());
			 this->label28 = (gcnew System::Windows::Forms::Label());
			 this->label27 = (gcnew System::Windows::Forms::Label());
			 this->label26 = (gcnew System::Windows::Forms::Label());
			 this->bt_guardar = (gcnew System::Windows::Forms::Button());
			 this->bt_Discret = (gcnew System::Windows::Forms::Button());
			 this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			 this->TB_signal = (gcnew System::Windows::Forms::TextBox());
			 this->label31 = (gcnew System::Windows::Forms::Label());
			 this->nud_ref = (gcnew System::Windows::Forms::NumericUpDown());
			 this->tb_sensor = (gcnew System::Windows::Forms::TextBox());
			 this->label30 = (gcnew System::Windows::Forms::Label());
			 this->label29 = (gcnew System::Windows::Forms::Label());
			 this->bt_Controlar = (gcnew System::Windows::Forms::Button());
			 this->serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			 this->groupBox1->SuspendLayout();
			 this->groupBox5->SuspendLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_cso))->BeginInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_cpo))->BeginInit();
			 this->groupBox4->SuspendLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_pso))->BeginInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_ppo))->BeginInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_fd))->BeginInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_fi))->BeginInit();
			 this->groupBox2->SuspendLayout();
			 this->groupBox3->SuspendLayout();
			 this->groupBox6->SuspendLayout();
			 this->groupBox7->SuspendLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_ref))->BeginInit();
			 this->SuspendLayout();
			 // 
			 // groupBox1
			 // 
			 this->groupBox1->Controls->Add(this->groupBox5);
			 this->groupBox1->Controls->Add(this->groupBox4);
			 this->groupBox1->Controls->Add(this->nud_fd);
			 this->groupBox1->Controls->Add(this->label3);
			 this->groupBox1->Controls->Add(this->nud_fi);
			 this->groupBox1->Controls->Add(this->label2);
			 this->groupBox1->Controls->Add(this->tb_fp);
			 this->groupBox1->Controls->Add(this->label1);
			 this->groupBox1->Location = System::Drawing::Point(13, 13);
			 this->groupBox1->Name = L"groupBox1";
			 this->groupBox1->Size = System::Drawing::Size(528, 370);
			 this->groupBox1->TabIndex = 0;
			 this->groupBox1->TabStop = false;
			 this->groupBox1->Text = L"Planta";
			 // 
			 // groupBox5
			 // 
			 this->groupBox5->Controls->Add(this->nud_cso);
			 this->groupBox5->Controls->Add(this->label14);
			 this->groupBox5->Controls->Add(this->label17);
			 this->groupBox5->Controls->Add(this->label18);
			 this->groupBox5->Controls->Add(this->tb_z2c);
			 this->groupBox5->Controls->Add(this->tb_tao4c);
			 this->groupBox5->Controls->Add(this->label19);
			 this->groupBox5->Controls->Add(this->label20);
			 this->groupBox5->Controls->Add(this->tb_wn2c);
			 this->groupBox5->Controls->Add(this->tb_tao3c);
			 this->groupBox5->Controls->Add(this->label21);
			 this->groupBox5->Controls->Add(this->label22);
			 this->groupBox5->Controls->Add(this->tb_z1c);
			 this->groupBox5->Controls->Add(this->tb_tao2c);
			 this->groupBox5->Controls->Add(this->label23);
			 this->groupBox5->Controls->Add(this->tb_wn1c);
			 this->groupBox5->Controls->Add(this->label24);
			 this->groupBox5->Controls->Add(this->tb_tao1c);
			 this->groupBox5->Controls->Add(this->label25);
			 this->groupBox5->Controls->Add(this->nud_cpo);
			 this->groupBox5->Location = System::Drawing::Point(281, 47);
			 this->groupBox5->Name = L"groupBox5";
			 this->groupBox5->Size = System::Drawing::Size(171, 318);
			 this->groupBox5->TabIndex = 20;
			 this->groupBox5->TabStop = false;
			 this->groupBox5->Text = L"Ceros";
			 // 
			 // nud_cso
			 // 
			 this->nud_cso->Location = System::Drawing::Point(82, 175);
			 this->nud_cso->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			 this->nud_cso->Name = L"nud_cso";
			 this->nud_cso->Size = System::Drawing::Size(74, 20);
			 this->nud_cso->TabIndex = 19;
			 this->nud_cso->ValueChanged += gcnew System::EventHandler(this, &MyForm::nud_cso_ValueChanged);
			 // 
			 // label14
			 // 
			 this->label14->AutoSize = true;
			 this->label14->Location = System::Drawing::Point(6, 177);
			 this->label14->Name = L"label14";
			 this->label14->Size = System::Drawing::Size(61, 13);
			 this->label14->TabIndex = 18;
			 this->label14->Text = L"Ceros S. O.";
			 // 
			 // label17
			 // 
			 this->label17->AutoSize = true;
			 this->label17->Location = System::Drawing::Point(6, 290);
			 this->label17->Name = L"label17";
			 this->label17->Size = System::Drawing::Size(21, 13);
			 this->label17->TabIndex = 17;
			 this->label17->Text = L"z 2";
			 // 
			 // label18
			 // 
			 this->label18->AutoSize = true;
			 this->label18->Location = System::Drawing::Point(6, 144);
			 this->label18->Name = L"label18";
			 this->label18->Size = System::Drawing::Size(35, 13);
			 this->label18->TabIndex = 17;
			 this->label18->Text = L"Tao 4";
			 // 
			 // tb_z2c
			 // 
			 this->tb_z2c->Enabled = false;
			 this->tb_z2c->Location = System::Drawing::Point(65, 287);
			 this->tb_z2c->Name = L"tb_z2c";
			 this->tb_z2c->Size = System::Drawing::Size(91, 20);
			 this->tb_z2c->TabIndex = 16;
			 // 
			 // tb_tao4c
			 // 
			 this->tb_tao4c->Enabled = false;
			 this->tb_tao4c->Location = System::Drawing::Point(65, 141);
			 this->tb_tao4c->Name = L"tb_tao4c";
			 this->tb_tao4c->Size = System::Drawing::Size(91, 20);
			 this->tb_tao4c->TabIndex = 16;
			 // 
			 // label19
			 // 
			 this->label19->AutoSize = true;
			 this->label19->Location = System::Drawing::Point(6, 261);
			 this->label19->Name = L"label19";
			 this->label19->Size = System::Drawing::Size(30, 13);
			 this->label19->TabIndex = 15;
			 this->label19->Text = L"wn 2";
			 // 
			 // label20
			 // 
			 this->label20->AutoSize = true;
			 this->label20->Location = System::Drawing::Point(6, 115);
			 this->label20->Name = L"label20";
			 this->label20->Size = System::Drawing::Size(35, 13);
			 this->label20->TabIndex = 15;
			 this->label20->Text = L"Tao 3";
			 // 
			 // tb_wn2c
			 // 
			 this->tb_wn2c->Enabled = false;
			 this->tb_wn2c->Location = System::Drawing::Point(65, 258);
			 this->tb_wn2c->Name = L"tb_wn2c";
			 this->tb_wn2c->Size = System::Drawing::Size(91, 20);
			 this->tb_wn2c->TabIndex = 14;
			 // 
			 // tb_tao3c
			 // 
			 this->tb_tao3c->Enabled = false;
			 this->tb_tao3c->Location = System::Drawing::Point(65, 112);
			 this->tb_tao3c->Name = L"tb_tao3c";
			 this->tb_tao3c->Size = System::Drawing::Size(91, 20);
			 this->tb_tao3c->TabIndex = 14;
			 // 
			 // label21
			 // 
			 this->label21->AutoSize = true;
			 this->label21->Location = System::Drawing::Point(6, 235);
			 this->label21->Name = L"label21";
			 this->label21->Size = System::Drawing::Size(21, 13);
			 this->label21->TabIndex = 13;
			 this->label21->Text = L"z 1";
			 // 
			 // label22
			 // 
			 this->label22->AutoSize = true;
			 this->label22->Location = System::Drawing::Point(6, 89);
			 this->label22->Name = L"label22";
			 this->label22->Size = System::Drawing::Size(35, 13);
			 this->label22->TabIndex = 13;
			 this->label22->Text = L"Tao 2";
			 // 
			 // tb_z1c
			 // 
			 this->tb_z1c->Enabled = false;
			 this->tb_z1c->Location = System::Drawing::Point(65, 232);
			 this->tb_z1c->Name = L"tb_z1c";
			 this->tb_z1c->Size = System::Drawing::Size(91, 20);
			 this->tb_z1c->TabIndex = 12;
			 // 
			 // tb_tao2c
			 // 
			 this->tb_tao2c->Enabled = false;
			 this->tb_tao2c->Location = System::Drawing::Point(65, 86);
			 this->tb_tao2c->Name = L"tb_tao2c";
			 this->tb_tao2c->Size = System::Drawing::Size(91, 20);
			 this->tb_tao2c->TabIndex = 12;
			 // 
			 // label23
			 // 
			 this->label23->AutoSize = true;
			 this->label23->Location = System::Drawing::Point(6, 208);
			 this->label23->Name = L"label23";
			 this->label23->Size = System::Drawing::Size(30, 13);
			 this->label23->TabIndex = 11;
			 this->label23->Text = L"wn 1";
			 // 
			 // tb_wn1c
			 // 
			 this->tb_wn1c->Enabled = false;
			 this->tb_wn1c->Location = System::Drawing::Point(65, 205);
			 this->tb_wn1c->Name = L"tb_wn1c";
			 this->tb_wn1c->Size = System::Drawing::Size(91, 20);
			 this->tb_wn1c->TabIndex = 10;
			 // 
			 // label24
			 // 
			 this->label24->AutoSize = true;
			 this->label24->Location = System::Drawing::Point(6, 62);
			 this->label24->Name = L"label24";
			 this->label24->Size = System::Drawing::Size(35, 13);
			 this->label24->TabIndex = 11;
			 this->label24->Text = L"Tao 1";
			 // 
			 // tb_tao1c
			 // 
			 this->tb_tao1c->Enabled = false;
			 this->tb_tao1c->Location = System::Drawing::Point(65, 59);
			 this->tb_tao1c->Name = L"tb_tao1c";
			 this->tb_tao1c->Size = System::Drawing::Size(91, 20);
			 this->tb_tao1c->TabIndex = 10;
			 // 
			 // label25
			 // 
			 this->label25->AutoSize = true;
			 this->label25->Location = System::Drawing::Point(6, 26);
			 this->label25->Name = L"label25";
			 this->label25->Size = System::Drawing::Size(61, 13);
			 this->label25->TabIndex = 8;
			 this->label25->Text = L"Ceros P. O.";
			 // 
			 // nud_cpo
			 // 
			 this->nud_cpo->Location = System::Drawing::Point(82, 24);
			 this->nud_cpo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			 this->nud_cpo->Name = L"nud_cpo";
			 this->nud_cpo->Size = System::Drawing::Size(74, 20);
			 this->nud_cpo->TabIndex = 7;
			 this->nud_cpo->ValueChanged += gcnew System::EventHandler(this, &MyForm::nud_cpo_ValueChanged);
			 // 
			 // groupBox4
			 // 
			 this->groupBox4->Controls->Add(this->nud_pso);
			 this->groupBox4->Controls->Add(this->label11);
			 this->groupBox4->Controls->Add(this->label15);
			 this->groupBox4->Controls->Add(this->label10);
			 this->groupBox4->Controls->Add(this->tb_z2p);
			 this->groupBox4->Controls->Add(this->tb_tao4p);
			 this->groupBox4->Controls->Add(this->label12);
			 this->groupBox4->Controls->Add(this->label9);
			 this->groupBox4->Controls->Add(this->tb_wn2p);
			 this->groupBox4->Controls->Add(this->tb_tao3p);
			 this->groupBox4->Controls->Add(this->label16);
			 this->groupBox4->Controls->Add(this->label8);
			 this->groupBox4->Controls->Add(this->tb_z1p);
			 this->groupBox4->Controls->Add(this->tb_tao2p);
			 this->groupBox4->Controls->Add(this->label13);
			 this->groupBox4->Controls->Add(this->tb_wn1p);
			 this->groupBox4->Controls->Add(this->label7);
			 this->groupBox4->Controls->Add(this->tb_tao1p);
			 this->groupBox4->Controls->Add(this->label6);
			 this->groupBox4->Controls->Add(this->nud_ppo);
			 this->groupBox4->Location = System::Drawing::Point(67, 47);
			 this->groupBox4->Name = L"groupBox4";
			 this->groupBox4->Size = System::Drawing::Size(171, 318);
			 this->groupBox4->TabIndex = 9;
			 this->groupBox4->TabStop = false;
			 this->groupBox4->Text = L"Polos";
			 // 
			 // nud_pso
			 // 
			 this->nud_pso->Location = System::Drawing::Point(82, 175);
			 this->nud_pso->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			 this->nud_pso->Name = L"nud_pso";
			 this->nud_pso->Size = System::Drawing::Size(74, 20);
			 this->nud_pso->TabIndex = 19;
			 this->nud_pso->ValueChanged += gcnew System::EventHandler(this, &MyForm::nud_pso_ValueChanged);
			 // 
			 // label11
			 // 
			 this->label11->AutoSize = true;
			 this->label11->Location = System::Drawing::Point(6, 177);
			 this->label11->Name = L"label11";
			 this->label11->Size = System::Drawing::Size(60, 13);
			 this->label11->TabIndex = 18;
			 this->label11->Text = L"Polos S. O.";
			 // 
			 // label15
			 // 
			 this->label15->AutoSize = true;
			 this->label15->Location = System::Drawing::Point(6, 290);
			 this->label15->Name = L"label15";
			 this->label15->Size = System::Drawing::Size(21, 13);
			 this->label15->TabIndex = 17;
			 this->label15->Text = L"z 2";
			 // 
			 // label10
			 // 
			 this->label10->AutoSize = true;
			 this->label10->Location = System::Drawing::Point(6, 144);
			 this->label10->Name = L"label10";
			 this->label10->Size = System::Drawing::Size(35, 13);
			 this->label10->TabIndex = 17;
			 this->label10->Text = L"Tao 4";
			 // 
			 // tb_z2p
			 // 
			 this->tb_z2p->Enabled = false;
			 this->tb_z2p->Location = System::Drawing::Point(65, 287);
			 this->tb_z2p->Name = L"tb_z2p";
			 this->tb_z2p->Size = System::Drawing::Size(91, 20);
			 this->tb_z2p->TabIndex = 16;
			 // 
			 // tb_tao4p
			 // 
			 this->tb_tao4p->Enabled = false;
			 this->tb_tao4p->Location = System::Drawing::Point(65, 141);
			 this->tb_tao4p->Name = L"tb_tao4p";
			 this->tb_tao4p->Size = System::Drawing::Size(91, 20);
			 this->tb_tao4p->TabIndex = 16;
			 // 
			 // label12
			 // 
			 this->label12->AutoSize = true;
			 this->label12->Location = System::Drawing::Point(6, 261);
			 this->label12->Name = L"label12";
			 this->label12->Size = System::Drawing::Size(30, 13);
			 this->label12->TabIndex = 15;
			 this->label12->Text = L"wn 2";
			 // 
			 // label9
			 // 
			 this->label9->AutoSize = true;
			 this->label9->Location = System::Drawing::Point(6, 115);
			 this->label9->Name = L"label9";
			 this->label9->Size = System::Drawing::Size(35, 13);
			 this->label9->TabIndex = 15;
			 this->label9->Text = L"Tao 3";
			 // 
			 // tb_wn2p
			 // 
			 this->tb_wn2p->Enabled = false;
			 this->tb_wn2p->Location = System::Drawing::Point(65, 258);
			 this->tb_wn2p->Name = L"tb_wn2p";
			 this->tb_wn2p->Size = System::Drawing::Size(91, 20);
			 this->tb_wn2p->TabIndex = 14;
			 // 
			 // tb_tao3p
			 // 
			 this->tb_tao3p->Enabled = false;
			 this->tb_tao3p->Location = System::Drawing::Point(65, 112);
			 this->tb_tao3p->Name = L"tb_tao3p";
			 this->tb_tao3p->Size = System::Drawing::Size(91, 20);
			 this->tb_tao3p->TabIndex = 14;
			 // 
			 // label16
			 // 
			 this->label16->AutoSize = true;
			 this->label16->Location = System::Drawing::Point(6, 235);
			 this->label16->Name = L"label16";
			 this->label16->Size = System::Drawing::Size(21, 13);
			 this->label16->TabIndex = 13;
			 this->label16->Text = L"z 1";
			 // 
			 // label8
			 // 
			 this->label8->AutoSize = true;
			 this->label8->Location = System::Drawing::Point(6, 89);
			 this->label8->Name = L"label8";
			 this->label8->Size = System::Drawing::Size(35, 13);
			 this->label8->TabIndex = 13;
			 this->label8->Text = L"Tao 2";
			 // 
			 // tb_z1p
			 // 
			 this->tb_z1p->Enabled = false;
			 this->tb_z1p->Location = System::Drawing::Point(65, 232);
			 this->tb_z1p->Name = L"tb_z1p";
			 this->tb_z1p->Size = System::Drawing::Size(91, 20);
			 this->tb_z1p->TabIndex = 12;
			 // 
			 // tb_tao2p
			 // 
			 this->tb_tao2p->Enabled = false;
			 this->tb_tao2p->Location = System::Drawing::Point(65, 86);
			 this->tb_tao2p->Name = L"tb_tao2p";
			 this->tb_tao2p->Size = System::Drawing::Size(91, 20);
			 this->tb_tao2p->TabIndex = 12;
			 // 
			 // label13
			 // 
			 this->label13->AutoSize = true;
			 this->label13->Location = System::Drawing::Point(6, 208);
			 this->label13->Name = L"label13";
			 this->label13->Size = System::Drawing::Size(30, 13);
			 this->label13->TabIndex = 11;
			 this->label13->Text = L"wn 1";
			 // 
			 // tb_wn1p
			 // 
			 this->tb_wn1p->Enabled = false;
			 this->tb_wn1p->Location = System::Drawing::Point(65, 205);
			 this->tb_wn1p->Name = L"tb_wn1p";
			 this->tb_wn1p->Size = System::Drawing::Size(91, 20);
			 this->tb_wn1p->TabIndex = 10;
			 // 
			 // label7
			 // 
			 this->label7->AutoSize = true;
			 this->label7->Location = System::Drawing::Point(6, 62);
			 this->label7->Name = L"label7";
			 this->label7->Size = System::Drawing::Size(35, 13);
			 this->label7->TabIndex = 11;
			 this->label7->Text = L"Tao 1";
			 // 
			 // tb_tao1p
			 // 
			 this->tb_tao1p->Enabled = false;
			 this->tb_tao1p->Location = System::Drawing::Point(65, 59);
			 this->tb_tao1p->Name = L"tb_tao1p";
			 this->tb_tao1p->Size = System::Drawing::Size(91, 20);
			 this->tb_tao1p->TabIndex = 10;
			 // 
			 // label6
			 // 
			 this->label6->AutoSize = true;
			 this->label6->Location = System::Drawing::Point(6, 26);
			 this->label6->Name = L"label6";
			 this->label6->Size = System::Drawing::Size(60, 13);
			 this->label6->TabIndex = 8;
			 this->label6->Text = L"Polos P. O.";
			 // 
			 // nud_ppo
			 // 
			 this->nud_ppo->Location = System::Drawing::Point(82, 24);
			 this->nud_ppo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			 this->nud_ppo->Name = L"nud_ppo";
			 this->nud_ppo->Size = System::Drawing::Size(74, 20);
			 this->nud_ppo->TabIndex = 7;
			 this->nud_ppo->ValueChanged += gcnew System::EventHandler(this, &MyForm::nud_ppo_ValueChanged);
			 // 
			 // nud_fd
			 // 
			 this->nud_fd->Location = System::Drawing::Point(443, 21);
			 this->nud_fd->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			 this->nud_fd->Name = L"nud_fd";
			 this->nud_fd->Size = System::Drawing::Size(74, 20);
			 this->nud_fd->TabIndex = 5;
			 // 
			 // label3
			 // 
			 this->label3->AutoSize = true;
			 this->label3->Location = System::Drawing::Point(367, 22);
			 this->label3->Name = L"label3";
			 this->label3->Size = System::Drawing::Size(64, 13);
			 this->label3->TabIndex = 4;
			 this->label3->Text = L"Derivadores";
			 // 
			 // nud_fi
			 // 
			 this->nud_fi->Location = System::Drawing::Point(261, 20);
			 this->nud_fi->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			 this->nud_fi->Name = L"nud_fi";
			 this->nud_fi->Size = System::Drawing::Size(74, 20);
			 this->nud_fi->TabIndex = 3;
			 // 
			 // label2
			 // 
			 this->label2->AutoSize = true;
			 this->label2->Location = System::Drawing::Point(185, 23);
			 this->label2->Name = L"label2";
			 this->label2->Size = System::Drawing::Size(66, 13);
			 this->label2->TabIndex = 2;
			 this->label2->Text = L"Integradores";
			 // 
			 // tb_fp
			 // 
			 this->tb_fp->Location = System::Drawing::Point(67, 20);
			 this->tb_fp->Name = L"tb_fp";
			 this->tb_fp->Size = System::Drawing::Size(91, 20);
			 this->tb_fp->TabIndex = 1;
			 // 
			 // label1
			 // 
			 this->label1->AutoSize = true;
			 this->label1->Location = System::Drawing::Point(8, 23);
			 this->label1->Name = L"label1";
			 this->label1->Size = System::Drawing::Size(53, 13);
			 this->label1->TabIndex = 0;
			 this->label1->Text = L"Ganancia";
			 // 
			 // bt_sint
			 // 
			 this->bt_sint->Location = System::Drawing::Point(832, 194);
			 this->bt_sint->Name = L"bt_sint";
			 this->bt_sint->Size = System::Drawing::Size(75, 23);
			 this->bt_sint->TabIndex = 1;
			 this->bt_sint->Text = L"Sintonizar";
			 this->bt_sint->UseVisualStyleBackColor = true;
			 this->bt_sint->Click += gcnew System::EventHandler(this, &MyForm::bt_sint_Click);
			 // 
			 // bt_reinicio
			 // 
			 this->bt_reinicio->Location = System::Drawing::Point(832, 310);
			 this->bt_reinicio->Name = L"bt_reinicio";
			 this->bt_reinicio->Size = System::Drawing::Size(75, 23);
			 this->bt_reinicio->TabIndex = 2;
			 this->bt_reinicio->Text = L"Reiniciar";
			 this->bt_reinicio->UseVisualStyleBackColor = true;
			 this->bt_reinicio->Click += gcnew System::EventHandler(this, &MyForm::bt_reinicio_Click);
			 // 
			 // groupBox2
			 // 
			 this->groupBox2->Controls->Add(this->rb_pid);
			 this->groupBox2->Controls->Add(this->rb_pd);
			 this->groupBox2->Controls->Add(this->rb_pi);
			 this->groupBox2->Controls->Add(this->rb_i);
			 this->groupBox2->Controls->Add(this->rb_p);
			 this->groupBox2->Location = System::Drawing::Point(568, 33);
			 this->groupBox2->Name = L"groupBox2";
			 this->groupBox2->Size = System::Drawing::Size(169, 144);
			 this->groupBox2->TabIndex = 3;
			 this->groupBox2->TabStop = false;
			 this->groupBox2->Text = L"Controlador";
			 // 
			 // rb_pid
			 // 
			 this->rb_pid->AutoSize = true;
			 this->rb_pid->Location = System::Drawing::Point(6, 113);
			 this->rb_pid->Name = L"rb_pid";
			 this->rb_pid->Size = System::Drawing::Size(43, 17);
			 this->rb_pid->TabIndex = 4;
			 this->rb_pid->Text = L"PID";
			 this->rb_pid->UseVisualStyleBackColor = true;
			 // 
			 // rb_pd
			 // 
			 this->rb_pd->AutoSize = true;
			 this->rb_pd->Location = System::Drawing::Point(6, 89);
			 this->rb_pd->Name = L"rb_pd";
			 this->rb_pd->Size = System::Drawing::Size(159, 17);
			 this->rb_pd->TabIndex = 3;
			 this->rb_pd->Text = L"Proporcional-Derivativo (PD)";
			 this->rb_pd->UseVisualStyleBackColor = true;
			 // 
			 // rb_pi
			 // 
			 this->rb_pi->AutoSize = true;
			 this->rb_pi->Location = System::Drawing::Point(6, 65);
			 this->rb_pi->Name = L"rb_pi";
			 this->rb_pi->Size = System::Drawing::Size(141, 17);
			 this->rb_pi->TabIndex = 2;
			 this->rb_pi->Text = L"Proporcional-Integral (PI)";
			 this->rb_pi->UseVisualStyleBackColor = true;
			 // 
			 // rb_i
			 // 
			 this->rb_i->AutoSize = true;
			 this->rb_i->Location = System::Drawing::Point(6, 42);
			 this->rb_i->Name = L"rb_i";
			 this->rb_i->Size = System::Drawing::Size(60, 17);
			 this->rb_i->TabIndex = 1;
			 this->rb_i->Text = L"Integral";
			 this->rb_i->UseVisualStyleBackColor = true;
			 // 
			 // rb_p
			 // 
			 this->rb_p->AutoSize = true;
			 this->rb_p->Checked = true;
			 this->rb_p->Location = System::Drawing::Point(6, 19);
			 this->rb_p->Name = L"rb_p";
			 this->rb_p->Size = System::Drawing::Size(84, 17);
			 this->rb_p->TabIndex = 0;
			 this->rb_p->TabStop = true;
			 this->rb_p->Text = L"Proporcional";
			 this->rb_p->UseVisualStyleBackColor = true;
			 // 
			 // groupBox3
			 // 
			 this->groupBox3->Controls->Add(this->tb_tiempo_res);
			 this->groupBox3->Controls->Add(this->tb_mf);
			 this->groupBox3->Controls->Add(this->label5);
			 this->groupBox3->Controls->Add(this->label4);
			 this->groupBox3->Location = System::Drawing::Point(546, 185);
			 this->groupBox3->Name = L"groupBox3";
			 this->groupBox3->Size = System::Drawing::Size(204, 90);
			 this->groupBox3->TabIndex = 4;
			 this->groupBox3->TabStop = false;
			 this->groupBox3->Text = L"Parámetros de diseño";
			 // 
			 // tb_tiempo_res
			 // 
			 this->tb_tiempo_res->Location = System::Drawing::Point(91, 51);
			 this->tb_tiempo_res->Name = L"tb_tiempo_res";
			 this->tb_tiempo_res->Size = System::Drawing::Size(100, 20);
			 this->tb_tiempo_res->TabIndex = 3;
			 // 
			 // tb_mf
			 // 
			 this->tb_mf->Location = System::Drawing::Point(91, 25);
			 this->tb_mf->Name = L"tb_mf";
			 this->tb_mf->Size = System::Drawing::Size(100, 20);
			 this->tb_mf->TabIndex = 2;
			 // 
			 // label5
			 // 
			 this->label5->AutoSize = true;
			 this->label5->Location = System::Drawing::Point(6, 54);
			 this->label5->Name = L"label5";
			 this->label5->Size = System::Drawing::Size(80, 13);
			 this->label5->TabIndex = 1;
			 this->label5->Text = L"T. respuesta (s)";
			 // 
			 // label4
			 // 
			 this->label4->AutoSize = true;
			 this->label4->Location = System::Drawing::Point(6, 28);
			 this->label4->Name = L"label4";
			 this->label4->Size = System::Drawing::Size(70, 13);
			 this->label4->TabIndex = 0;
			 this->label4->Text = L"M. de fase (°)";
			 // 
			 // groupBox6
			 // 
			 this->groupBox6->Controls->Add(this->tb_kd);
			 this->groupBox6->Controls->Add(this->tb_ki);
			 this->groupBox6->Controls->Add(this->tb_kp);
			 this->groupBox6->Controls->Add(this->label28);
			 this->groupBox6->Controls->Add(this->label27);
			 this->groupBox6->Controls->Add(this->label26);
			 this->groupBox6->Location = System::Drawing::Point(578, 281);
			 this->groupBox6->Name = L"groupBox6";
			 this->groupBox6->Size = System::Drawing::Size(153, 88);
			 this->groupBox6->TabIndex = 5;
			 this->groupBox6->TabStop = false;
			 this->groupBox6->Text = L"Ganancias del controlador";
			 // 
			 // tb_kd
			 // 
			 this->tb_kd->Enabled = false;
			 this->tb_kd->Location = System::Drawing::Point(39, 57);
			 this->tb_kd->Name = L"tb_kd";
			 this->tb_kd->Size = System::Drawing::Size(100, 20);
			 this->tb_kd->TabIndex = 5;
			 // 
			 // tb_ki
			 // 
			 this->tb_ki->Enabled = false;
			 this->tb_ki->Location = System::Drawing::Point(39, 37);
			 this->tb_ki->Name = L"tb_ki";
			 this->tb_ki->Size = System::Drawing::Size(100, 20);
			 this->tb_ki->TabIndex = 4;
			 // 
			 // tb_kp
			 // 
			 this->tb_kp->Enabled = false;
			 this->tb_kp->Location = System::Drawing::Point(39, 17);
			 this->tb_kp->Name = L"tb_kp";
			 this->tb_kp->Size = System::Drawing::Size(100, 20);
			 this->tb_kp->TabIndex = 3;
			 // 
			 // label28
			 // 
			 this->label28->AutoSize = true;
			 this->label28->Location = System::Drawing::Point(13, 60);
			 this->label28->Name = L"label28";
			 this->label28->Size = System::Drawing::Size(19, 13);
			 this->label28->TabIndex = 2;
			 this->label28->Text = L"kd";
			 // 
			 // label27
			 // 
			 this->label27->AutoSize = true;
			 this->label27->Location = System::Drawing::Point(13, 40);
			 this->label27->Name = L"label27";
			 this->label27->Size = System::Drawing::Size(15, 13);
			 this->label27->TabIndex = 1;
			 this->label27->Text = L"ki";
			 // 
			 // label26
			 // 
			 this->label26->AutoSize = true;
			 this->label26->Location = System::Drawing::Point(13, 20);
			 this->label26->Name = L"label26";
			 this->label26->Size = System::Drawing::Size(19, 13);
			 this->label26->TabIndex = 0;
			 this->label26->Text = L"kp";
			 // 
			 // bt_guardar
			 // 
			 this->bt_guardar->Location = System::Drawing::Point(832, 281);
			 this->bt_guardar->Name = L"bt_guardar";
			 this->bt_guardar->Size = System::Drawing::Size(75, 23);
			 this->bt_guardar->TabIndex = 6;
			 this->bt_guardar->Text = L"Guardar";
			 this->bt_guardar->UseVisualStyleBackColor = true;
			 this->bt_guardar->Click += gcnew System::EventHandler(this, &MyForm::bt_guardar_Click);
			 // 
			 // bt_Discret
			 // 
			 this->bt_Discret->Location = System::Drawing::Point(832, 223);
			 this->bt_Discret->Name = L"bt_Discret";
			 this->bt_Discret->Size = System::Drawing::Size(75, 23);
			 this->bt_Discret->TabIndex = 7;
			 this->bt_Discret->Text = L"Discretizar";
			 this->bt_Discret->UseVisualStyleBackColor = true;
			 this->bt_Discret->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			 // 
			 // groupBox7
			 // 
			 this->groupBox7->Controls->Add(this->TB_signal);
			 this->groupBox7->Controls->Add(this->label31);
			 this->groupBox7->Controls->Add(this->nud_ref);
			 this->groupBox7->Controls->Add(this->tb_sensor);
			 this->groupBox7->Controls->Add(this->label30);
			 this->groupBox7->Controls->Add(this->label29);
			 this->groupBox7->Location = System::Drawing::Point(760, 60);
			 this->groupBox7->Name = L"groupBox7";
			 this->groupBox7->Size = System::Drawing::Size(200, 117);
			 this->groupBox7->TabIndex = 8;
			 this->groupBox7->TabStop = false;
			 this->groupBox7->Text = L"Controlar la planta";
			 // 
			 // TB_signal
			 // 
			 this->TB_signal->Enabled = false;
			 this->TB_signal->Location = System::Drawing::Point(82, 84);
			 this->TB_signal->Name = L"TB_signal";
			 this->TB_signal->Size = System::Drawing::Size(100, 20);
			 this->TB_signal->TabIndex = 6;
			 // 
			 // label31
			 // 
			 this->label31->AutoSize = true;
			 this->label31->Location = System::Drawing::Point(6, 90);
			 this->label31->Name = L"label31";
			 this->label31->Size = System::Drawing::Size(75, 13);
			 this->label31->TabIndex = 5;
			 this->label31->Text = L"Señal enviada";
			 // 
			 // nud_ref
			 // 
			 this->nud_ref->Location = System::Drawing::Point(80, 32);
			 this->nud_ref->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4095, 0, 0, 0 });
			 this->nud_ref->Name = L"nud_ref";
			 this->nud_ref->Size = System::Drawing::Size(102, 20);
			 this->nud_ref->TabIndex = 4;
			 this->nud_ref->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2048, 0, 0, 0 });
			 // 
			 // tb_sensor
			 // 
			 this->tb_sensor->Enabled = false;
			 this->tb_sensor->Location = System::Drawing::Point(82, 58);
			 this->tb_sensor->Name = L"tb_sensor";
			 this->tb_sensor->Size = System::Drawing::Size(100, 20);
			 this->tb_sensor->TabIndex = 3;
			 // 
			 // label30
			 // 
			 this->label30->AutoSize = true;
			 this->label30->Location = System::Drawing::Point(13, 62);
			 this->label30->Name = L"label30";
			 this->label30->Size = System::Drawing::Size(63, 13);
			 this->label30->TabIndex = 2;
			 this->label30->Text = L"Valor actual";
			 this->label30->Click += gcnew System::EventHandler(this, &MyForm::label30_Click);
			 // 
			 // label29
			 // 
			 this->label29->AutoSize = true;
			 this->label29->Location = System::Drawing::Point(17, 35);
			 this->label29->Name = L"label29";
			 this->label29->Size = System::Drawing::Size(59, 13);
			 this->label29->TabIndex = 0;
			 this->label29->Text = L"Referencia";
			 // 
			 // bt_Controlar
			 // 
			 this->bt_Controlar->Location = System::Drawing::Point(832, 252);
			 this->bt_Controlar->Name = L"bt_Controlar";
			 this->bt_Controlar->Size = System::Drawing::Size(75, 23);
			 this->bt_Controlar->TabIndex = 9;
			 this->bt_Controlar->Text = L"Controlar";
			 this->bt_Controlar->UseVisualStyleBackColor = true;
			 this->bt_Controlar->Click += gcnew System::EventHandler(this, &MyForm::bt_Controlar_Click);
			 // 
			 // serialPort
			 // 
			 this->serialPort->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort_DataReceived);
			 // 
			 // MyForm
			 // 
			 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			 this->ClientSize = System::Drawing::Size(972, 389);
			 this->Controls->Add(this->bt_Controlar);
			 this->Controls->Add(this->groupBox7);
			 this->Controls->Add(this->bt_Discret);
			 this->Controls->Add(this->bt_guardar);
			 this->Controls->Add(this->groupBox6);
			 this->Controls->Add(this->groupBox3);
			 this->Controls->Add(this->groupBox2);
			 this->Controls->Add(this->bt_reinicio);
			 this->Controls->Add(this->bt_sint);
			 this->Controls->Add(this->groupBox1);
			 this->Name = L"MyForm";
			 this->Text = L"Control II";
			 this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			 this->groupBox1->ResumeLayout(false);
			 this->groupBox1->PerformLayout();
			 this->groupBox5->ResumeLayout(false);
			 this->groupBox5->PerformLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_cso))->EndInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_cpo))->EndInit();
			 this->groupBox4->ResumeLayout(false);
			 this->groupBox4->PerformLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_pso))->EndInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_ppo))->EndInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_fd))->EndInit();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_fi))->EndInit();
			 this->groupBox2->ResumeLayout(false);
			 this->groupBox2->PerformLayout();
			 this->groupBox3->ResumeLayout(false);
			 this->groupBox3->PerformLayout();
			 this->groupBox6->ResumeLayout(false);
			 this->groupBox6->PerformLayout();
			 this->groupBox7->ResumeLayout(false);
			 this->groupBox7->PerformLayout();
			 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_ref))->EndInit();
			 this->ResumeLayout(false);

		 }
#pragma endregion

private: System::Void nud_ppo_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	if (nud_ppo->Value == 0) 
	{
		tb_tao1p->Enabled = false;
		tb_tao2p->Enabled = false;
		tb_tao3p->Enabled = false;
		tb_tao4p->Enabled = false;
	}
	else if (nud_ppo->Value == 1)
	{
		tb_tao1p->Enabled = true;
		tb_tao2p->Enabled = false;
		tb_tao3p->Enabled = false;
		tb_tao4p->Enabled = false;
	}
	else if (nud_ppo->Value == 2)
	{
		tb_tao1p->Enabled = true;
		tb_tao2p->Enabled = true;
		tb_tao3p->Enabled = false;
		tb_tao4p->Enabled = false;
	}
	else if (nud_ppo->Value == 3)
	{
		tb_tao1p->Enabled = true;
		tb_tao2p->Enabled = true;
		tb_tao3p->Enabled = true;
		tb_tao4p->Enabled = false;
	}
	else if (nud_ppo->Value == 4)
	{
		tb_tao1p->Enabled = true;
		tb_tao2p->Enabled = true;
		tb_tao3p->Enabled = true;
		tb_tao4p->Enabled = true;
	}
	
}
private: System::Void nud_cpo_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	if (nud_cpo->Value == 0)
	{
		tb_tao1c->Enabled = false;
		tb_tao2c->Enabled = false;
		tb_tao3c->Enabled = false;
		tb_tao4c->Enabled = false;
	}
	else if (nud_cpo->Value == 1)
	{
		tb_tao1c->Enabled = true;
		tb_tao2c->Enabled = false;
		tb_tao3c->Enabled = false;
		tb_tao4c->Enabled = false;
	}
	else if (nud_cpo->Value == 2)
	{
		tb_tao1c->Enabled = true;
		tb_tao2c->Enabled = true;
		tb_tao3c->Enabled = false;
		tb_tao4c->Enabled = false;
	}
	else if (nud_cpo->Value == 3)
	{
		tb_tao1c->Enabled = true;
		tb_tao2c->Enabled = true;
		tb_tao3c->Enabled = true;
		tb_tao4c->Enabled = false;
	}
	else if (nud_cpo->Value == 4)
	{
		tb_tao1c->Enabled = true;
		tb_tao2c->Enabled = true;
		tb_tao3c->Enabled = true;
		tb_tao4c->Enabled = true;
	}
}
private: System::Void nud_pso_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	if (nud_pso->Value == 0)
	{
		tb_wn1p->Enabled = false;
		tb_wn2p->Enabled = false;
		tb_z1p->Enabled = false;
		tb_z2p->Enabled = false;
	}
	else if (nud_pso->Value == 1)
	{
		tb_wn1p->Enabled = true;
		tb_wn2p->Enabled = false;
		tb_z1p->Enabled = true;
		tb_z2p->Enabled = false;
	}
	else if (nud_pso->Value == 2)
	{
		tb_wn1p->Enabled = true;
		tb_wn2p->Enabled = true;
		tb_z1p->Enabled = true;
		tb_z2p->Enabled = true;
	}
	
}
private: System::Void nud_cso_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	if (nud_cso->Value == 0)
	{
		tb_wn1c->Enabled = false;
		tb_wn2c->Enabled = false;
		tb_z1c->Enabled = false;
		tb_z2c->Enabled = false;
	}
	else if (nud_cso->Value == 1)
	{
		tb_wn1c->Enabled = true;
		tb_wn2c->Enabled = false;
		tb_z1c->Enabled = true;
		tb_z2c->Enabled = false;
	}
	else if (nud_cso->Value == 2)
	{
		tb_wn1c->Enabled = true;
		tb_wn2c->Enabled = true;
		tb_z1c->Enabled = true;
		tb_z2c->Enabled = true;
	}
}
	private: System::Void bt_sint_Click(System::Object^  sender, System::EventArgs^  e) {
		tb_kp->Text = "";
		tb_ki->Text = "";
		tb_kd->Text = "";

		int ppo = Convert::ToInt16(nud_ppo->Value);
		int cpo = Convert::ToInt16(nud_cpo->Value);
		int pso = Convert::ToInt16(nud_pso->Value);
		int cso = Convert::ToInt16(nud_cso->Value);

		double fp = Convert::ToDouble(tb_fp->Text);
		int fi = Convert::ToInt16(nud_fi->Value);
		int fd = Convert::ToInt16(nud_fd->Value);

		double Mf = Convert::ToDouble(tb_mf->Text);
		double Wc = 1 / Convert::ToDouble(tb_tiempo_res->Text);

		double Taop[4] = { 0 };
		double wnp[4] = { 0 };
		double zp[4] = { 0 };
		double Taoc[4] = { 0 };
		double wnc[2] = { 0 };
		double zc[2] = { 0 };
		
		

		switch (ppo)
		{
		case 1:
			Taop[0] = Convert::ToDouble(tb_tao1p->Text);
			break;
		case 2:
			Taop[0] = Convert::ToDouble(tb_tao1p->Text);
			Taop[1] = Convert::ToDouble(tb_tao2p->Text);
			break;
		case 3:
			Taop[0] = Convert::ToDouble(tb_tao1p->Text);
			Taop[1] = Convert::ToDouble(tb_tao2p->Text);
			Taop[2] = Convert::ToDouble(tb_tao3p->Text);
			break;
		case 4:
			Taop[0] = Convert::ToDouble(tb_tao1p->Text);
			Taop[1] = Convert::ToDouble(tb_tao2p->Text);
			Taop[2] = Convert::ToDouble(tb_tao3p->Text);
			Taop[3] = Convert::ToDouble(tb_tao4p->Text);
			break;
		}

		switch (cpo)
		{
		case 1:
			Taoc[0] = Convert::ToDouble(tb_tao1c->Text);
			break;
		case 2:
			Taoc[0] = Convert::ToDouble(tb_tao1c->Text);
			Taoc[1] = Convert::ToDouble(tb_tao2c->Text);
			break;
		case 3:
			Taoc[0] = Convert::ToDouble(tb_tao1c->Text);
			Taoc[1] = Convert::ToDouble(tb_tao2c->Text);
			Taoc[2] = Convert::ToDouble(tb_tao3c->Text);
			break;
		case 4:
			Taoc[0] = Convert::ToDouble(tb_tao1c->Text);
			Taoc[1] = Convert::ToDouble(tb_tao2c->Text);
			Taoc[2] = Convert::ToDouble(tb_tao3c->Text);
			Taoc[3] = Convert::ToDouble(tb_tao4c->Text);
			break;
		}

		switch (pso)
		{
		case 1:
			wnp[0] = Convert::ToDouble(tb_wn1p->Text);
			zp[0] = Convert::ToDouble(tb_z1p->Text);
			break;
		case 2:
			wnp[0] = Convert::ToDouble(tb_wn1p->Text);
			zp[0] = Convert::ToDouble(tb_z1p->Text);
			wnp[1] = Convert::ToDouble(tb_wn2p->Text);
			zp[1] = Convert::ToDouble(tb_z2p->Text);
			break;
		}

		switch (cso)
		{
		case 1:
			wnc[0] = Convert::ToDouble(tb_wn1c->Text);
			zc[0] = Convert::ToDouble(tb_z1c->Text);
			break;
		case 2:
			wnc[0] = Convert::ToDouble(tb_wn1c->Text);
			zc[0] = Convert::ToDouble(tb_z1c->Text);
			wnc[1] = Convert::ToDouble(tb_wn2c->Text);
			zc[1] = Convert::ToDouble(tb_z2c->Text);
			break;
		}


		double phiPL = 0.;
		//Fase de los integradores
		for (int i = 0; i < fi; i++)
			phiPL += -90;
		//Fase de los derivadores
		for (int i = 0; i < fd; i++)
			phiPL += 90;
		//Fase de los polos de primer orden
		for (int i = 0; i < ppo; i++)
		{
			phiPL += -Math::Atan(Taop[i] * Wc)*180. / Math::PI;
		}
		//Fase de los ceros de primer orden 
		for (int i = 0; i < cpo; i++)
		{
			phiPL += Math::Atan(Taoc[i] * Wc)*180. / Math::PI;
		}
		//Fase de los polos de segundo orden
		for (int i = 0; i < pso; i++)
		{
			phiPL += -Math::Atan2(2 * zp[i] * Wc / wnp[i], 1 - (Math::Pow(Wc, 2) / Math::Pow(wnp[i], 2)))*180. / Math::PI;
		}
		//Fase de los ceros de segundo orden
		for (int i = 0; i < cso; i++)
		{
			phiPL += Math::Atan2(2 * zc[i] * Wc / wnc[i], 1 - (Math::Pow(Wc, 2) / Math::Pow(wnc[i], 2)))*180. / Math::PI;
		}

		double MagPL = 0.;

		//Magnitud del factor ganancia
		MagPL += 20 * Math::Log10(fp);
		//Magnitud de los factores integradores
		for (int i = 0; i < fi; i++)
			MagPL += -20 * Math::Log10(Wc);
		//Magnitud de los factores derivadores
		for (int i = 0; i < fd; i++)
			MagPL += 20 * Math::Log10(Wc);
		//Magnitud de los factores Polos primer orden 
		for (int i = 0; i < ppo; i++)
			MagPL += -20 * Math::Log10(Math::Sqrt(1 + Math::Pow(Taop[i],2) * Math::Pow(Wc,2)));
		//Magnitud de los factores Ceros primer orden
		for (int i = 0; i < cpo; i++)
			MagPL += 20 * Math::Log10(Math::Sqrt(1 + Math::Pow(Taoc[i], 2) * Math::Pow(Wc, 2)));
		//Magnitud de los factores Polos segundo orden
		for (int i = 0; i < pso; i++)
			MagPL += -20 * Math::Log10(Math::Sqrt((1-(Math::Pow(Wc,2)/Math::Pow(wnp[i],2))) + Math::Pow(2*zp[i]*Wc/wnp[i],2)));
		//Magnitud de los factores Ceros segundo orden
		for (int i=0; i<cso; i++)
			MagPL += 20 * Math::Log10(Math::Sqrt((1 - (Math::Pow(Wc, 2) / Math::Pow(wnc[i], 2))) + Math::Pow(2 * zc[i] * Wc / wnc[i], 2)));

		double phiCont = 0.;


		if (rb_p->Checked == true)
		{
			kp = Math::Pow(10, -MagPL / 20);
			phiCont = phiPL;
			//tb_mf->Text = Convert::ToString(180. + phiCont);
			ki = 0;
			kd = 0;
			control = 1;
		}
		else if (rb_i->Checked == true)
		{
			ki = Math::Pow(10, (20 * Math::Log10(Wc) - MagPL) / 20);
			phiCont = phiPL - 90.;
			//tb_mf->Text = Convert::ToString(180. + phiCont);
			kp = 0;
			kd = 0;
			control = 2;
		}
		else if (rb_pi->Checked == true)
		{
			//Criterio de margen de fase
			double a = 0.;  // a = ki/kp
			double baux = 0.;
			double angulos[3] = { Mf, -90, -phiPL };
			for (int i = 0; i < 3; i++) {
				angulos[i] = angulos[i] * Math::PI / 180;
				baux += angulos[i];
			}

			a = Wc / Math::Tan(baux);

			//Criterio de magnitud
			kp = Math::Pow(10, (20*Math::Log10(Wc) - 20*Math::Log10(Math::Sqrt(1 + Math::Pow(1/a, 2)*Math::Pow(Wc,2))) - MagPL)/20.)/a;
			ki = a*kp;
			kd = 0;
			control = 3;
		}
		else if (rb_pd->Checked == true)
		{
			//Criterio de margen de fase
			double a = 0.;  // a = kp/kd
			double baux = 0.;
			double angulos[3] = { Mf, -180, -phiPL };
			for (int i = 0; i < 3; i++) {
				angulos[i] = angulos[i] * Math::PI / 180;
				baux += angulos[i];
			}

			a = Wc / Math::Tan(baux);

			//Criterio de magnitud
			kd = Math::Pow(10, (-20 * Math::Log10(Math::Sqrt(1 + Math::Pow(Wc / a, 2))) - MagPL) / 20.) / a;
			kp = a*kd;
			ki = 0;
			control = 4;
		}
		else if (rb_pid->Checked == true)
		{
			//Criterio de margen de fase
			double a = 1., b = 0., baux = 0.;
			double c = -Math::Atan(Wc);
			double angulos[3] = { Mf, -90, -phiPL};
			for (int i = 0; i < 3; i++) {
				angulos[i] = angulos[i] * Math::PI / 180;
				baux += angulos[i];
			}
			baux += c;
			b = Wc / Math::Tan(baux);
			double aux = 0.;
			aux = 20 * Math::Log10(Wc) - 20 * Math::Log10(Math::Sqrt(1 + Math::Pow(Wc, 2))) - 20 * Math::Log10(Math::Sqrt(1 + Math::Pow(Wc / b, 2))) - MagPL;
			aux = aux / 20;
			kd = Math::Pow(10, aux);
			kd = kd / b;
			ki = b*kd;
			kp = kd*(1 + b);
			control = 5;
		}

		tb_kp->Text = kp != 0 ? Convert::ToString(Math::Round(kp, 6)) : "";
		tb_ki->Text = ki != 0 ? Convert::ToString(Math::Round(ki, 6)) : "";
		tb_kd->Text = kd != 0 ? Convert::ToString(Math::Round(kd, 6)) : "";

		bt_Discret->Enabled = true;

	}
private: System::Void bt_reinicio_Click(System::Object^  sender, System::EventArgs^  e) {
	tb_fp->Text = "";
	tb_kd->Text = "";
	tb_ki->Text = "";
	tb_kp->Text = "";
	rb_p->Checked = true;
	nud_fd->Value = 0;
	nud_fi->Value = 0;
	nud_ppo->Value = 0;
	nud_cpo->Value = 0;
	nud_pso->Value = 0;
	nud_cso->Value = 0;
	tb_tao1c->Text = "";
	tb_tao2c->Text = "";
	tb_tao3c->Text = "";
	tb_tao4c->Text = "";
	tb_tao1p->Text = "";
	tb_tao2p->Text = "";
	tb_tao3p->Text = "";
	tb_tao4p->Text = "";
	tb_mf->Text = "";
	tb_tiempo_res->Text = "";
	tb_wn1p->Text = "";
	tb_wn2p->Text = "";
	tb_z1p->Text = "";
	tb_z2p->Text = "";
	tb_wn1c->Text = "";
	tb_wn2c->Text = "";
	tb_z1c->Text = "";
	tb_z2c->Text = "";
	serialPort->Close();
	bt_Discret->Enabled = false;
	bt_Controlar->Enabled = false;

}
private: System::Void bt_guardar_Click(System::Object^  sender, System::EventArgs^  e) {
	double Taop[4] = { 0 };
	double wnp[4] = { 0 };
	double zp[4] = { 0 };
	double Taoc[4] = { 0 };
	double wnc[2] = { 0 };
	double zc[2] = { 0 };

	FILE *file;
	file = fopen("sintonizacion.txt", "w+");
	fputs("SINTONIZADOR DE CONTROLADORES\n\n", file);
	fputs("ult. rev. : 20/04/2019\n", file);
	fputs("Por: Alvaro Ivan Alvarado Hernandez\n\n", file);
	fputs("-----------------------------------------------------------------------------\n\n", file);
	fputs("Detalles del Sistema:\n\n", file);
	fprintf(file, "Ganancia: %f \n", Convert::ToDouble(tb_fp->Text));
	fputs("\n", file);
	fprintf(file, "No. de integradores: %d \n", Convert::ToInt16(nud_fi->Text));
	fputs("\n", file);
	fprintf(file, "No. de derivadores: %d \n", Convert::ToInt16(nud_fd->Text));
	fputs("\n", file);

	
	if (nud_ppo->Value != 0)
	{
		int ppo = Convert::ToInt16(nud_ppo->Value);
		fprintf(file, "Polos de Primer Orden: %d \n", ppo);

		fputs("Tao de cada polo: \n", file);
		switch (ppo)
		{
		case 1:
			Taop[0] = Convert::ToDouble(tb_tao1p->Text);
			break;
		case 2:
			Taop[0] = Convert::ToDouble(tb_tao1p->Text);
			Taop[1] = Convert::ToDouble(tb_tao2p->Text);
			break;
		case 3:
			Taop[0] = Convert::ToDouble(tb_tao1p->Text);
			Taop[1] = Convert::ToDouble(tb_tao2p->Text);
			Taop[2] = Convert::ToDouble(tb_tao3p->Text);
			break;
		case 4:
			Taop[0] = Convert::ToDouble(tb_tao1p->Text);
			Taop[1] = Convert::ToDouble(tb_tao2p->Text);
			Taop[2] = Convert::ToDouble(tb_tao3p->Text);
			Taop[3] = Convert::ToDouble(tb_tao4p->Text);
			break;
		}
		for (int i = 0; i < ppo; i++)
		{
			fprintf(file, "Polo: %d. T = %f\n", i+1, Taop[i]);
		}
		fputs("\n", file);
	}
	else
	{
		fputs("No se tienen polos de Primer Orden\n", file);
		fputs("\n", file);
	}

	
	if (nud_pso->Value != 0)
	{
		int pso = Convert::ToInt16(nud_pso->Value);
		fprintf(file,"Polos de Segundo Orden: %d \n", pso);
		fputs("Wn y Z de cada polo: \n", file);
		
		switch (pso)
		{
		case 1:
			wnp[0] = Convert::ToDouble(tb_wn1p->Text);
			zp[0] = Convert::ToDouble(tb_z1p->Text);
			break;
		case 2:
			wnp[0] = Convert::ToDouble(tb_wn1p->Text);
			zp[0] = Convert::ToDouble(tb_z1p->Text);
			wnp[1] = Convert::ToDouble(tb_wn2p->Text);
			zp[1] = Convert::ToDouble(tb_z2p->Text);
			break;
		}
		for (int i = 0; i < pso; i++)
		{
			fprintf(file, "Polo: %d. Wn = %f\n", i + 1, wnp[i]);
			fprintf(file, "Polo: %d. Z = %f\n", i + 1, zp[i]);
		}
		fputs("\n", file);
	}
	else
	{
		fputs("No se tienen polos de Segundo Orden\n", file);
		fputs("\n", file);
	}

	
	if (nud_cpo->Value != 0)
	{
		int cpo = Convert::ToInt16(nud_cpo->Value);
		fprintf(file, "Ceros de Primer Orden: %d \n", cpo);
		fputs("Tao de cada cero: \n", file);
		switch (cpo)
		{
		case 1:
			Taoc[0] = Convert::ToDouble(tb_tao1c->Text);
			break;
		case 2:
			Taoc[0] = Convert::ToDouble(tb_tao1c->Text);
			Taoc[1] = Convert::ToDouble(tb_tao2c->Text);
			break;
		case 3:
			Taoc[0] = Convert::ToDouble(tb_tao1c->Text);
			Taoc[1] = Convert::ToDouble(tb_tao2c->Text);
			Taoc[2] = Convert::ToDouble(tb_tao3c->Text);
			break;
		case 4:
			Taoc[0] = Convert::ToDouble(tb_tao1c->Text);
			Taoc[1] = Convert::ToDouble(tb_tao2c->Text);
			Taoc[2] = Convert::ToDouble(tb_tao3c->Text);
			Taoc[3] = Convert::ToDouble(tb_tao4c->Text);
			break;
		}
		for (int i = 0; i < cpo; i++)
		{
			fprintf(file, "Cero: %d. T = %f\n", i + 1, Taoc[i]);
		}
		fputs("\n", file);
	}
	else
	{
		fputs("No se tienen ceros de Primer Orden\n", file);
		fputs("\n", file);
	}

	
	if (nud_cso->Value != 0)
	{
		int cso = Convert::ToInt16(nud_cso->Value);
		fprintf(file, "Ceros de Segundo Orden: %d \n", cso);
		fputs("Wn y Z de cada cero: \n", file);

		switch (cso)
		{
		case 1:
			wnc[0] = Convert::ToDouble(tb_wn1c->Text);
			zc[0] = Convert::ToDouble(tb_z1c->Text);
			break;
		case 2:
			wnc[0] = Convert::ToDouble(tb_wn1c->Text);
			zc[0] = Convert::ToDouble(tb_z1c->Text);
			wnc[1] = Convert::ToDouble(tb_wn2c->Text);
			zc[1] = Convert::ToDouble(tb_z2c->Text);
			break;
		}
		for (int i = 0; i < cso; i++)
		{
			fprintf(file, "Cero: %d. Wn = %f\n", i + 1, wnc[i]);
			fprintf(file, "Cero: %d. Z = %f\n", i + 1, zc[i]);
		}
		fputs("\n", file);
	}
	else
	{
		fputs("No se tienen ceros de Segundo Orden\n\n", file);
		fputs("\n", file);
	}

	fputs("-----------------------------------------------------------------------------\n\n", file);
	fputs("Detalles del controlador sintonizado: \n\n", file);
	fputs("Parametros de diseno:\n", file);
	fputs("\n", file);
	fprintf(file, "Margen de fase (en grados) = %f \n", Convert::ToDouble(tb_mf->Text));
	fputs("\n", file);
	fprintf(file, "Tiempo de respuesta (en seg.) = %f \n", Convert::ToDouble(tb_tiempo_res->Text));
	fputs("\n", file);

	fputs("Tipo de controlador seleccionado: \n", file);
	switch (control)
	{
	case 1:
		fputs("Proporcional (P)\n", file);
		fputs("\n", file);
		fputs("Valores de ganancia:\n", file);
		fprintf(file, "kp = %f\n", kp);
		break;
	case 2:
		fputs("Integral (I)\n", file);
		fputs("\n", file);
		fputs("Valores de ganancia:\n", file);
		fprintf(file, "ki = %f\n", ki);
		break;
	case 3:
		fputs("Proporcional-Integral (PI)\n", file);
		fputs("\n", file);
		fputs("Valores de ganancia:\n", file);
		fprintf(file, "kp = %f\n", kp);
		fprintf(file, "ki = %f\n", ki);
		break;
	case 4:
		fputs("Proporcional-Derivativo (PD)\n", file);
		fputs("\n", file);
		fputs("Valores de ganancia:\n", file);
		fprintf(file, "kp = %f\n", kp);
		fprintf(file, "kd = %f\n", kd);
		break;
	case 5:
		fputs("PID\n", file);
		fputs("\n", file);
		fputs("Valores de ganancia:\n", file);
		fprintf(file, "kp = %f\n", kp);
		fprintf(file, "ki = %f\n", ki);
		fprintf(file, "kd = %f\n", kd);
		break;

	}
	fclose(file);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	double T = 0.01;  // circuitos DC
	//double T = 1.0/120.0; // circuitos AC (posible idea)
	for (int i = 0; i < 5; i++)
		coef[i] = 0.;

	coef[4] = 1.;

	switch (control) 
	{
	case 1: //P
		coef[0] = kp;
		break;
	case 2: //I
		coef[0] = T*ki;
		coef[1] = T*ki;
		coef[3] = 2;
		coef[4] = 2;
		break;
	case 3: //PI
		coef[0] = T * ki + 2 * kp;
		coef[1] = T * ki - 2 * kp;
		coef[3] = 2;
		coef[4] = 2;
		break;
	case 4: //PD
		coef[0] = T * kp + 2 * kd;
		coef[1] = T * kp - 2 * kd;
		coef[3] = -T;
		coef[4] = T;
		break;
	case 5: //PID
		coef[0] = 2 * T * kp + Math::Pow(T, 2) * ki + 4 * kd;
		coef[1] = 2 * Math::Pow(T, 2) * ki - 8 * kd;
		coef[2] = -2 * T*kp + Math::Pow(T, 2)*ki + 4 * kd;
		coef[3] = 2 * T;
		coef[4] = 2 * T;
		break;
	}
	String ^message = "Controlador discretizado. Listo para controlar.";
	String ^titulo = "Discretizar";
	MessageBox::Show(message, titulo);

	bt_Controlar->Enabled = true;
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	bt_Discret->Enabled = false;
	bt_Controlar->Enabled = false;
	serialPort->PortName = "COM17";
	serialPort->BaudRate = 9600;
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	serialPort->Close();
}
private: System::Void bt_Controlar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (bt_Controlar->Text == "Controlar") {
		serialPort->Open();
		bt_Controlar->Text = "Parar";
		bt_sint->Enabled = false;
		bt_Discret->Enabled = false;
	}
	else {
		serialPort->Close();
		bt_Controlar->Text = "Controlar";
		bt_sint->Enabled = true;
		bt_Discret->Enabled = true;
	}
}
private: System::Void serialPort_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
	Byte z;
	if (serialPort->BytesToRead)
	{
		z = serialPort->ReadByte();
		Delegado ^Escribir = gcnew Delegado(this, &MyForm::Controlado);
		this->Invoke(Escribir, z); 
	}
}
		 delegate void Delegado(Byte z);
		 int ref;
		 int signal;
		 int datof=0;
		 	 void Controlado(Byte z) {
			 if (i == 0) {
				 dato = Convert::ToInt32(z);
				 i++;
			 }
			 else if (i == 1) {
				 int dato2 = Convert::ToInt32(z);
				 dato2 = 15 & dato2;
				 dato2 = dato2 << 8;
				 datof = dato2 | dato;
				 ref = Convert::ToInt32(nud_ref->Value);
				 tb_sensor->Text = Convert::ToString(datof);
				 er[2] = Convert::ToDouble((ref - datof)) / 4095.;
				 switch (control) {
				 case 1:
					 b[2] = coef[0] * er[2];
					 break;
				 case 2:
					 b[2] = (coef[0] * er[2] + coef[1] * er[1] + coef[3] * b[1]) / coef[4];
					 break;
				 case 3:
					 b[2] = (coef[0] * er[2] + coef[1] * er[1] + coef[3] * b[1]) / coef[4];
					 break;
				 case 4:
					 b[2] = (coef[0] * er[2] + coef[1] * er[1] + coef[3] * b[1]) / coef[4];
					 break;
				 case 5:
					 b[2] = (coef[0] * er[2] + coef[1] * er[1] + coef[2] * er[0] + coef[3] * b[2]) / coef[4];
					 break;
				 }
				 for (int j = 0; j < 2; j++) {
					 b[j] = b[j + 1];
					 er[j] = er[j + 1];
				 }
				 signal = Convert::ToInt32(b[2] * 4095);
				 if (signal > 4095) {
					 signal = 4095;
				 }
				 else if (signal < 0) {
					 signal = 0;
				 }
				 //signal = ref;
				 array<byte> ^s;
				 s = gcnew array<byte> {0, 0};
				 s[0] = (3840 & signal) >> 8;
				 s[1] = 255 & signal;
				 TB_signal->Text = Convert::ToString(signal);
				 serialPort->Write(s, 0, 2);
				 i = 0;
			 }
	 }

private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}