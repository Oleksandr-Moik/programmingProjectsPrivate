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
        // глобальні змінни та структура
        struct info
        {
            public string prizv, imja, address, tel;
            public int compare(info a)
            {
                return string.Compare(this.prizv, a.prizv);
            }
            // if this > a => 1
            // if this == a => 0
            // if this < a => -1
        };

        info[] arrayOfData; // масив записів
        int n; // кількість записів

        public Form1()
        {
            InitializeComponent();
            n = 0;
            arrayOfData = new info[n];
            arrayToDataGrid();
        }

        // читання записів з файлу
        private void readFromFile(object sender, EventArgs e)
        {
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                if (openFileDialog1.FileName == null) return;
                BinaryReader br = new BinaryReader(new FileStream(openFileDialog1.FileName, FileMode.OpenOrCreate));
                n = 0;
                dataGridView1.Rows.Clear();
                while (br.BaseStream.Position != br.BaseStream.Length)
                {
                    dataGridView1.Rows.Add();
                    for (int i = 0; i < 4; ++i)
                        dataGridView1.Rows[n].Cells[i].Value = br.ReadString();
                    n++;
                }
                br.Close();
                dataGridToArray();
            }
        }

        // збереження записів у файл
        private void writeToFile(object sender, EventArgs e)
        {
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                if (saveFileDialog1.FileName == null) return;
                BinaryWriter bw = new BinaryWriter(new FileStream(saveFileDialog1.FileName, FileMode.Create));
                for (int i = 0; i < dataGridView1.RowCount - 1; ++i)
                {
                    bw.Write(Convert.ToString(dataGridView1.Rows[i].Cells[0].Value));
                    bw.Write(Convert.ToString(dataGridView1.Rows[i].Cells[1].Value));
                    bw.Write(Convert.ToString(dataGridView1.Rows[i].Cells[2].Value));
                    bw.Write(Convert.ToString(dataGridView1.Rows[i].Cells[3].Value));
                }
                bw.Close();
                dataGridToArray();
            }
        }

        // оновлення полів в таблиці
        private void arrayToDataGrid()
        {
            dataGridView1.Rows.Clear();
            if (n > 0)
            {
                dataGridView1.Rows.Add(n);
                for (int j = 0; j < n; ++j)
                {
                    dataGridView1.Rows[j].Cells[0].Value = arrayOfData[j].prizv;
                    dataGridView1.Rows[j].Cells[1].Value = arrayOfData[j].imja;
                    dataGridView1.Rows[j].Cells[2].Value = arrayOfData[j].address;
                    dataGridView1.Rows[j].Cells[3].Value = arrayOfData[j].tel;
                }
            }
        }

        // оновлення полів в масиві
        private void dataGridToArray()
        {
            this.n = dataGridView1.Rows.Count - 1;
            if (n > 1)
            {
                arrayOfData = new info[n];
                for (int i = 0; i < n; ++i)
                {
                    arrayOfData[i].prizv = Convert.ToString(dataGridView1.Rows[i].Cells[0].Value);
                    arrayOfData[i].imja = Convert.ToString(dataGridView1.Rows[i].Cells[1].Value);
                    arrayOfData[i].address = Convert.ToString(dataGridView1.Rows[i].Cells[2].Value);
                    arrayOfData[i].tel = Convert.ToString(dataGridView1.Rows[i].Cells[3].Value);
                }
            }
        }

        // swap
        private void swap(ref info a, ref info b)
        {
            info c = a;
            a = b;
            b = c;
        }

        // сортування бульбашкою (від А до Я)
        private void buble_sort(object sender, EventArgs e)
        {
            for (int i = 0; i < n; ++i)
            {
                bool b = true;
                for (int j = i + 1; j < n; ++j)
                    if (arrayOfData[i].compare(arrayOfData[j]) > 0)
                    {
                        swap(ref arrayOfData[i], ref arrayOfData[j]);
                        b = false;
                    }
                if (b) break;
            }
            arrayToDataGrid();
        }

        // шейкер-сортування
        private void shake_sort(object sender, EventArgs e)
        {
            bool b;
            do
            {
                b = false;
                for (int j = 0; j < n - 1; ++j)
                    if (arrayOfData[j].compare(arrayOfData[j + 1]) > 0)
                    {
                        swap(ref arrayOfData[j], ref arrayOfData[j - 1]);
                        b = true;
                    }
                for (int j = n - 1; j > 0; j--)
                    if (arrayOfData[j].compare(arrayOfData[j - 1]) < 0)
                        swap(ref arrayOfData[j], ref arrayOfData[j - 1]);
            } while (b);
            arrayToDataGrid();
        }

        // сортування мін елементами
        private void minElem_sort(object sender, EventArgs e)
        {
            int min;
            for (int i = 0; i < n; ++i)
            {
                min = i;
                for (int j = i + 1; j < n; ++j)
                    if (arrayOfData[j].compare(arrayOfData[min]) < 0)
                        min = j;
                if (min != i)
                    swap(ref arrayOfData[i], ref arrayOfData[min]);
            }
            arrayToDataGrid();
        }

        // сортування вставками (включеннями)
        private void inserts_sort(object sender, EventArgs e)
        {
            for (int i = 1; i < n; ++i)
                for (int j = i; j > 0 && (arrayOfData[j].compare(arrayOfData[j - 1]) < 0); --j)
                    swap(ref arrayOfData[j - 1], ref arrayOfData[j]);

            arrayToDataGrid();
        }

        // агоритм Шелла
        private void shell_sort(object sender, EventArgs e)
        {
            for (int step = n / 2; step >= 1; step /= 2)
                for (int i = step; i < n; ++i)
                    for (int j = i; j > 0 && (arrayOfData[j].compare(arrayOfData[j - 1]) < 0); j -= step)
                        swap(ref arrayOfData[j - 1], ref arrayOfData[j]);

            arrayToDataGrid();
        }

        // швидке сортування
        private void qsort_Click(object sender, EventArgs e)
        {
            qsort(0, n - 1);

            arrayToDataGrid();
        }

        private void qsort(int start, int end)
        {
            if (start >= end) return;

            int left = start, right = end;
            info middle = arrayOfData[(left + right) / 2];
            while (left <= right)
            {
                while (middle.compare(arrayOfData[left]) > 0)
                    ++left;
                while (middle.compare(arrayOfData[right]) < 0)
                    --right;

                if (left <= right)
                    swap(ref arrayOfData[left++], ref arrayOfData[right--]);
            }

            qsort(start, right);
            qsort(left, end);
        }


        // сортування купою
        private void heap_sort(object sender, EventArgs e)
        {
            // algorithms
            return;
        }
    }
}
