using System;
using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Json;

namespace NanJSON
{
  class Hoge
  {
    static void Main()
    {
      Test(Double.NaN);
      Test(Double.PositiveInfinity);
    }

    private static void Test(double val)
    {
      var ary = new Double[] { val };
      using (var ms = new MemoryStream())
      using (var sr = new StreamReader(ms))
      {
        var serializer = new DataContractJsonSerializer(typeof(Double[]));
        serializer.WriteObject(ms, ary);
        ms.Position = 0;
        var json = sr.ReadToEnd();
        Console.WriteLine("{0} : {1}", val, json);
      }
    }
  }
}