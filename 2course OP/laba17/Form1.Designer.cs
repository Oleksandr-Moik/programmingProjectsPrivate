namespace laba17
{
    partial class Конвертер
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
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.менюToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.очиститиПоляToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.вийтиToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.label1 = new System.Windows.Forms.Label();
            this.text_value_from = new System.Windows.Forms.TextBox();
            this.text_value_into = new System.Windows.Forms.TextBox();
            this.btn_parse = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.radio_from_UAH = new System.Windows.Forms.RadioButton();
            this.radio_from_USD = new System.Windows.Forms.RadioButton();
            this.radio_from_EUR = new System.Windows.Forms.RadioButton();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.radio_into_UAH = new System.Windows.Forms.RadioButton();
            this.radio_into_USD = new System.Windows.Forms.RadioButton();
            this.radio_into_EUR = new System.Windows.Forms.RadioButton();
            this.btn_switch = new System.Windows.Forms.Button();
            this.btn_clear = new System.Windows.Forms.Button();
            this.menuStrip1.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.менюToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(389, 24);
            this.menuStrip1.TabIndex = 1;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // менюToolStripMenuItem
            // 
            this.менюToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.очиститиПоляToolStripMenuItem,
            this.вийтиToolStripMenuItem});
            this.менюToolStripMenuItem.Name = "менюToolStripMenuItem";
            this.менюToolStripMenuItem.Size = new System.Drawing.Size(53, 20);
            this.менюToolStripMenuItem.Text = "Меню";
            // 
            // очиститиПоляToolStripMenuItem
            // 
            this.очиститиПоляToolStripMenuItem.Name = "очиститиПоляToolStripMenuItem";
            this.очиститиПоляToolStripMenuItem.Size = new System.Drawing.Size(157, 22);
            this.очиститиПоляToolStripMenuItem.Text = "Очистити поля";
            this.очиститиПоляToolStripMenuItem.Click += new System.EventHandler(this.ClearTextValue_Click);
            // 
            // вийтиToolStripMenuItem
            // 
            this.вийтиToolStripMenuItem.Name = "вийтиToolStripMenuItem";
            this.вийтиToolStripMenuItem.Size = new System.Drawing.Size(157, 22);
            this.вийтиToolStripMenuItem.Text = "Вийти";
            this.вийтиToolStripMenuItem.Click += new System.EventHandler(this.CloseProgamm_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(102, 24);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(188, 39);
            this.label1.TabIndex = 2;
            this.label1.Text = "Конвертер";
            // 
            // text_value_from
            // 
            this.text_value_from.Location = new System.Drawing.Point(21, 64);
            this.text_value_from.MaxLength = 18;
            this.text_value_from.Name = "text_value_from";
            this.text_value_from.Size = new System.Drawing.Size(120, 20);
            this.text_value_from.TabIndex = 3;
            this.text_value_from.Text = "100";
            // 
            // text_value_into
            // 
            this.text_value_into.Location = new System.Drawing.Point(251, 64);
            this.text_value_into.MaxLength = 18;
            this.text_value_into.Name = "text_value_into";
            this.text_value_into.ReadOnly = true;
            this.text_value_into.ShortcutsEnabled = false;
            this.text_value_into.Size = new System.Drawing.Size(120, 20);
            this.text_value_into.TabIndex = 4;
            this.text_value_into.TabStop = false;
            this.text_value_into.WordWrap = false;
            // 
            // btn_parse
            // 
            this.btn_parse.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.btn_parse.Location = new System.Drawing.Point(158, 64);
            this.btn_parse.Name = "btn_parse";
            this.btn_parse.Size = new System.Drawing.Size(75, 23);
            this.btn_parse.TabIndex = 5;
            this.btn_parse.Text = "перевести";
            this.btn_parse.UseVisualStyleBackColor = true;
            this.btn_parse.Click += new System.EventHandler(this.Btn_parse_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.radio_from_UAH);
            this.groupBox1.Controls.Add(this.radio_from_USD);
            this.groupBox1.Controls.Add(this.radio_from_EUR);
            this.groupBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.groupBox1.Location = new System.Drawing.Point(21, 102);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(117, 83);
            this.groupBox1.TabIndex = 7;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "З валюти:";
            // 
            // radio_from_UAH
            // 
            this.radio_from_UAH.AutoSize = true;
            this.radio_from_UAH.Checked = true;
            this.radio_from_UAH.Location = new System.Drawing.Point(15, 15);
            this.radio_from_UAH.Name = "radio_from_UAH";
            this.radio_from_UAH.Size = new System.Drawing.Size(82, 17);
            this.radio_from_UAH.TabIndex = 3;
            this.radio_from_UAH.TabStop = true;
            this.radio_from_UAH.Text = "UAH гривні";
            this.radio_from_UAH.UseVisualStyleBackColor = true;
            this.radio_from_UAH.Click += new System.EventHandler(this.RadioChekedSwitch1_Click);
            // 
            // radio_from_USD
            // 
            this.radio_from_USD.AutoSize = true;
            this.radio_from_USD.Location = new System.Drawing.Point(15, 38);
            this.radio_from_USD.Name = "radio_from_USD";
            this.radio_from_USD.Size = new System.Drawing.Size(87, 17);
            this.radio_from_USD.TabIndex = 4;
            this.radio_from_USD.Text = "USD долари";
            this.radio_from_USD.UseVisualStyleBackColor = true;
            this.radio_from_USD.Click += new System.EventHandler(this.RadioChekedSwitch1_Click);
            // 
            // radio_from_EUR
            // 
            this.radio_from_EUR.AutoSize = true;
            this.radio_from_EUR.Location = new System.Drawing.Point(15, 61);
            this.radio_from_EUR.Name = "radio_from_EUR";
            this.radio_from_EUR.Size = new System.Drawing.Size(75, 17);
            this.radio_from_EUR.TabIndex = 5;
            this.radio_from_EUR.Text = "EUR євро";
            this.radio_from_EUR.UseVisualStyleBackColor = true;
            this.radio_from_EUR.Click += new System.EventHandler(this.RadioChekedSwitch1_Click);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.radio_into_UAH);
            this.groupBox2.Controls.Add(this.radio_into_USD);
            this.groupBox2.Controls.Add(this.radio_into_EUR);
            this.groupBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.groupBox2.Location = new System.Drawing.Point(254, 102);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(117, 83);
            this.groupBox2.TabIndex = 7;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "У валюту:";
            // 
            // radio_into_UAH
            // 
            this.radio_into_UAH.AutoSize = true;
            this.radio_into_UAH.Location = new System.Drawing.Point(15, 15);
            this.radio_into_UAH.Name = "radio_into_UAH";
            this.radio_into_UAH.Size = new System.Drawing.Size(82, 17);
            this.radio_into_UAH.TabIndex = 3;
            this.radio_into_UAH.TabStop = true;
            this.radio_into_UAH.Text = "UAH гривні";
            this.radio_into_UAH.UseVisualStyleBackColor = true;
            this.radio_into_UAH.Click += new System.EventHandler(this.RadioChekedSwitch2_Click);
            // 
            // radio_into_USD
            // 
            this.radio_into_USD.AutoSize = true;
            this.radio_into_USD.Checked = true;
            this.radio_into_USD.Location = new System.Drawing.Point(15, 38);
            this.radio_into_USD.Name = "radio_into_USD";
            this.radio_into_USD.Size = new System.Drawing.Size(87, 17);
            this.radio_into_USD.TabIndex = 4;
            this.radio_into_USD.TabStop = true;
            this.radio_into_USD.Text = "USD долари";
            this.radio_into_USD.UseVisualStyleBackColor = true;
            this.radio_into_USD.Click += new System.EventHandler(this.RadioChekedSwitch2_Click);
            // 
            // radio_into_EUR
            // 
            this.radio_into_EUR.AutoSize = true;
            this.radio_into_EUR.Location = new System.Drawing.Point(15, 61);
            this.radio_into_EUR.Name = "radio_into_EUR";
            this.radio_into_EUR.Size = new System.Drawing.Size(75, 17);
            this.radio_into_EUR.TabIndex = 5;
            this.radio_into_EUR.Text = "EUR євро";
            this.radio_into_EUR.UseVisualStyleBackColor = true;
            this.radio_into_EUR.Click += new System.EventHandler(this.RadioChekedSwitch2_Click);
            // 
            // btn_switch
            // 
            this.btn_switch.Font = new System.Drawing.Font("WP CyrillicA", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.btn_switch.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.btn_switch.Location = new System.Drawing.Point(158, 127);
            this.btn_switch.Name = "btn_switch";
            this.btn_switch.Size = new System.Drawing.Size(75, 45);
            this.btn_switch.TabIndex = 8;
            this.btn_switch.Text = "поміняти місцями";
            this.btn_switch.UseVisualStyleBackColor = true;
            this.btn_switch.Click += new System.EventHandler(this.btn_switch_Click);
            // 
            // btn_clear
            // 
            this.btn_clear.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.btn_clear.Location = new System.Drawing.Point(158, 93);
            this.btn_clear.Name = "btn_clear";
            this.btn_clear.Size = new System.Drawing.Size(75, 23);
            this.btn_clear.TabIndex = 9;
            this.btn_clear.Text = "очистити";
            this.btn_clear.UseVisualStyleBackColor = true;
            this.btn_clear.Click += new System.EventHandler(this.ClearTextValue_Click);
            // 
            // Конвертер
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlDarkDark;
            this.ClientSize = new System.Drawing.Size(389, 319);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.btn_clear);
            this.Controls.Add(this.btn_switch);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.btn_parse);
            this.Controls.Add(this.text_value_into);
            this.Controls.Add(this.text_value_from);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.menuStrip1);
            this.ForeColor = System.Drawing.SystemColors.Control;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedToolWindow;
            this.MainMenuStrip = this.menuStrip1;
            this.MaximizeBox = false;
            this.Name = "Конвертер";
            this.ShowInTaskbar = false;
            this.Text = "Конвертер";
            this.TopMost = true;
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem менюToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem вийтиToolStripMenuItem;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox text_value_from;
        private System.Windows.Forms.TextBox text_value_into;
        private System.Windows.Forms.Button btn_parse;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton radio_from_UAH;
        private System.Windows.Forms.RadioButton radio_from_USD;
        private System.Windows.Forms.RadioButton radio_from_EUR;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.RadioButton radio_into_UAH;
        private System.Windows.Forms.RadioButton radio_into_USD;
        private System.Windows.Forms.RadioButton radio_into_EUR;
        private System.Windows.Forms.Button btn_switch;
        private System.Windows.Forms.Button btn_clear;
        private System.Windows.Forms.ToolStripMenuItem очиститиПоляToolStripMenuItem;
    }
}

