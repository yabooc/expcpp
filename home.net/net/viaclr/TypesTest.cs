using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace viaclr
{
    [TestClass]
    public class TypesTest
    {
        [TestMethod]
        public void NoSyncBetweenBoxedUnboxedTest()
        {
            Int32 i = 5;
            object o = i;
            i = 123;
            Console.WriteLine("Boxed {0}, Unboxed {1}", o, i);
        }
    }
}
