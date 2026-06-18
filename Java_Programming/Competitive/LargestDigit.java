
import java.util.Scanner;


class LargestDigit
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the Digits: ");
        iValue = sobj.nextInt();
        
        Logic lobj = new Logic();

        lobj.Digits(iValue);


      

       

    }
    

}

class Logic
{
    void Digits(int iDigits)
    {
        int iCount=0;
        int imax=0;
        while(iDigits!=0)
        {
           iCount=iDigits%10;
           if(imax<=iCount)
           {
             imax=iCount;
           }
           iDigits=iDigits/10;
        }

        System.out.println("Largest Digit is: "+imax);
        
    }

}

