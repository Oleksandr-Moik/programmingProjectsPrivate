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
            public int compare(info a)
            {
                return string.Compare(this.prizv, a.prizv);
            }
            // if this > a => 1
            // if this == a => 0
            // if this < a => -1
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
            for (int i = 0; i < n; i++)
            {
                bool b = true;
                for (int j = i + 1; j < n; j++)
                {
                    if (arrayOfData[i].compare(arrayOfData[j]) > 0)
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
                    if (arrayOfData[j].compare(arrayOfData[j+1]) > 0)
                    {
                        swap(ref arrayOfData[j], ref arrayOfData[j - 1]);
                        b = true;
                    }
                for (int j = n - 1; j > 0; j--)
                    if (arrayOfData[j].compare(arrayOfData[j - 1]) < 0)
                        swap(ref arrayOfData[j], ref arrayOfData[j - 1]);
            } while (b);
            updateDataGrid();
        }

        // сортування мін елементами
        private void minElem_sort(object sender, EventArgs e)
        {
            int min;
            for (int i = 0; i < n; i++)
            {
                min = i;
                for (int j = i + 1; j < n; j++)
                    if (arrayOfData[j].compare(arrayOfData[min]) < 0)
                        min = j;
                if (min != i)
                    swap(ref arrayOfData[i], ref arrayOfData[min]);
            }
            updateDataGrid();
        }

        // сортування вставками (включеннями)
        private void inserts_sort(object sender, EventArgs e)
        {
            for (int i = 1; i < n; ++i)
                for (int j = i; j > 0 && (arrayOfData[j].compare(arrayOfData[j - 1]) < 0); --j)
                    swap(ref arrayOfData[j - 1], ref arrayOfData[j]);

            updateDataGrid();
        }

        // агоритм Шелла
        private void shell_sort(object sender, EventArgs e)
        {
            for (int step = n / 2; step >= 1; step /= 2)
                for (int i = step; i < n; ++i)
                    for (int j = i; j > 0 && (arrayOfData[j].compare(arrayOfData[j - 1]) < 0); j-=step)
                        swap(ref arrayOfData[j - 1], ref arrayOfData[j]);

            updateDataGrid();
        }

        // швидке сортування
        private void qsort_Click(object sender, EventArgs e)
        {
            qsort(arrayOfData, 0, n - 1);

            updateDataGrid();
        }

        private void qsort(info []array, int start, int end)
        {
            if (start >= end)
            {
                return;
            }

            int left = start, right = end;
            info middle = array[(left + right) / 2];
            while (left <= right)
            {
                while (middle.compare(array[left]) > 0)
                    left++;
                while (middle.compare(array[right]) < 0)
                    right--;

                if (left <= right)
                    swap(ref array[left++], ref array[right--]);
            }

            qsort(array, start, right);
            qsort(array, left, end);
        }
    }
}
