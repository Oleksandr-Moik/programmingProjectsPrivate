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
            DateTime[] timeObj = new DateTime[n + 1];
            timeObj[0] = new DateTime(1, 1, 2019);
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

                Console.WriteLine("Not last day of month: {0}", !timeObj[i]);
                Console.WriteLine("First day of year: {0}", timeObj[i]);

                Console.WriteLine("Compare previos date and this date:");
                Console.WriteLine("Previous date {0} ", timeObj[i - 1].toString());
                Console.WriteLine("This date {0} ", timeObj[i].toString());

                Console.WriteLine("Compare: {0}", (timeObj[i - 1] & timeObj[i]));
            }

            Console.ReadLine();
        }
    }
}
