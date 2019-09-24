namespace laba1
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.button1 = new System.Windows.Forms.Button();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.Column1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column4 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.saveFileDialog1 = new System.Windows.Forms.SaveFileDialog();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.button6 = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(607, 116);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(152, 38);
            this.button1.TabIndex = 0;
            this.button1.Text = "buble sorting";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.buble_sort);
            // 
            // dataGridView1
            // 
            this.dataGridView1.AllowUserToOrderColumns = true;
            this.dataGridView1.AllowUserToResizeColumns = false;
            this.dataGridView1.AllowUserToResizeRows = false;
            this.dataGridView1.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.DisableResizing;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Column1,
            this.Column2,
            this.Column3,
            this.Column4});
            this.dataGridView1.Location = new System.Drawing.Point(12, 12);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowHeadersVisible = false;
            this.dataGridView1.Size = new System.Drawing.Size(539, 426);
            this.dataGridView1.TabIndex = 1;
            // 
            // Column1
            // 
            this.Column1.FillWeight = 80F;
            this.Column1.HeaderText = "Прізвище";
            this.Column1.Name = "Column1";
            // 
            // Column2
            // 
            this.Column2.FillWeight = 80F;
            this.Column2.HeaderText = "Ім\'я";
            this.Column2.Name = "Column2";
            // 
            // Column3
            // 
            this.Column3.FillWeight = 121.8274F;
            this.Column3.HeaderText = "Адреса";
            this.Column3.Name = "Column3";
            // 
            // Column4
            // 
            this.Column4.FillWeight = 80F;
            this.Column4.HeaderText = "Телефон";
            this.Column4.Name = "Column4";
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.Filter = "Телефонний довідик (*.tlf)|*.tlf|Всі файли|*.*";
            // 
            // saveFileDialog1
            // 
            this.saveFileDialog1.DefaultExt = "tlf";
            this.saveFileDialog1.Filter = "Телефонний довідик (*.tlf)|*.tlf|Всі файли|*.*";
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(568, 37);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(106, 48);
            this.button2.TabIndex = 3;
            this.button2.Text = "read file";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.readFromFileIntoDataGrid);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(682, 37);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(106, 48);
            this.button3.TabIndex = 4;
            this.button3.Text = "save to file";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.saveInFileDataGridItems);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(607, 160);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(152, 38);
            this.button4.TabIndex = 0;
            this.button4.Text = "shake sorting";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.shake_sort);
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(607, 204);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(152, 38);
            this.button5.TabIndex = 0;
            this.button5.Text = "min elem sorting";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.minElem_sort);
            // 
            // button6
            // 
            this.button6.Location = new System.Drawing.Point(607, 248);
            this.button6.Name = "button6";
            this.button6.Size = new System.Drawing.Size(152, 38);
            this.button6.TabIndex = 0;
            this.button6.Text = "inserts sorting";
            this.button6.UseVisualStyleBackColor = true;
            this.button6.Click += new System.EventHandler(this.inserts_sort);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.button6);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button1);
            this.Name = "Form1";
            this.Text = "sorting";
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column2;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column3;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column4;
        private System.Windows.Forms.OpenFileDialog openFileDialog1;
        private System.Windows.Forms.SaveFileDialog saveFileDialog1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.Button button6;
    }
}

