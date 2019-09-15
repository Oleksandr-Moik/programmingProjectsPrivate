using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace trykutn
{
    public partial class Form_calc : Form
    {
        const int height_listBox = 0;
        const int width_textBox = 106;
        int WindowHeight = 0;
      

        public Form_calc()
        {
            InitializeComponent();
            WindowHeight = this.Height;
           
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            checkBox_length.Visible = false;
            checkBox_length.Checked = false;
            groupBox_with_chek.Height = 88;

            label_x.Visible = false;
            label_y.Visible = false;
            label_length.Visible = true;

            textBox_x_a.Width = width_textBox;
            textBox_x_b.Width = width_textBox;
            textBox_x_c.Width = width_textBox;

            textBox_y_a.Visible = false;
            textBox_y_b.Visible = false;
            textBox_y_c.Visible = false;

            Cleaning();
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            checkBox_length.Visible = true;
            groupBox_with_chek.Height = 105;

            label_x.Visible = true;
            label_y.Visible = true;
            label_length.Visible = false;

            int width_textBox = textBox_y_a.Width;
            textBox_x_a.Width = width_textBox;
            textBox_x_b.Width = width_textBox;
            textBox_x_c.Width = width_textBox;

            textBox_y_a.Visible = true;
            textBox_y_b.Visible = true;
            textBox_y_c.Visible = true;

            Cleaning();
        }

        private void button_exit_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void button_clear_Click(object sender, EventArgs e)
        {
            Cleaning();
        }

        private void Cleaning()
        {
            textBox_x_a.Clear();
            textBox_x_b.Clear();
            textBox_x_c.Clear();

            textBox_x_a.ReadOnly = false;
            textBox_x_b.ReadOnly = false;
            textBox_x_c.ReadOnly = false;

            if (radioButton_by_xy.Checked)
            {
                textBox_y_a.Clear();
                textBox_y_b.Clear();
                textBox_y_c.Clear();

                textBox_y_a.ReadOnly = false;
                textBox_y_b.ReadOnly = false;
                textBox_y_c.ReadOnly = false;
            }
            if (text_results.Text.Length != 0)
            {
                button_clear.Visible = true;
                button_edit.Visible = false;
                text_results.Clear();
                text_results.Visible = false;
                label_result.Visible = false;
                text_results.Height = height_listBox;
                this.Height = WindowHeight;
            }
        }

        private void button_calculate_Click(object sender, EventArgs e)
        {
            TriangleClaculator(1);
        }

        private void button_edit_Click(object sender, EventArgs e)
        {
            textBox_x_a.ReadOnly = false;
            textBox_x_b.ReadOnly = false;
            textBox_x_c.ReadOnly = false;

            textBox_y_a.ReadOnly = false;
            textBox_y_b.ReadOnly = false;
            textBox_y_c.ReadOnly = false;

            button_edit.Visible = false;
            button_clear.Visible = true;
        }

        private void TriangleClaculator(int kk)
        {
            if (LengthInput() && ChekActivChekers())
            {
                double a = 0, b = 0, c = 0;

                try
                {
                    if (radioButton_by_xy.Checked)
                    {
                        double xa, xb, xc, ya, yb, yc;

                        xa = double.Parse(textBox_x_a.Text);
                        xb = double.Parse(textBox_x_b.Text);
                        xc = double.Parse(textBox_x_c.Text);

                        ya = double.Parse(textBox_y_a.Text);
                        yb = double.Parse(textBox_y_b.Text);
                        yc = double.Parse(textBox_y_c.Text);

                        a = leng(xc, yc, xb, yb);
                        b = leng(xc, yc, xa, ya);
                        c = leng(xa, ya, xb, yb);
                    }
                    else
                    {
                        a = double.Parse(textBox_x_a.Text);
                        b = double.Parse(textBox_x_b.Text);
                        c = double.Parse(textBox_x_c.Text);
                    }
                }
                catch (Exception R)
                {
                    MessageBox.Show("Введено не коректні дані");
                }

                if (ExistenceOfTriangle(a, b, c))
                {
                    Calculate_UI();

                    int h_k = 0;
                    if (checkBox_squre.Checked)
                    {
                        double sq, p;
                        p = (a + b + c) / 2;
                        sq = Math.Round(Math.Sqrt(p * (p - a) * (p - b) * (p - c)), 4);
                        text_results.Text = "Площа = " + sq.ToString() + '\n';
                        h_k+=17;
                    }
                    if (checkBox_perim.Checked)
                    {
                        double perim;
                        perim = Math.Round(a + b + c, 4);
                        text_results.Text += "Периметр = " + perim.ToString() + '\n';
                        h_k+=17;
                    }
                    if (checkBox_gradus.Checked)
                    {
                        double ab=0, bc=0, ac=0;

                        ab = Math.Round(Math.Acos((a * a + b * b - (c * c)) / (2 * a * b)) * 180 / Math.PI, 4);
                        ac = Math.Round(Math.Acos((a * a + c * c - (b * b)) / (2 * a * c)) * 180 / Math.PI, 4);
                        bc = Math.Round(Math.Acos((c * c + b * b - (a * a)) / (2 * c * b)) * 180 / Math.PI, 4);

                        text_results.Text += "Кут між AB:" + ab + '\n' +
                                            "Кут між BC:" + bc + '\n' +
                                            "Кут між AC:" + ac + '\n';
                        h_k += 44;
                    }
                    if (checkBox_type.Checked)
                    {
                        string type_triangle="";
                        if ((a * a + b * b < c * c) || (a * a + c * c < b * b) || (c * c + b * b < a * a)) type_triangle = "тупокутний";
                        else if((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a)) type_triangle = "прямокутний";
                        else if ((a * a + b * b > c * c) || (a * a + c * c > b * b) || (c * c + b * b > a * a)) type_triangle = "гострокутний";
                        text_results.Text += "Даний трикутник:\n " + type_triangle + '\n';
                        h_k += 30;
                    }
                    if (checkBox_length.Checked)
                    {
                        text_results.Text += "Сторона A:" + Math.Round(a, 4) + '\n' +
                                            "Сторона B:" + Math.Round(b, 4) + '\n' +
                                            "Сторона C:" + Math.Round(c, 4) + '\n';
                        h_k += 44;
                    }
                    this.Height += h_k;
                    text_results.Height += h_k;
                }
                else
                {
                    MessageBox.Show("Трикутник не існує");
                }
            }
            else
            {
                if (!LengthInput()&&(kk==1)) MessageBox.Show("Введені не всі дані !!!");
                if (!ChekActivChekers() && (kk == 1)) MessageBox.Show("Невиброно жодного шуканого !!!");
            }
        }

        private void Calculate_UI()
        {
            button_edit.Visible = true;
            button_clear.Visible = false;

            textBox_x_a.ReadOnly = true;
            textBox_x_b.ReadOnly = true;
            textBox_x_c.ReadOnly = true;

            textBox_y_a.ReadOnly = true;
            textBox_y_b.ReadOnly = true;
            textBox_y_c.ReadOnly = true;

            label_result.Visible = true;

            text_results.Clear();
            text_results.Height = height_listBox;
            text_results.Visible = true;

            this.Height = WindowHeight;
        }

        private bool ExistenceOfTriangle(double a, double b, double c)
        {
            if (a != 0 && b != 0 && c != 0)
            {
                if ((a + b > c) && (a + c > b) && (b + c > a))
                {
                    return true;
                }
            }
            return false;
        }

        private double leng(double xm, double ym, double xn, double yn)
        {
            double leng = 0;
            leng = Math.Sqrt(Math.Pow(xm - xn, 2) + Math.Pow(ym - yn, 2));
            return leng;
        }

        private bool LengthInput()
        {
            if ((textBox_x_a.Text.Length != 0) &&
                (textBox_x_b.Text.Length != 0) &&
                (textBox_x_c.Text.Length != 0))
            {
                if (radioButton_by_xy.Checked)
                {
                    if ((textBox_y_a.Text.Length != 0) &&
                        (textBox_y_b.Text.Length != 0) &&
                        (textBox_y_c.Text.Length != 0))
                    {
                        return true;
                    }
                    else return false;
                }
                return true;
            }
            else return false;
        }

        private bool ChekActivChekers()
        {
            if (checkBox_gradus.Checked ||
                checkBox_length.Checked ||
                checkBox_perim.Checked ||
                checkBox_squre.Checked ||
                checkBox_type.Checked)
                return true;
            return false;
        }

        private void checkBox_squre_CheckedChanged(object sender, EventArgs e)
        {
            TriangleClaculator(0);
        }

        private void checkBox_perim_CheckedChanged(object sender, EventArgs e)
        {
            TriangleClaculator(0);
        }

        private void checkBox_gradus_CheckedChanged(object sender, EventArgs e)
        {
            TriangleClaculator(0);
        }

        private void checkBox_type_CheckedChanged(object sender, EventArgs e)
        {
            TriangleClaculator(0);
        }

        private void checkBox_length_CheckedChanged(object sender, EventArgs e)
        {
            TriangleClaculator(0);
        }
    }
}
