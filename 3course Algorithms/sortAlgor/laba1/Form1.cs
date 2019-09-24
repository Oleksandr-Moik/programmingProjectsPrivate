using System;
using System.IO;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laba1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        // глобальні змінни та структура
        struct info
        {
            public string prizv, imja, address, tel;
        };

        info temp;
        info[] arrayOfData;// = new info[1];
        int n = 0; // кількість записів

        // читання записів з файлу
        private void readFromFileIntoDataGrid(object sender, EventArgs e)
        {
            dataGridView1.Rows.Clear();
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                if (openFileDialog1.FileName == null) return;
                BinaryReader br = new BinaryReader(new FileStream(openFileDialog1.FileName, FileMode.OpenOrCreate));
                n = 0;
                while (br.BaseStream.Position != br.BaseStream.Length)
                {
                    dataGridView1.Rows.Add();
                    for (int i = 0; i < 4; i++)
                        dataGridView1.Rows[n].Cells[i].Value = br.ReadString();
                    n++;
                }
                br.Close();
                updateArray();
            }
        }

        // збереження записів у файл
        private void saveInFileDataGridItems(object sender, EventArgs e)
        {
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                if (saveFileDialog1.FileName == null) return;
                BinaryWriter bw = new BinaryWriter(new FileStream(saveFileDialog1.FileName, FileMode.Create));
                for (int i = 0; i < dataGridView1.RowCount - 1; i++)
                {
                    bw.Write(Convert.ToString(dataGridView1.Rows[i].Cells[0].Value));
                    bw.Write(Convert.ToString(dataGridView1.Rows[i].Cells[1].Value));
                    bw.Write(Convert.ToString(dataGridView1.Rows[i].Cells[2].Value));
                    bw.Write(Convert.ToString(dataGridView1.Rows[i].Cells[3].Value));
                }
                bw.Close();
                updateArray();
            }
        }

        // оновлення полів в таблиці
        private void updateDataGrid()
        {
            dataGridView1.Rows.Clear();
            if (n > 0)
            {
                dataGridView1.Rows.Add(n);
                for (int j = 0; j < n; j++)
                {
                    dataGridView1.Rows[j].Cells[0].Value = arrayOfData[j].prizv;
                    dataGridView1.Rows[j].Cells[1].Value = arrayOfData[j].imja;
                    dataGridView1.Rows[j].Cells[2].Value = arrayOfData[j].address;
                    dataGridView1.Rows[j].Cells[3].Value = arrayOfData[j].tel;
                }
            }
        }

        // оновлення полів в масиві
        private void updateArray()
        {
            int rows = dataGridView1.Rows.Count;
            if (rows > 1)
            {
                n = rows - 1;
                arrayOfData = new info[n];
                for (int i = 0; i < n; i++)
                {
                    arrayOfData[i].prizv = Convert.ToString(dataGridView1.Rows[i].Cells[0].Value);
                    arrayOfData[i].imja = Convert.ToString(dataGridView1.Rows[i].Cells[1].Value);
                    arrayOfData[i].address = Convert.ToString(dataGridView1.Rows[i].Cells[2].Value);
                    arrayOfData[i].tel = Convert.ToString(dataGridView1.Rows[i].Cells[3].Value);
                }
            }
        }

        // сортування бульбашкою (від А до Я)
        private void buble_sort(object sender, EventArgs e)
        {
            for (int i = 0; i < n; i++)
            {
                bool b = true;
                for (int j = i + 1; j < n; j++)
                {
                    if (string.Compare(arrayOfData[i].prizv, arrayOfData[j].prizv) > 0)
                    {
                        temp = arrayOfData[i];
                        arrayOfData[i] = arrayOfData[j];
                        arrayOfData[j] = temp;
                        b = false;
                    }
                }
                if (b) break;
            }
            updateDataGrid();
        }

        // шейкер-сортування
        private void shake_sort(object sender, EventArgs e)
        {
            bool b;
            do
            {
                b = false;
                for (int j = 0; j < n - 1; j++)
                {
                    if (string.Compare(arrayOfData[j].prizv, arrayOfData[j + 1].prizv) > 0)
                    {
                        temp = arrayOfData[j + 1];
                        arrayOfData[j + 1] = arrayOfData[j];
                        arrayOfData[j] = temp;
                        b = true;
                    }
                }
                for (int j = n - 1; j > 0; j--)
                {
                    if (string.Compare(arrayOfData[j].prizv, arrayOfData[j - 1].prizv) < 0)
                    {
                        temp = arrayOfData[j];
                        arrayOfData[j] = arrayOfData[j - 1];
                        arrayOfData[j - 1] = temp;
                        b = true;
                    }
                }
            } while (b);
            updateDataGrid();
        }

        // сортування мін елементами
        private void minElem_sort(object sender, EventArgs e)
        {
            int min;
            for(int i = 0; i < n; i++)
            {
                min = i;
                for (int j=i+1;j<n;j++)
                {
                    if (String.Compare(arrayOfData[j].prizv, arrayOfData[min].prizv) < 0)
                    {
                        min = j;
                    }
                }
                if (min != i)
                {
                    temp = arrayOfData[i];
                    arrayOfData[i] = arrayOfData[min];
                    arrayOfData[min] = temp;
                }
            }
            updateDataGrid();
        }

        // сортування вставками (включеннями)
        private void inserts_sort(object sender, EventArgs e)
        {
            for (int i = 0; i < n; i++)
            {
                info el = arrayOfData[i];
                int j = i;
                while (j > 0 && (string.Compare(arrayOfData[j - 1].prizv, el.prizv) > 0))
                {
                    temp = arrayOfData[j];
                    arrayOfData[j] = arrayOfData[j - 1];
                    arrayOfData[j - 1] = temp;
                    j--;
                }
                arrayOfData[j] = el;
            }
            updateDataGrid();
        }
    }
}
