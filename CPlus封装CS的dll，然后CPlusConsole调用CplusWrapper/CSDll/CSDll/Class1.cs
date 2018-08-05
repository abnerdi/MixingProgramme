using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace CSDll
{
    public class CSTestClass
    {
        public String Name{ get; set;}

        static string ClassName = "CsTestClass";

        public String PublicMethod()
        {
            return Name;
        }

        private String PrivateMehod()
        {
            return Name;
        }

        public static String StaticMethod()
        {
            return ClassName;
        }

    }
}
