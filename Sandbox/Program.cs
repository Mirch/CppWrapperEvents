using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Events;

namespace Sandbox
{
    class Program
    {
        static void PrintNumber(int num) {
            Console.WriteLine("Number: " + num);
        }


        static void Main(string[] args)
        {
            Event ev = new Event();
            Events.Funct f = new Events.Funct(PrintNumber);
            ev.Subscribe(f);
            EventsRepository repo = new EventsRepository();
            repo.Add(ev);

            repo.GetEvent(0).Trigger(5);


            Console.ReadLine();
        }
    }
}
