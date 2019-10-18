using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zavd1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter count of dates: ");
            int n = Convert.ToInt32(Console.ReadLine());
            DateTime[] timeObj = new DateTime[n+1];
            timeObj[0] = new DateTime(1,1,2019);
            for (int i = 1; i <= n; i++)
            {
                Console.WriteLine($"Enter date #{i + 1}");
                timeObj[i] = new DateTime();
                timeObj[i].InputDate();
                Console.WriteLine($"days to end this month: {timeObj[i].CountEndDays()}");
                DateTime tmp = new DateTime();
                Console.Write("Date next day: ");
                tmp.Nextday(timeObj[i]).ShowDate();
                Console.Write("Date previous day: ");
                tmp.Previousday(timeObj[i]).ShowDate();
                Console.WriteLine();
            }

            Console.ReadLine();
        }
    }
}
