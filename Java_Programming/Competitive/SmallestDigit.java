
import java.util.Scanner;


class SmallestDigit
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

        iCount=iDigits%10;

        int iMin=iCount;

        while(iDigits!=0)
        {
            iCount=iDigits%10;
           
           if(iMin>=iCount)
           {
             iMin=iCount;
           }
           iDigits=iDigits/10;
        }

        System.out.println("Smallest Digit is: "+iMin);
        
    }

}

