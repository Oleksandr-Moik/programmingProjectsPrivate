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
            Ceh ceh1 = new Ceh();
            ceh1.showAllParams();
            Ceh ceh2 = new Ceh("hztp", "Ghans V. G.", 23);
            Ceh ceh3,ceh4;

            space();
            Console.Write("SHOW ceh2:\t");
            ceh2.showAllParams();
            ceh3 = new Ceh(ceh2);
            Console.Write("SHOW ceh3: \t");
            ceh3.setWorkerCount(30);
            ceh3.showAllParams();
            Console.Write("SHOW ceh4: \t");
            ceh4 = ceh3;
            ceh4.setDirector("new direct");
            ceh4.showAllParams();

            space();
            Console.WriteLine("SETTERS");
            Console.Write("ceh1 before\t");
            ceh1.showAllParams();
            ceh1.setName("hrd");
            ceh1.setDirector("Porg R. A.");
            ceh1.setWorkerCount(12);
            Console.Write("ceh1 after\t");
            ceh1.showAllParams();

            space();
            Console.WriteLine("GETTERS(ceh2)");
            Console.WriteLine(
                String.Format("getName={0}, getDirector={1}, getWorkers={2}",
                ceh2.getName(), ceh2.getDirector(), ceh2.getWorkersCount()));

            space();
            Console.WriteLine("Array");
            Ceh[] array1 = new Ceh[]{
                new Ceh("Ivanov","Afgwgsg F. F.",50),
                new Ceh("Petrova","Mdsdfsg K. L.",18),
                new Ceh("Sudorov","Klnkdfg J. R.",18)};
            foreach (Ceh ceh in array1) ceh.showAllParams();

            Console.ReadKey();
        }
        private static void space() { Console.Write("\n\n"); }
    }
}
