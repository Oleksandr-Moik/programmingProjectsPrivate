using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace laba1
{
    class Ceh
    {
        private string name;
        private string director;
        private int workers;

        public Ceh()
        {
            Console.WriteLine("Simple create");
            name = "";
            director = "";
            workers = 0;
        }
        public Ceh(string name, string director, int workers)
        {
            Console.WriteLine("Construct with params");
            this.name = name;
            this.director = director;
            this.workers = workers;
        }
        public Ceh(Ceh ceh)
        {
            Console.WriteLine("Construct-copy");
            this.name = ceh.name;
            this.director = ceh.director;
            this.workers = ceh.workers;
        }

        public string getName()
        {
            return this.name;
        }
        public string getDirector()
        {
            return this.director;
        }
        public int getWorkersCount()
        {
            return this.workers;
        }

        public void setName(string name)
        {
            this.name = name;
        }
        public void setDirector(string director)
        {
            this.director = director;
        }
        public void setWorkerCount(int count)
        {
            this.workers = count;
        }

        public void showAllParams(){
            Console.WriteLine(
                String.Format("Name={0}, Director={1}, Workers={2}",
                this.name, this.director, this.workers));
        }
    }
}
