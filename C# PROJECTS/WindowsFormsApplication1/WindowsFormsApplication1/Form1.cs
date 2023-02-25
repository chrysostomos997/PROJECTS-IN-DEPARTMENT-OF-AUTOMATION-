using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void eksodosToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void etosGenisisToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form2 frm = new Form2();
            if (frm.ShowDialog() == DialogResult.OK)
            {
                label1.ForeColor = Color.Black;
                textBox1.Text = frm.funEtos();
            }
            else
                label1.ForeColor = Color.Red;
           

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void ilikiaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
                textBox3.Text = Convert.ToString(Convert.ToUInt32(textBox2.Text) - Convert.ToUInt32(textBox1.Text));
        }

        private void etosProslipsisToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form2 frm = new Form2();
            if (frm.ShowDialog() == DialogResult.OK)
                textBox2.Text = frm.funEtos();
            
        }
        Form3 frm = new Form3();
        private void eksagwghToolStripMenuItem_Click(object sender, EventArgs e)
        {
            
            frm.funilikia(textBox1.Text, textBox2.Text, textBox3.Text);
            frm.ShowDialog();
        }
       

    }
}
