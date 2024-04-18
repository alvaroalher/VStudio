namespace MatCalc
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void BCalc_Click(object sender, EventArgs e)
        {
            //Declaracion de matrices A y C
            double[,] matA = new double[3,3];  // Matriz A
            double[,] matC = new double[3,3] { { 0, 0, 0}, { 0, 0, 0}, { 0, 0, 0} };  // Matriz C

            //Lectura de valores de matriz A
            double.TryParse(Ta11.Text, out matA[0, 0]);
            double.TryParse(Ta12.Text, out matA[0, 1]);
            double.TryParse(Ta13.Text, out matA[0, 2]);
            double.TryParse(Ta21.Text, out matA[1, 0]);
            double.TryParse(Ta22.Text, out matA[1, 1]);
            double.TryParse(Ta23.Text, out matA[1, 2]);
            double.TryParse(Ta31.Text, out matA[2, 0]);
            double.TryParse(Ta32.Text, out matA[2, 1]);
            double.TryParse(Ta33.Text, out matA[2, 2]);

            if(RBSum.Checked)
            {
                double[,] matB = new double[3,3]; // Matriz B

                double.TryParse(Tb11.Text, out matB[0, 0]);
                double.TryParse(Tb12.Text, out matB[0, 1]);
                double.TryParse(Tb13.Text, out matB[0, 2]);
                double.TryParse(Tb21.Text, out matB[1, 0]);
                double.TryParse(Tb22.Text, out matB[1, 1]);
                double.TryParse(Tb23.Text, out matB[1, 2]);
                double.TryParse(Tb31.Text, out matB[2, 0]);
                double.TryParse(Tb32.Text, out matB[2, 1]);
                double.TryParse(Tb33.Text, out matB[2, 2]);

                //Operacion de suma de matrices
                for(int j=0; j < 3; j++)
                {
                    for(int i=0; i < 3; i++)
                    {
                        matC[j, i] = matA[j, i] + matB[j, i];
                    }
                }

            }
            else if (RBSus.Checked)
            {
                double[,] matB = new double[3, 3]; // Matriz B

                double.TryParse(Tb11.Text, out matB[0, 0]);
                double.TryParse(Tb12.Text, out matB[0, 1]);
                double.TryParse(Tb13.Text, out matB[0, 2]);
                double.TryParse(Tb21.Text, out matB[1, 0]);
                double.TryParse(Tb22.Text, out matB[1, 1]);
                double.TryParse(Tb23.Text, out matB[1, 2]);
                double.TryParse(Tb31.Text, out matB[2, 0]);
                double.TryParse(Tb32.Text, out matB[2, 1]);
                double.TryParse(Tb33.Text, out matB[2, 2]);

                //Operacion de resta de matrices
                for (int j = 0; j < 3; j++)
                {
                    for (int i = 0; i < 3; i++)
                    {
                        matC[j, i] = matA[j, i] - matB[j, i];
                    }
                }
            }
            else if (RBMlt.Checked)
            {
                double[,] matB = new double[3, 3]; // Matriz B

                double.TryParse(Tb11.Text, out matB[0, 0]);
                double.TryParse(Tb12.Text, out matB[0, 1]);
                double.TryParse(Tb13.Text, out matB[0, 2]);
                double.TryParse(Tb21.Text, out matB[1, 0]);
                double.TryParse(Tb22.Text, out matB[1, 1]);
                double.TryParse(Tb23.Text, out matB[1, 2]);
                double.TryParse(Tb31.Text, out matB[2, 0]);
                double.TryParse(Tb32.Text, out matB[2, 1]);
                double.TryParse(Tb33.Text, out matB[2, 2]);

                //Operacion de multiplicacion de matrices
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        for (int k = 0; k < 3; k++)
                        {
                            matC[i, j] += matA[i, k] * matB[k, j];

                        }
                    }
                }
            }
            else if (RBInv.Checked)
            {
                double[,] adj = new double[3, 3]; // Matriz adjunta de A

                double detA = matA[0, 0] * matA[1, 1] * matA[2, 2]  //Determinante de A
                   + matA[0, 1] * matA[1, 2] * matA[2, 0]
                   + matA[0, 2] * matA[1, 0] * matA[2, 1]
                   - matA[0, 2] * matA[1, 1] * matA[2, 0]
                   - matA[1, 2] * matA[2, 1] * matA[0, 0]
                   - matA[2, 2] * matA[0, 1] * matA[1, 0];

                //Comprobar si matriz es invertible
                if (detA == 0)
                {
                    MessageBox.Show("La matriz no es invertible pues el determinante es igual a 0.", "ERROR", MessageBoxButtons.OK);
                }
                    else
                    {
                        //Calculo de matriz adjunta de A
                        adj[0, 0] = matA[1, 1] * matA[2, 2] - matA[1, 2] * matA[2, 1];
                        adj[0, 1] = matA[0, 2] * matA[2, 1] - matA[0, 1] * matA[2, 2];
                        adj[0, 2] = matA[0, 1] * matA[1, 2] - matA[0, 2] * matA[1, 1];
                        adj[1, 0] = matA[1, 2] * matA[2, 0] - matA[1, 0] * matA[2, 2];
                        adj[1, 1] = matA[0, 0] * matA[2, 2] - matA[0, 2] * matA[2, 0];
                        adj[1, 2] = matA[0, 2] * matA[1, 0] - matA[0, 0] * matA[1, 2];
                        adj[2, 0] = matA[1, 0] * matA[2, 1] - matA[1, 1] * matA[2, 0];
                        adj[2, 1] = matA[0, 1] * matA[2, 0] - matA[0, 0] * matA[2, 1];
                        adj[2, 2] = matA[0, 0] * matA[1, 1] - matA[0, 1] * matA[1, 0];


                        //Calculo de matriz inversa
                        for (int i = 0; i < 3; i++)
                        {
                            for (int j = 0; j < 3; j++)
                                {
                                    matC[i, j] = (1 / detA) * adj[i, j];
                                }
                            }
                    }
            }

            Tc11.Text = Convert.ToString(Math.Round(matC[0, 0], 4));
            Tc12.Text = Convert.ToString(Math.Round(matC[0, 1], 4));
            Tc13.Text = Convert.ToString(Math.Round(matC[0, 2], 4));
            Tc21.Text = Convert.ToString(Math.Round(matC[1, 0], 4));
            Tc22.Text = Convert.ToString(Math.Round(matC[1, 1], 4));
            Tc23.Text = Convert.ToString(Math.Round(matC[1, 2], 4));
            Tc31.Text = Convert.ToString(Math.Round(matC[2, 0], 4));
            Tc32.Text = Convert.ToString(Math.Round(matC[2, 1], 4));
            Tc33.Text = Convert.ToString(Math.Round(matC[2, 2], 4));

        }

        private void RBSum_CheckedChanged(object sender, EventArgs e)
        {
            if (RBSum.Checked)
            {
                GBMatB.Visible = true;
                LBOpe.Visible = true;
                LBOpe.Text = "+";
            }
        }

        private void RBSus_CheckedChanged(object sender, EventArgs e)
        {
            if (RBSus.Checked)
            {
                GBMatB.Visible = true;
                LBOpe.Visible = true;
                LBOpe.Text = "-";
            }
        }

        private void RBMlt_CheckedChanged(object sender, EventArgs e)
        {
            if (RBMlt.Checked)
            {
                GBMatB.Visible = true;
                LBOpe.Visible = true;
                LBOpe.Text = "*";
            }
        }

        private void RBInv_CheckedChanged(object sender, EventArgs e)
        {
            if (RBInv.Checked)
            {
                GBMatB.Visible = false;
                LBOpe.Visible = false;
            }
        }

        private void BClear_Click(object sender, EventArgs e)
        {
            Ta11.Clear();
            Ta12.Clear();
            Ta13.Clear();
            Ta21.Clear();
            Ta22.Clear();
            Ta23.Clear();
            Ta31.Clear();
            Ta32.Clear();
            Ta33.Clear();

            Tb11.Clear();
            Tb12.Clear();
            Tb13.Clear();
            Tb21.Clear();
            Tb22.Clear();
            Tb23.Clear();
            Tb31.Clear();
            Tb32.Clear();
            Tb33.Clear();

            Tc11.Clear();
            Tc12.Clear();
            Tc13.Clear();
            Tc21.Clear();
            Tc22.Clear();
            Tc23.Clear();
            Tc31.Clear();
            Tc32.Clear();
            Tc33.Clear();

        }
    }
}