namespace CalcComplejos
{
    public partial class Form1 : Form
    {
        double a, c; //Partes reales
        double b, d; //Partes imaginarias
        int op = 0; //Operacion
        

        private void BSuma_Click(object sender, EventArgs e)
        {
            //Operacion de suma
            //Separacion de String tomando caracteres de control
            string[] sub;

            sub = Tout.Text.Split('+', 'i', ' ');

            //Almacenamiento de variables
            double.TryParse(sub[0], out a);
            double.TryParse(sub[3], out b);
            
            //Indicador de operacion
            op = 1;

            //Limpieza de caja de texto
            Tout.Text = "";

       
        }

        
        private void B8_Click(object sender, EventArgs e)
        {
            Tout.Text += "8";
        }

        private void B9_Click(object sender, EventArgs e)
        {
            Tout.Text += "9";
        }

        private void B4_Click(object sender, EventArgs e)
        {
            Tout.Text += "4";
        }

        private void B5_Click(object sender, EventArgs e)
        {
            Tout.Text += "5";
        }

        private void B6_Click(object sender, EventArgs e)
        {
            Tout.Text += "6";
        }

        private void B1_Click(object sender, EventArgs e)
        {
            Tout.Text += "1";
        }

        private void B2_Click(object sender, EventArgs e)
        {
            Tout.Text += "2";
        }

        private void B3_Click(object sender, EventArgs e)
        {
            Tout.Text += "3";
        }

       
        private void B0_Click(object sender, EventArgs e)
        {
            Tout.Text += "0";
        }

        private void BPunto_Click(object sender, EventArgs e)
        {
            Tout.Text += ".";
        }

        private void BCl_Click(object sender, EventArgs e)
        {
            Tout.Text = "";
            
        }

        private void BClAll_Click(object sender, EventArgs e)
        {
            Tout.Text = "";
            a = 0;
            b = 0;
            c = 0;
            d = 0;
            op = 0;
        }

        private void BMasIm_Click(object sender, EventArgs e)
        {
            Tout.Text += " + ";
        
        }

        private void BMenosIm_Click(object sender, EventArgs e)
        {
            Tout.Text += "-";
        }

        private void Bi_Click(object sender, EventArgs e)
        {
            Tout.Text += " i";
        }

        private void BResta_Click(object sender, EventArgs e)
        {
            //Operacion de resta

            string[] sub;

          
            sub = Tout.Text.Split('+', 'i', ' ');

            double.TryParse(sub[0], out a);
            double.TryParse(sub[3], out b);
            
            //Indicador de operacion
            op = 2;

            //Limpieza de caja de texto
            Tout.Text = "";

        }

        private void BProd_Click(object sender, EventArgs e)
        {
            //Operacion de multiplicacion

            string[] sub;
                       
            sub = Tout.Text.Split('+', 'i', ' ');
           
            double.TryParse(sub[0], out a);
            double.TryParse(sub[3], out b);



            //Indicador de operacion
            op = 3;

            //Limpieza de caja de texto
            Tout.Text = "";

        }

        private void BDiv_Click(object sender, EventArgs e)
        {
            //Operacion de division
            string[] sub;
                       
            sub = Tout.Text.Split('+', 'i', ' ');
            
            double.TryParse(sub[0], out a);
            double.TryParse(sub[3], out b);

            //Indicador de operacion
            op = 4;

            //Limpieza de caja de texto
            Tout.Text = "";

            
        }

        private void BIgual_Click(object sender, EventArgs e)
        {
            //Calculo de resultado

            string[] sub;
                        
            sub = Tout.Text.Split('+', 'i', ' ');

            double.TryParse(sub[0], out c);
            double.TryParse(sub[3], out d);
            

            //Declaracion de variables auxiliares
            double r1 = 0;
            double r2 = 0;
            bool cero = false;

            switch (op)
            {
                case 1:   //Suma
                    r1 = a + c;
                    r2 = b + d;

                    op = 0;
                    break;

                case 2:   //Resta
                    r1 = a - c;
                    r2 = b - d;

                    op = 0;
                    break;

                case 3:   //Multiplicacion
                    r1 = a * c - b * d;
                    r2 = a * d + b * c;

                    op = 0;
                    break;

                case 4:   //Division
                    double aux = c * c + d * d;
                    if (aux != 0) //Comprobar si dividendo es diferente de cero
                    {
                        r1 = (a * c + b * d) / (c * c + d * d);
                        r2 = (b * c - a * d) / (c * c + d * d);
                        op = 0;
                    }
                    else
                    {
                        cero = true;
                        MessageBox.Show("Esta operación no es válida, intente de nuevo con un divisor distinto de cero", "ERROR", MessageBoxButtons.OK);
                        Tout.Text = "";
                    }                    
                    break;
            }

            if (!cero)
            {
                Tout.Text = Convert.ToString(Math.Round(r1, 5)) + " + " + Convert.ToString(Math.Round(r2, 5)) + " i";
            }
        }

        
        private void B7_Click(object sender, EventArgs e)
        {
            Tout.Text += "7";
        }

        

        public Form1()
        {
            InitializeComponent();
        }
    }
}