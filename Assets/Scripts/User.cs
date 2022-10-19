using System.Collections;
using System.Collections.Generic;

public class User
{
   public string name;
   public float heartRate;
   public string pin;

   public User(string name, float heartRate, string pin)
   {
      this.name = name;
      this.heartRate = heartRate;
      this.pin = pin;
   }
}
