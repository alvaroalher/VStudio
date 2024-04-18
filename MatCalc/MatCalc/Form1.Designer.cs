namespace MatCalc
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.GBOp = new System.Windows.Forms.GroupBox();
            this.RBInv = new System.Windows.Forms.RadioButton();
            this.RBMlt = new System.Windows.Forms.RadioButton();
            this.RBSus = new System.Windows.Forms.RadioButton();
            this.RBSum = new System.Windows.Forms.RadioButton();
            this.GBMatA = new System.Windows.Forms.GroupBox();
            this.Ta33 = new System.Windows.Forms.TextBox();
            this.Ta23 = new System.Windows.Forms.TextBox();
            this.Ta32 = new System.Windows.Forms.TextBox();
            this.Ta31 = new System.Windows.Forms.TextBox();
            this.Ta13 = new System.Windows.Forms.TextBox();
            this.Ta22 = new System.Windows.Forms.TextBox();
            this.Ta21 = new System.Windows.Forms.TextBox();
            this.Ta12 = new System.Windows.Forms.TextBox();
            this.Ta11 = new System.Windows.Forms.TextBox();
            this.GBMatB = new System.Windows.Forms.GroupBox();
            this.Tb33 = new System.Windows.Forms.TextBox();
            this.Tb23 = new System.Windows.Forms.TextBox();
            this.Tb32 = new System.Windows.Forms.TextBox();
            this.Tb31 = new System.Windows.Forms.TextBox();
            this.Tb13 = new System.Windows.Forms.TextBox();
            this.Tb22 = new System.Windows.Forms.TextBox();
            this.Tb21 = new System.Windows.Forms.TextBox();
            this.Tb12 = new System.Windows.Forms.TextBox();
            this.Tb11 = new System.Windows.Forms.TextBox();
            this.LBOpe = new System.Windows.Forms.Label();
            this.GBMatC = new System.Windows.Forms.GroupBox();
            this.Tc33 = new System.Windows.Forms.TextBox();
            this.Tc23 = new System.Windows.Forms.TextBox();
            this.Tc32 = new System.Windows.Forms.TextBox();
            this.Tc31 = new System.Windows.Forms.TextBox();
            this.Tc13 = new System.Windows.Forms.TextBox();
            this.Tc22 = new System.Windows.Forms.TextBox();
            this.Tc21 = new System.Windows.Forms.TextBox();
            this.Tc12 = new System.Windows.Forms.TextBox();
            this.Tc11 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.BCalc = new System.Windows.Forms.Button();
            this.BClear = new System.Windows.Forms.Button();
            this.GBOp.SuspendLayout();
            this.GBMatA.SuspendLayout();
            this.GBMatB.SuspendLayout();
            this.GBMatC.SuspendLayout();
            this.SuspendLayout();
            // 
            // GBOp
            // 
            this.GBOp.Controls.Add(this.RBInv);
            this.GBOp.Controls.Add(this.RBMlt);
            this.GBOp.Controls.Add(this.RBSus);
            this.GBOp.Controls.Add(this.RBSum);
            this.GBOp.Location = new System.Drawing.Point(12, 12);
            this.GBOp.Name = "GBOp";
            this.GBOp.Size = new System.Drawing.Size(166, 155);
            this.GBOp.TabIndex = 0;
            this.GBOp.TabStop = false;
            this.GBOp.Text = "Operación";
            // 
            // RBInv
            // 
            this.RBInv.AutoSize = true;
            this.RBInv.Location = new System.Drawing.Point(18, 119);
            this.RBInv.Name = "RBInv";
            this.RBInv.Size = new System.Drawing.Size(76, 24);
            this.RBInv.TabIndex = 3;
            this.RBInv.TabStop = true;
            this.RBInv.Text = "Inversa";
            this.RBInv.UseVisualStyleBackColor = true;
            this.RBInv.CheckedChanged += new System.EventHandler(this.RBInv_CheckedChanged);
            // 
            // RBMlt
            // 
            this.RBMlt.AutoSize = true;
            this.RBMlt.Location = new System.Drawing.Point(18, 89);
            this.RBMlt.Name = "RBMlt";
            this.RBMlt.Size = new System.Drawing.Size(124, 24);
            this.RBMlt.TabIndex = 2;
            this.RBMlt.TabStop = true;
            this.RBMlt.Text = "Multiplicación";
            this.RBMlt.UseVisualStyleBackColor = true;
            this.RBMlt.CheckedChanged += new System.EventHandler(this.RBMlt_CheckedChanged);
            // 
            // RBSus
            // 
            this.RBSus.AutoSize = true;
            this.RBSus.Location = new System.Drawing.Point(18, 59);
            this.RBSus.Name = "RBSus";
            this.RBSus.Size = new System.Drawing.Size(66, 24);
            this.RBSus.TabIndex = 1;
            this.RBSus.TabStop = true;
            this.RBSus.Text = "Resta";
            this.RBSus.UseVisualStyleBackColor = true;
            this.RBSus.CheckedChanged += new System.EventHandler(this.RBSus_CheckedChanged);
            // 
            // RBSum
            // 
            this.RBSum.AutoSize = true;
            this.RBSum.Location = new System.Drawing.Point(18, 29);
            this.RBSum.Name = "RBSum";
            this.RBSum.Size = new System.Drawing.Size(67, 24);
            this.RBSum.TabIndex = 0;
            this.RBSum.TabStop = true;
            this.RBSum.Text = "Suma";
            this.RBSum.UseVisualStyleBackColor = true;
            this.RBSum.CheckedChanged += new System.EventHandler(this.RBSum_CheckedChanged);
            // 
            // GBMatA
            // 
            this.GBMatA.Controls.Add(this.Ta33);
            this.GBMatA.Controls.Add(this.Ta23);
            this.GBMatA.Controls.Add(this.Ta32);
            this.GBMatA.Controls.Add(this.Ta31);
            this.GBMatA.Controls.Add(this.Ta13);
            this.GBMatA.Controls.Add(this.Ta22);
            this.GBMatA.Controls.Add(this.Ta21);
            this.GBMatA.Controls.Add(this.Ta12);
            this.GBMatA.Controls.Add(this.Ta11);
            this.GBMatA.Location = new System.Drawing.Point(184, 12);
            this.GBMatA.Name = "GBMatA";
            this.GBMatA.Size = new System.Drawing.Size(240, 172);
            this.GBMatA.TabIndex = 1;
            this.GBMatA.TabStop = false;
            this.GBMatA.Text = "Matriz A";
            // 
            // Ta33
            // 
            this.Ta33.Location = new System.Drawing.Point(158, 128);
            this.Ta33.Name = "Ta33";
            this.Ta33.Size = new System.Drawing.Size(70, 27);
            this.Ta33.TabIndex = 5;
            // 
            // Ta23
            // 
            this.Ta23.Location = new System.Drawing.Point(158, 86);
            this.Ta23.Name = "Ta23";
            this.Ta23.Size = new System.Drawing.Size(70, 27);
            this.Ta23.TabIndex = 5;
            // 
            // Ta32
            // 
            this.Ta32.Location = new System.Drawing.Point(82, 128);
            this.Ta32.Name = "Ta32";
            this.Ta32.Size = new System.Drawing.Size(70, 27);
            this.Ta32.TabIndex = 4;
            // 
            // Ta31
            // 
            this.Ta31.Location = new System.Drawing.Point(6, 128);
            this.Ta31.Name = "Ta31";
            this.Ta31.Size = new System.Drawing.Size(70, 27);
            this.Ta31.TabIndex = 3;
            // 
            // Ta13
            // 
            this.Ta13.Location = new System.Drawing.Point(158, 44);
            this.Ta13.Name = "Ta13";
            this.Ta13.Size = new System.Drawing.Size(70, 27);
            this.Ta13.TabIndex = 2;
            // 
            // Ta22
            // 
            this.Ta22.Location = new System.Drawing.Point(82, 86);
            this.Ta22.Name = "Ta22";
            this.Ta22.Size = new System.Drawing.Size(70, 27);
            this.Ta22.TabIndex = 4;
            // 
            // Ta21
            // 
            this.Ta21.Location = new System.Drawing.Point(6, 86);
            this.Ta21.Name = "Ta21";
            this.Ta21.Size = new System.Drawing.Size(70, 27);
            this.Ta21.TabIndex = 3;
            // 
            // Ta12
            // 
            this.Ta12.Location = new System.Drawing.Point(82, 44);
            this.Ta12.Name = "Ta12";
            this.Ta12.Size = new System.Drawing.Size(70, 27);
            this.Ta12.TabIndex = 1;
            // 
            // Ta11
            // 
            this.Ta11.Location = new System.Drawing.Point(6, 44);
            this.Ta11.Name = "Ta11";
            this.Ta11.Size = new System.Drawing.Size(70, 27);
            this.Ta11.TabIndex = 0;
            // 
            // GBMatB
            // 
            this.GBMatB.Controls.Add(this.Tb33);
            this.GBMatB.Controls.Add(this.Tb23);
            this.GBMatB.Controls.Add(this.Tb32);
            this.GBMatB.Controls.Add(this.Tb31);
            this.GBMatB.Controls.Add(this.Tb13);
            this.GBMatB.Controls.Add(this.Tb22);
            this.GBMatB.Controls.Add(this.Tb21);
            this.GBMatB.Controls.Add(this.Tb12);
            this.GBMatB.Controls.Add(this.Tb11);
            this.GBMatB.Location = new System.Drawing.Point(455, 12);
            this.GBMatB.Name = "GBMatB";
            this.GBMatB.Size = new System.Drawing.Size(240, 172);
            this.GBMatB.TabIndex = 6;
            this.GBMatB.TabStop = false;
            this.GBMatB.Text = "Matriz B";
            // 
            // Tb33
            // 
            this.Tb33.Location = new System.Drawing.Point(158, 128);
            this.Tb33.Name = "Tb33";
            this.Tb33.Size = new System.Drawing.Size(70, 27);
            this.Tb33.TabIndex = 5;
            // 
            // Tb23
            // 
            this.Tb23.Location = new System.Drawing.Point(158, 86);
            this.Tb23.Name = "Tb23";
            this.Tb23.Size = new System.Drawing.Size(70, 27);
            this.Tb23.TabIndex = 5;
            // 
            // Tb32
            // 
            this.Tb32.Location = new System.Drawing.Point(82, 128);
            this.Tb32.Name = "Tb32";
            this.Tb32.Size = new System.Drawing.Size(70, 27);
            this.Tb32.TabIndex = 4;
            // 
            // Tb31
            // 
            this.Tb31.Location = new System.Drawing.Point(6, 128);
            this.Tb31.Name = "Tb31";
            this.Tb31.Size = new System.Drawing.Size(70, 27);
            this.Tb31.TabIndex = 3;
            // 
            // Tb13
            // 
            this.Tb13.Location = new System.Drawing.Point(158, 44);
            this.Tb13.Name = "Tb13";
            this.Tb13.Size = new System.Drawing.Size(70, 27);
            this.Tb13.TabIndex = 2;
            // 
            // Tb22
            // 
            this.Tb22.Location = new System.Drawing.Point(82, 86);
            this.Tb22.Name = "Tb22";
            this.Tb22.Size = new System.Drawing.Size(70, 27);
            this.Tb22.TabIndex = 4;
            // 
            // Tb21
            // 
            this.Tb21.Location = new System.Drawing.Point(6, 86);
            this.Tb21.Name = "Tb21";
            this.Tb21.Size = new System.Drawing.Size(70, 27);
            this.Tb21.TabIndex = 3;
            // 
            // Tb12
            // 
            this.Tb12.Location = new System.Drawing.Point(82, 44);
            this.Tb12.Name = "Tb12";
            this.Tb12.Size = new System.Drawing.Size(70, 27);
            this.Tb12.TabIndex = 1;
            // 
            // Tb11
            // 
            this.Tb11.Location = new System.Drawing.Point(6, 44);
            this.Tb11.Name = "Tb11";
            this.Tb11.Size = new System.Drawing.Size(70, 27);
            this.Tb11.TabIndex = 0;
            // 
            // LBOpe
            // 
            this.LBOpe.AutoSize = true;
            this.LBOpe.Location = new System.Drawing.Point(430, 98);
            this.LBOpe.Name = "LBOpe";
            this.LBOpe.Size = new System.Drawing.Size(19, 20);
            this.LBOpe.TabIndex = 7;
            this.LBOpe.Text = "+";
            // 
            // GBMatC
            // 
            this.GBMatC.Controls.Add(this.Tc33);
            this.GBMatC.Controls.Add(this.Tc23);
            this.GBMatC.Controls.Add(this.Tc32);
            this.GBMatC.Controls.Add(this.Tc31);
            this.GBMatC.Controls.Add(this.Tc13);
            this.GBMatC.Controls.Add(this.Tc22);
            this.GBMatC.Controls.Add(this.Tc21);
            this.GBMatC.Controls.Add(this.Tc12);
            this.GBMatC.Controls.Add(this.Tc11);
            this.GBMatC.Location = new System.Drawing.Point(726, 12);
            this.GBMatC.Name = "GBMatC";
            this.GBMatC.Size = new System.Drawing.Size(240, 172);
            this.GBMatC.TabIndex = 8;
            this.GBMatC.TabStop = false;
            this.GBMatC.Text = "Resultado";
            // 
            // Tc33
            // 
            this.Tc33.Enabled = false;
            this.Tc33.Location = new System.Drawing.Point(158, 128);
            this.Tc33.Name = "Tc33";
            this.Tc33.Size = new System.Drawing.Size(70, 27);
            this.Tc33.TabIndex = 5;
            // 
            // Tc23
            // 
            this.Tc23.Enabled = false;
            this.Tc23.Location = new System.Drawing.Point(158, 86);
            this.Tc23.Name = "Tc23";
            this.Tc23.Size = new System.Drawing.Size(70, 27);
            this.Tc23.TabIndex = 5;
            // 
            // Tc32
            // 
            this.Tc32.Enabled = false;
            this.Tc32.Location = new System.Drawing.Point(82, 128);
            this.Tc32.Name = "Tc32";
            this.Tc32.Size = new System.Drawing.Size(70, 27);
            this.Tc32.TabIndex = 4;
            // 
            // Tc31
            // 
            this.Tc31.Enabled = false;
            this.Tc31.Location = new System.Drawing.Point(6, 128);
            this.Tc31.Name = "Tc31";
            this.Tc31.Size = new System.Drawing.Size(70, 27);
            this.Tc31.TabIndex = 3;
            // 
            // Tc13
            // 
            this.Tc13.Enabled = false;
            this.Tc13.Location = new System.Drawing.Point(158, 44);
            this.Tc13.Name = "Tc13";
            this.Tc13.Size = new System.Drawing.Size(70, 27);
            this.Tc13.TabIndex = 2;
            // 
            // Tc22
            // 
            this.Tc22.Enabled = false;
            this.Tc22.Location = new System.Drawing.Point(82, 86);
            this.Tc22.Name = "Tc22";
            this.Tc22.Size = new System.Drawing.Size(70, 27);
            this.Tc22.TabIndex = 4;
            // 
            // Tc21
            // 
            this.Tc21.Enabled = false;
            this.Tc21.Location = new System.Drawing.Point(6, 86);
            this.Tc21.Name = "Tc21";
            this.Tc21.Size = new System.Drawing.Size(70, 27);
            this.Tc21.TabIndex = 3;
            // 
            // Tc12
            // 
            this.Tc12.Enabled = false;
            this.Tc12.Location = new System.Drawing.Point(82, 44);
            this.Tc12.Name = "Tc12";
            this.Tc12.Size = new System.Drawing.Size(70, 27);
            this.Tc12.TabIndex = 1;
            // 
            // Tc11
            // 
            this.Tc11.Enabled = false;
            this.Tc11.Location = new System.Drawing.Point(6, 44);
            this.Tc11.Name = "Tc11";
            this.Tc11.Size = new System.Drawing.Size(70, 27);
            this.Tc11.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(701, 98);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(19, 20);
            this.label1.TabIndex = 9;
            this.label1.Text = "=";
            // 
            // BCalc
            // 
            this.BCalc.Location = new System.Drawing.Point(772, 209);
            this.BCalc.Name = "BCalc";
            this.BCalc.Size = new System.Drawing.Size(94, 29);
            this.BCalc.TabIndex = 10;
            this.BCalc.Text = "Calcular";
            this.BCalc.UseVisualStyleBackColor = true;
            this.BCalc.Click += new System.EventHandler(this.BCalc_Click);
            // 
            // BClear
            // 
            this.BClear.Location = new System.Drawing.Point(872, 209);
            this.BClear.Name = "BClear";
            this.BClear.Size = new System.Drawing.Size(94, 29);
            this.BClear.TabIndex = 11;
            this.BClear.Text = "Limpiar";
            this.BClear.UseVisualStyleBackColor = true;
            this.BClear.Click += new System.EventHandler(this.BClear_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(984, 259);
            this.Controls.Add(this.BClear);
            this.Controls.Add(this.BCalc);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.GBMatC);
            this.Controls.Add(this.LBOpe);
            this.Controls.Add(this.GBMatB);
            this.Controls.Add(this.GBMatA);
            this.Controls.Add(this.GBOp);
            this.Name = "Form1";
            this.Text = "Calculadora de Matrices";
            this.GBOp.ResumeLayout(false);
            this.GBOp.PerformLayout();
            this.GBMatA.ResumeLayout(false);
            this.GBMatA.PerformLayout();
            this.GBMatB.ResumeLayout(false);
            this.GBMatB.PerformLayout();
            this.GBMatC.ResumeLayout(false);
            this.GBMatC.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private GroupBox GBOp;
        private RadioButton RBInv;
        private RadioButton RBMlt;
        private RadioButton RBSus;
        private RadioButton RBSum;
        private GroupBox GBMatA;
        private TextBox Ta33;
        private TextBox Ta23;
        private TextBox Ta32;
        private TextBox Ta31;
        private TextBox Ta13;
        private TextBox Ta22;
        private TextBox Ta21;
        private TextBox Ta12;
        private TextBox Ta11;
        private GroupBox GBMatB;
        private TextBox Tb33;
        private TextBox Tb23;
        private TextBox Tb32;
        private TextBox Tb31;
        private TextBox Tb13;
        private TextBox Tb22;
        private TextBox Tb21;
        private TextBox Tb12;
        private TextBox Tb11;
        private Label LBOpe;
        private GroupBox GBMatC;
        private TextBox Tc33;
        private TextBox Tc23;
        private TextBox Tc32;
        private TextBox Tc31;
        private TextBox Tc13;
        private TextBox Tc22;
        private TextBox Tc21;
        private TextBox Tc12;
        private TextBox Tc11;
        private Label label1;
        private Button BCalc;
        private Button BClear;
    }
}