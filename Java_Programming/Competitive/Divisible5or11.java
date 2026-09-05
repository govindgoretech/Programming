
import java.util.Scanner;


class Divisible5or11
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);
        int iValue=0;
        System.out.println("Enter the Value: ");
        iValue = sobj.nextInt();
        Logic lobj = new Logic();
        lobj.Divisible(iValue);


      

       

    }
    

}

class Logic
{
    void Divisible(int iNum1)
    {
      
          if(iNum1%5==0 || iNum1%11==0)
          {
            System.out.println("Number is Divisible");
          }

          else
          {
            System.out.println("Number is Not Divisible");
          }

      }
      
     

}

