using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zavd2
{
    class DateTime
    {
        private int day;
        private int month;
        private int year;
        
        public DateTime()
        {
            day = 1;
            month = 1;
            year = 2009;
        }
        public DateTime(int day, int month, int year)
        {
            this.day = day;
            this.month = month;
            this.year = year;
        }

        public DateTime Nextday(DateTime ob)
        {
            day = ob.day;
            month = ob.month;
            year = ob.year;
            day++;

            if (((month <= 7) && (month % 2 == 1)) || ((month >= 8) && (month % 2 == 0)))
            {
                if (day > 31) { day = 1; month++; }
            }
            else
            {
                if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
                {
                    if (day > 30) { day = 1; month++; }
                }
                else
                {
                    if (((year % 4 == 0) && (year % 100 != 0))
                        || ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0)))
                    {
                        if (day > 29) { day = 1; month++; }
                    }
                    else { if (day > 28) { day = 1; month++; } }
                }
            }
            if (month > 12) { month = 1; year++; }

            return new DateTime(day, month, year);
        }
        public DateTime Previousday(DateTime ob)
        {
            day = ob.day;
            month = ob.month;
            year = ob.year;
            day--;

            if (((month <= 7) && (month % 2 == 1)) || ((month >= 8) && (month % 2 == 0)))
            {
                if (day < 1)
                {
                    if (month == 1 || month == 8) { day = 31; month--; }
                    else
                    {
                        day = 30; month--;
                        if (month == 2)
                        {
                            if (((year % 4 == 0) && (year % 100 != 0))
                                || ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0))) day = 29;
                            else day = 28;
                        }
                    }
                }
            }
            else if ((month == 2) || (month == 4) || (month == 6) || (month == 9) || (month == 11))
            {
                if (day < 1) { day = 31; month--; }
            }
            if (month == 0)
            {
                day = 31;
                month = 12;
                year--;
            }
            return new DateTime(day, month, year);
        }
        public int CountEndDays()
        {
            if (month == 2)
            {
                if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0)))
                    return 29 - day;
                else return 28 - day;
            }
            else if (((month <= 7) && (month % 2 == 1)) || ((month >= 8) && (month % 2 == 0)))
            {
                return 31 - day;
            }
            else { return 30 - day; }
        }

        public void InputDate()
        {
            Console.Write("year: ");
            year = Convert.ToInt32(Console.ReadLine());
            Console.Write("month: ");
            month = Convert.ToInt32(Console.ReadLine());
            Console.Write("day: ");
            day = Convert.ToInt32(Console.ReadLine());
        }
        public void ShowDate()
        {
            Console.WriteLine($"{day,2:D2}.{month,2:D2}.{year,4:D4}");
        }

        public string toString()
        {
            return String.Format($"{day,2:D2}.{month,2:D2}.{year,4:D4}");
        }
        public static bool operator &(DateTime a, DateTime b)
        {
            return false;
        }
        public static bool operator !(DateTime time)
        {
            if (time.day < 28) return true;
            else
            {
                if (time.month == 2)
                {
                    if (((time.year % 4 == 0) && (time.year % 100 != 0)) || ((time.year % 4 == 0) && (time.year % 100 != 0) && (time.year % 400 == 0)))
                        return (time.day == 29) ? false : true;
                    else return (time.day == 28) ? false : true;
                }
                else if (((time.month <= 7) && (time.month % 2 == 1)) || ((time.month >= 8) && (time.month % 2 == 0)))
                {
                    return (time.day == 31) ? false : true;
                }
                else if ((time.month == 4) || (time.month == 6) || (time.month == 9) || (time.month == 11))
                {
                    return (time.day == 30) ? false : true;
                }
            }
            return false;
        }
        public static bool operator true(DateTime time)
        {
            return (time.day == 1 && time.month == 1) ? true : false;
        }
        public static bool operator false(DateTime time)
        {
            return (!(time.day == 1 && time.month == 1)) ? false : true;
        }

    }
}
