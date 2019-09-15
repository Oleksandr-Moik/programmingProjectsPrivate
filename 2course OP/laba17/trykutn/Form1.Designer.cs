namespace trykutn
{
    partial class Form_calc
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.button_exit = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.textBox_x_a = new System.Windows.Forms.TextBox();
            this.textBox_x_b = new System.Windows.Forms.TextBox();
            this.textBox_x_c = new System.Windows.Forms.TextBox();
            this.label_result = new System.Windows.Forms.Label();
            this.button_calculate = new System.Windows.Forms.Button();
            this.button_clear = new System.Windows.Forms.Button();
            this.label6 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.textBox_y_a = new System.Windows.Forms.TextBox();
            this.textBox_y_b = new System.Windows.Forms.TextBox();
            this.textBox_y_c = new System.Windows.Forms.TextBox();
            this.label_length = new System.Windows.Forms.Label();
            this.label_y = new System.Windows.Forms.Label();
            this.radioButton_by_length = new System.Windows.Forms.RadioButton();
            this.radioButton_by_xy = new System.Windows.Forms.RadioButton();
            this.label_x = new System.Windows.Forms.Label();
            this.groupBox_with_chek = new System.Windows.Forms.GroupBox();
            this.checkBox_length = new System.Windows.Forms.CheckBox();
            this.checkBox_type = new System.Windows.Forms.CheckBox();
            this.checkBox_gradus = new System.Windows.Forms.CheckBox();
            this.checkBox_perim = new System.Windows.Forms.CheckBox();
            this.checkBox_squre = new System.Windows.Forms.CheckBox();
            this.text_results = new System.Windows.Forms.RichTextBox();
            this.button_edit = new System.Windows.Forms.Button();
            this.groupBox_with_chek.SuspendLayout();
            this.SuspendLayout();
            // 
            // button_exit
            // 
            this.button_exit.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_exit.Location = new System.Drawing.Point(347, 150);
            this.button_exit.Name = "button_exit";
            this.button_exit.Size = new System.Drawing.Size(118, 37);
            this.button_exit.TabIndex = 0;
            this.button_exit.Text = "Вихід";
            this.button_exit.UseVisualStyleBackColor = true;
            this.button_exit.Click += new System.EventHandler(this.button_exit_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(10, 71);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(72, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "Сторона А:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label2.Location = new System.Drawing.Point(10, 95);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(72, 13);
            this.label2.TabIndex = 2;
            this.label2.Text = "Сторона В:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label3.Location = new System.Drawing.Point(10, 119);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(72, 13);
            this.label3.TabIndex = 3;
            this.label3.Text = "Сторона С:";
            // 
            // textBox_x_a
            // 
            this.textBox_x_a.Location = new System.Drawing.Point(84, 69);
            this.textBox_x_a.MaxLength = 50;
            this.textBox_x_a.Name = "textBox_x_a";
            this.textBox_x_a.Size = new System.Drawing.Size(106, 20);
            this.textBox_x_a.TabIndex = 4;
            this.textBox_x_a.Text = "5";
            // 
            // textBox_x_b
            // 
            this.textBox_x_b.Location = new System.Drawing.Point(84, 93);
            this.textBox_x_b.MaxLength = 50;
            this.textBox_x_b.Name = "textBox_x_b";
            this.textBox_x_b.Size = new System.Drawing.Size(106, 20);
            this.textBox_x_b.TabIndex = 4;
            this.textBox_x_b.Text = "3";
            // 
            // textBox_x_c
            // 
            this.textBox_x_c.Location = new System.Drawing.Point(84, 117);
            this.textBox_x_c.MaxLength = 50;
            this.textBox_x_c.Name = "textBox_x_c";
            this.textBox_x_c.Size = new System.Drawing.Size(106, 20);
            this.textBox_x_c.TabIndex = 4;
            this.textBox_x_c.Text = "4";
            // 
            // label_result
            // 
            this.label_result.AutoSize = true;
            this.label_result.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_result.Location = new System.Drawing.Point(210, 150);
            this.label_result.Name = "label_result";
            this.label_result.Size = new System.Drawing.Size(72, 13);
            this.label_result.TabIndex = 7;
            this.label_result.Text = "Результат:";
            this.label_result.Visible = false;
            // 
            // button_calculate
            // 
            this.button_calculate.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_calculate.Location = new System.Drawing.Point(105, 150);
            this.button_calculate.Name = "button_calculate";
            this.button_calculate.Size = new System.Drawing.Size(86, 37);
            this.button_calculate.TabIndex = 9;
            this.button_calculate.Text = "Порахувати";
            this.button_calculate.UseVisualStyleBackColor = true;
            this.button_calculate.Click += new System.EventHandler(this.button_calculate_Click);
            // 
            // button_clear
            // 
            this.button_clear.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_clear.Location = new System.Drawing.Point(15, 150);
            this.button_clear.Name = "button_clear";
            this.button_clear.Size = new System.Drawing.Size(86, 37);
            this.button_clear.TabIndex = 10;
            this.button_clear.Text = "Очистити";
            this.button_clear.UseVisualStyleBackColor = true;
            this.button_clear.Click += new System.EventHandler(this.button_clear_Click);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label6.Location = new System.Drawing.Point(176, 9);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(125, 25);
            this.label6.TabIndex = 11;
            this.label6.Text = "Трикутник";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label4.Location = new System.Drawing.Point(12, 34);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(179, 15);
            this.label4.TabIndex = 1;
            this.label4.Text = "Введіть дані про сторони";
            // 
            // label7
            // 
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label7.Location = new System.Drawing.Point(344, 37);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(131, 32);
            this.label7.TabIndex = 1;
            this.label7.Text = "Спосіб задання сторін трикутника";
            this.label7.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // textBox_y_a
            // 
            this.textBox_y_a.Location = new System.Drawing.Point(140, 69);
            this.textBox_y_a.MaxLength = 50;
            this.textBox_y_a.Name = "textBox_y_a";
            this.textBox_y_a.Size = new System.Drawing.Size(50, 20);
            this.textBox_y_a.TabIndex = 4;
            this.textBox_y_a.Visible = false;
            // 
            // textBox_y_b
            // 
            this.textBox_y_b.Location = new System.Drawing.Point(140, 93);
            this.textBox_y_b.MaxLength = 50;
            this.textBox_y_b.Name = "textBox_y_b";
            this.textBox_y_b.Size = new System.Drawing.Size(50, 20);
            this.textBox_y_b.TabIndex = 4;
            this.textBox_y_b.Visible = false;
            // 
            // textBox_y_c
            // 
            this.textBox_y_c.Location = new System.Drawing.Point(140, 117);
            this.textBox_y_c.MaxLength = 50;
            this.textBox_y_c.Name = "textBox_y_c";
            this.textBox_y_c.Size = new System.Drawing.Size(50, 20);
            this.textBox_y_c.TabIndex = 4;
            this.textBox_y_c.Visible = false;
            // 
            // label_length
            // 
            this.label_length.AutoSize = true;
            this.label_length.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_length.Location = new System.Drawing.Point(101, 51);
            this.label_length.Name = "label_length";
            this.label_length.Size = new System.Drawing.Size(72, 18);
            this.label_length.TabIndex = 1;
            this.label_length.Text = "Довжина";
            // 
            // label_y
            // 
            this.label_y.AutoSize = true;
            this.label_y.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_y.Location = new System.Drawing.Point(158, 51);
            this.label_y.Name = "label_y";
            this.label_y.Size = new System.Drawing.Size(15, 18);
            this.label_y.TabIndex = 1;
            this.label_y.Text = "у";
            this.label_y.Visible = false;
            // 
            // radioButton_by_length
            // 
            this.radioButton_by_length.AutoSize = true;
            this.radioButton_by_length.Checked = true;
            this.radioButton_by_length.Location = new System.Drawing.Point(347, 71);
            this.radioButton_by_length.Name = "radioButton_by_length";
            this.radioButton_by_length.Size = new System.Drawing.Size(83, 17);
            this.radioButton_by_length.TabIndex = 12;
            this.radioButton_by_length.TabStop = true;
            this.radioButton_by_length.Text = "довжинами";
            this.radioButton_by_length.UseVisualStyleBackColor = true;
            this.radioButton_by_length.CheckedChanged += new System.EventHandler(this.radioButton1_CheckedChanged);
            // 
            // radioButton_by_xy
            // 
            this.radioButton_by_xy.AutoSize = true;
            this.radioButton_by_xy.Location = new System.Drawing.Point(347, 91);
            this.radioButton_by_xy.Name = "radioButton_by_xy";
            this.radioButton_by_xy.Size = new System.Drawing.Size(98, 17);
            this.radioButton_by_xy.TabIndex = 13;
            this.radioButton_by_xy.Text = "координатами";
            this.radioButton_by_xy.UseVisualStyleBackColor = true;
            this.radioButton_by_xy.CheckedChanged += new System.EventHandler(this.radioButton2_CheckedChanged);
            // 
            // label_x
            // 
            this.label_x.AutoSize = true;
            this.label_x.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label_x.Location = new System.Drawing.Point(101, 51);
            this.label_x.Name = "label_x";
            this.label_x.Size = new System.Drawing.Size(15, 18);
            this.label_x.TabIndex = 1;
            this.label_x.Text = "х";
            this.label_x.Visible = false;
            // 
            // groupBox_with_chek
            // 
            this.groupBox_with_chek.Controls.Add(this.checkBox_length);
            this.groupBox_with_chek.Controls.Add(this.checkBox_type);
            this.groupBox_with_chek.Controls.Add(this.checkBox_gradus);
            this.groupBox_with_chek.Controls.Add(this.checkBox_perim);
            this.groupBox_with_chek.Controls.Add(this.checkBox_squre);
            this.groupBox_with_chek.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.groupBox_with_chek.Location = new System.Drawing.Point(200, 37);
            this.groupBox_with_chek.Name = "groupBox_with_chek";
            this.groupBox_with_chek.Size = new System.Drawing.Size(138, 87);
            this.groupBox_with_chek.TabIndex = 14;
            this.groupBox_with_chek.TabStop = false;
            this.groupBox_with_chek.Text = "Обрахувати";
            // 
            // checkBox_length
            // 
            this.checkBox_length.AutoSize = true;
            this.checkBox_length.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.checkBox_length.Location = new System.Drawing.Point(13, 86);
            this.checkBox_length.Name = "checkBox_length";
            this.checkBox_length.Size = new System.Drawing.Size(107, 17);
            this.checkBox_length.TabIndex = 4;
            this.checkBox_length.Text = "Довжини сторін";
            this.checkBox_length.UseVisualStyleBackColor = true;
            this.checkBox_length.Visible = false;
            this.checkBox_length.CheckedChanged += new System.EventHandler(this.checkBox_length_CheckedChanged);
            // 
            // checkBox_type
            // 
            this.checkBox_type.AutoSize = true;
            this.checkBox_type.Checked = true;
            this.checkBox_type.CheckState = System.Windows.Forms.CheckState.Checked;
            this.checkBox_type.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.checkBox_type.Location = new System.Drawing.Point(13, 69);
            this.checkBox_type.Name = "checkBox_type";
            this.checkBox_type.Size = new System.Drawing.Size(105, 17);
            this.checkBox_type.TabIndex = 3;
            this.checkBox_type.Text = "Тип трикутника";
            this.checkBox_type.UseVisualStyleBackColor = true;
            this.checkBox_type.CheckedChanged += new System.EventHandler(this.checkBox_type_CheckedChanged);
            // 
            // checkBox_gradus
            // 
            this.checkBox_gradus.AutoSize = true;
            this.checkBox_gradus.Checked = true;
            this.checkBox_gradus.CheckState = System.Windows.Forms.CheckState.Checked;
            this.checkBox_gradus.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.checkBox_gradus.Location = new System.Drawing.Point(13, 52);
            this.checkBox_gradus.Name = "checkBox_gradus";
            this.checkBox_gradus.Size = new System.Drawing.Size(120, 17);
            this.checkBox_gradus.TabIndex = 2;
            this.checkBox_gradus.Text = "Градусні міру кутів";
            this.checkBox_gradus.UseVisualStyleBackColor = true;
            this.checkBox_gradus.CheckedChanged += new System.EventHandler(this.checkBox_gradus_CheckedChanged);
            // 
            // checkBox_perim
            // 
            this.checkBox_perim.AutoSize = true;
            this.checkBox_perim.Checked = true;
            this.checkBox_perim.CheckState = System.Windows.Forms.CheckState.Checked;
            this.checkBox_perim.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.checkBox_perim.Location = new System.Drawing.Point(13, 35);
            this.checkBox_perim.Name = "checkBox_perim";
            this.checkBox_perim.Size = new System.Drawing.Size(77, 17);
            this.checkBox_perim.TabIndex = 1;
            this.checkBox_perim.Text = "Периметр";
            this.checkBox_perim.UseVisualStyleBackColor = true;
            this.checkBox_perim.CheckedChanged += new System.EventHandler(this.checkBox_perim_CheckedChanged);
            // 
            // checkBox_squre
            // 
            this.checkBox_squre.AutoSize = true;
            this.checkBox_squre.Checked = true;
            this.checkBox_squre.CheckState = System.Windows.Forms.CheckState.Checked;
            this.checkBox_squre.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.checkBox_squre.Location = new System.Drawing.Point(13, 18);
            this.checkBox_squre.Name = "checkBox_squre";
            this.checkBox_squre.Size = new System.Drawing.Size(60, 17);
            this.checkBox_squre.TabIndex = 0;
            this.checkBox_squre.Text = "Площу";
            this.checkBox_squre.UseVisualStyleBackColor = true;
            this.checkBox_squre.CheckedChanged += new System.EventHandler(this.checkBox_squre_CheckedChanged);
            // 
            // text_results
            // 
            this.text_results.Font = new System.Drawing.Font("Microsoft Sans Serif", 8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.text_results.Location = new System.Drawing.Point(213, 166);
            this.text_results.Name = "text_results";
            this.text_results.ReadOnly = true;
            this.text_results.ScrollBars = System.Windows.Forms.RichTextBoxScrollBars.None;
            this.text_results.Size = new System.Drawing.Size(118, 0);
            this.text_results.TabIndex = 16;
            this.text_results.Text = "";
            this.text_results.Visible = false;
            // 
            // button_edit
            // 
            this.button_edit.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_edit.Location = new System.Drawing.Point(15, 151);
            this.button_edit.Name = "button_edit";
            this.button_edit.Size = new System.Drawing.Size(86, 37);
            this.button_edit.TabIndex = 9;
            this.button_edit.Text = "Редагувати дані";
            this.button_edit.UseVisualStyleBackColor = true;
            this.button_edit.Visible = false;
            this.button_edit.Click += new System.EventHandler(this.button_edit_Click);
            // 
            // Form_calc
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(478, 198);
            this.Controls.Add(this.text_results);
            this.Controls.Add(this.groupBox_with_chek);
            this.Controls.Add(this.radioButton_by_xy);
            this.Controls.Add(this.radioButton_by_length);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.button_clear);
            this.Controls.Add(this.button_edit);
            this.Controls.Add(this.button_calculate);
            this.Controls.Add(this.label_result);
            this.Controls.Add(this.textBox_y_c);
            this.Controls.Add(this.textBox_x_c);
            this.Controls.Add(this.textBox_y_b);
            this.Controls.Add(this.textBox_y_a);
            this.Controls.Add(this.textBox_x_b);
            this.Controls.Add(this.textBox_x_a);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label_x);
            this.Controls.Add(this.label_y);
            this.Controls.Add(this.label_length);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.button_exit);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.Name = "Form_calc";
            this.Text = "Трикутник кулькулятор";
            this.groupBox_with_chek.ResumeLayout(false);
            this.groupBox_with_chek.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button_exit;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textBox_x_a;
        private System.Windows.Forms.TextBox textBox_x_b;
        private System.Windows.Forms.TextBox textBox_x_c;
        private System.Windows.Forms.Label label_result;
        private System.Windows.Forms.Button button_calculate;
        private System.Windows.Forms.Button button_clear;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox textBox_y_a;
        private System.Windows.Forms.TextBox textBox_y_b;
        private System.Windows.Forms.TextBox textBox_y_c;
        private System.Windows.Forms.Label label_length;
        private System.Windows.Forms.Label label_y;
        private System.Windows.Forms.RadioButton radioButton_by_length;
        private System.Windows.Forms.RadioButton radioButton_by_xy;
        private System.Windows.Forms.Label label_x;
        private System.Windows.Forms.GroupBox groupBox_with_chek;
        private System.Windows.Forms.CheckBox checkBox_gradus;
        private System.Windows.Forms.CheckBox checkBox_perim;
        private System.Windows.Forms.CheckBox checkBox_squre;
        private System.Windows.Forms.CheckBox checkBox_length;
        private System.Windows.Forms.CheckBox checkBox_type;
        private System.Windows.Forms.RichTextBox text_results;
        private System.Windows.Forms.Button button_edit;
    }
}

