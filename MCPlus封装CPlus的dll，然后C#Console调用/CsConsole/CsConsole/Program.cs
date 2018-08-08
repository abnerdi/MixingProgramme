using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using CLRCplusWrapper;

namespace CsConsole
{
    class Program
    {
        static void Main(string[] args)
        {
            CPPClassWrapper cppWrapper = new CPPClassWrapper();
            cppWrapper.ShowClassName();

        }
    }
}
