using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zavd2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter count of dates: ");
            int n = Convert.ToInt32(Console.ReadLine());
            DateTime[] ob = new DateTime[n];
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine($"Enter date #{i + 1}");
                ob[i] = new DateTime();
                ob[i].InputDate();
                Console.WriteLine($"days to end this month: {ob[i].CountEndDays()}");
                DateTime tmp = new DateTime();
                Console.Write("Date next day: ");
                tmp.Nextday(ob[i]).ShowDate();
                Console.Write("Date previous day: ");
                tmp.Previousday(ob[i]).ShowDate();
                Console.WriteLine();
            }

            Console.ReadLine();
        }
    }
}
