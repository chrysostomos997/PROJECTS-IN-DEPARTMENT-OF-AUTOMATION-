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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            for (int i = 1990; i < 2012; i++)
                comboBox1.Items.Add(Convert.ToString(i));
        }
        public string funEtos()
        {
            return Convert.ToString(comboBox1.SelectedItem);
        }
    }
}
