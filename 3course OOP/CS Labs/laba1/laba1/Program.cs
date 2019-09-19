using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace laba1
{
    class Program
    {
        static void Main(string[] args)
        {
            Ceh ceh1 = new Ceh(), ceh3;
            Ceh ceh2 = new Ceh("hztp", "Ghans V. G.", 23);

            space();
            Console.WriteLine("SHOW ceh2");
            ceh2.showAllParams();
            ceh3 = new Ceh(ceh2);
            Console.WriteLine("SHOW ceh3");
            ceh3.showAllParams();

            space();
            Console.WriteLine("GETTERS(ceh2)");
            Console.WriteLine(String.Format("Name = {0}\nDirector = {1}\nWorkers = {2}", ceh2.getName(), ceh2.getDirector(), ceh2.getWorkersCount()));

            space();
            Console.WriteLine("SETTERS");
            Console.WriteLine("ceh1");
            ceh1.setName("hrd");
            ceh1.setDirector("Porg R. A.");
            ceh1.setWorkerCount(12);
            ceh1.showAllParams();

            Console.WriteLine("\nceh3");
            ceh3.setWorkerCount(30);
            Console.WriteLine("SHOW ceh3");
            ceh3.showAllParams();
            space();

            Console.ReadKey();
        }

        private static void space()
        {
            Console.Write("\n\n");
        }
    }
}
