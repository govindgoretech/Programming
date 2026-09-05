class Leapyear
{
    public static void main ( String A[])
    {
        Logic lobj = new Logic();
        lobj.LeapYear(2025);


      

       

    }
    

}

class Logic
{
    void LeapYear(int iNum1)
    {
      
          if(iNum1%4==0 || iNum1%400==0 || iNum1%100==0)
          {
            System.out.println("It is the Leap year");
          }

          else
          {
            System.out.println("It's Not Leap year");
          }

      }
      
     

}

