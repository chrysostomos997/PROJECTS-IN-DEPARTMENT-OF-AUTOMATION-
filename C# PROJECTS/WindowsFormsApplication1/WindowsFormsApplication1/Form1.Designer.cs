namespace WindowsFormsApplication1
{
    partial class Form1
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
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.textBox3 = new System.Windows.Forms.TextBox();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.etosGenisisToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.etosProslipsisToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.ilikiaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.eksodosToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.eksagwghToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(356, 180);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 20);
            this.textBox1.TabIndex = 0;
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(356, 249);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(100, 20);
            this.textBox2.TabIndex = 1;
            // 
            // textBox3
            // 
            this.textBox3.Location = new System.Drawing.Point(356, 312);
            this.textBox3.Name = "textBox3";
            this.textBox3.Size = new System.Drawing.Size(100, 20);
            this.textBox3.TabIndex = 2;
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(673, 24);
            this.menuStrip1.TabIndex = 3;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.etosGenisisToolStripMenuItem,
            this.etosProslipsisToolStripMenuItem,
            this.ilikiaToolStripMenuItem,
            this.eksodosToolStripMenuItem,
            this.eksagwghToolStripMenuItem});
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(37, 20);
            this.fileToolStripMenuItem.Text = "File";
            // 
            // etosGenisisToolStripMenuItem
            // 
            this.etosGenisisToolStripMenuItem.Name = "etosGenisisToolStripMenuItem";
            this.etosGenisisToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.etosGenisisToolStripMenuItem.Text = "Etos genisis";
            this.etosGenisisToolStripMenuItem.Click += new System.EventHandler(this.etosGenisisToolStripMenuItem_Click);
            // 
            // etosProslipsisToolStripMenuItem
            // 
            this.etosProslipsisToolStripMenuItem.Name = "etosProslipsisToolStripMenuItem";
            this.etosProslipsisToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.etosProslipsisToolStripMenuItem.Text = "Etos proslipsis";
            this.etosProslipsisToolStripMenuItem.Click += new System.EventHandler(this.etosProslipsisToolStripMenuItem_Click);
            // 
            // ilikiaToolStripMenuItem
            // 
            this.ilikiaToolStripMenuItem.Name = "ilikiaToolStripMenuItem";
            this.ilikiaToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.ilikiaToolStripMenuItem.Text = "ilikia";
            this.ilikiaToolStripMenuItem.Click += new System.EventHandler(this.ilikiaToolStripMenuItem_Click);
            // 
            // eksodosToolStripMenuItem
            // 
            this.eksodosToolStripMenuItem.Name = "eksodosToolStripMenuItem";
            this.eksodosToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.eksodosToolStripMenuItem.Text = "Eksodos";
            this.eksodosToolStripMenuItem.Click += new System.EventHandler(this.eksodosToolStripMenuItem_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(268, 183);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(63, 13);
            this.label1.TabIndex = 4;
            this.label1.Text = "Etos genisis";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(268, 249);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(73, 13);
            this.label2.TabIndex = 5;
            this.label2.Text = "Etos proslipsis";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(280, 319);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(27, 13);
            this.label3.TabIndex = 6;
            this.label3.Text = "ilikia";
            // 
            // eksagwghToolStripMenuItem
            // 
            this.eksagwghToolStripMenuItem.Name = "eksagwghToolStripMenuItem";
            this.eksagwghToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.eksagwghToolStripMenuItem.Text = "Eksagwgh";
            this.eksagwghToolStripMenuItem.Click += new System.EventHandler(this.eksagwghToolStripMenuItem_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(673, 531);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBox3);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.TextBox textBox3;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem etosGenisisToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem etosProslipsisToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem ilikiaToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem eksodosToolStripMenuItem;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.ToolStripMenuItem eksagwghToolStripMenuItem;
    }
}

