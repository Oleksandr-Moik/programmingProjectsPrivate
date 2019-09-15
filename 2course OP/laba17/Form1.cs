using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laba17
{
    public partial class Конвертер : Form
    {
        private bool r1b1, r1b2, r1b3, r2b1, r2b2, r2b3;
       
        public Конвертер()
        {
            InitializeComponent();
            radioCheked();
            parse();
        }

        private void CloseProgamm_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void ClearTextValue_Click(object sender, EventArgs e)
        {
            text_value_from.Clear();
            text_value_into.Clear();
        }

        private void btn_switch_Click(object sender, EventArgs e)
        {
            radioCheked();

            radio_from_UAH.Checked = r2b1;
            radio_from_USD.Checked = r2b2;
            radio_from_EUR.Checked = r2b3;

            radio_into_UAH.Checked = r1b1;
            radio_into_USD.Checked = r1b2;
            radio_into_EUR.Checked = r1b3;

            parse();
        }

        private void Btn_parse_Click(object sender, EventArgs e)
        {
            parse();
        }

        private void RadioChekedSwitch1_Click(object sender, EventArgs e)
        {
            if (text_value_from.Text.Length == 0)
            {
                text_value_from.Text = "100";
            }
            parse();
        }

        private void RadioChekedSwitch2_Click(object sender, EventArgs e)
        {
            if (text_value_from.Text.Length == 0)
            {
                text_value_from.Text = "100";
            }
            parse();
        }

        private void parse()
        {
            const double UahToUsd = 0.038, EurToUsd = 1.12;
            double d_from;
            // 1 грн = 0.038 дол
            // 1 евро = 1.12 дол
            double k = 1, suma;
            if (text_value_from.Text.Length != 0)
            {
                try
                {
                    d_from = double.Parse(text_value_from.Text);
                }
                catch (Exception p)
                {
                    MessageBox.Show("Введено символи, які не є числами. Повторіть введення", "Некоректні дані");
                    return;
                }
                radioCheked();
                if (r1b1)
                {
                    if (r2b2)
                    {
                        k = UahToUsd;
                    }
                    else if (r2b3)
                    {
                        k = UahToUsd * EurToUsd;
                    }
                }
                else if (r1b2)
                {
                    if (r2b1)
                    {
                        k = 1 / UahToUsd;
                    }
                    else if (r2b3)
                    {
                        k = 1 / EurToUsd;
                    }
                }
                else if (r1b3)
                {
                    if (r2b1)
                    {
                        k = 1 / (UahToUsd * EurToUsd);
                    }
                    else if (r2b2)
                    {
                        k = EurToUsd;
                    }
                }
                suma = d_from * k;
                text_value_into.Text = suma.ToString();
            }
            else
            {
                MessageBox.Show("Введіть валюту для переведення", "Пусте поле");
            }
        }

        private void radioCheked()
        {
            r1b1 = radio_from_UAH.Checked;
            r1b2 = radio_from_USD.Checked;
            r1b3 = radio_from_EUR.Checked;

            r2b1 = radio_into_UAH.Checked;
            r2b2 = radio_into_USD.Checked;
            r2b3 = radio_into_EUR.Checked;
        }
    }
}
