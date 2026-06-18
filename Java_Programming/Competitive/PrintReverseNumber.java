
import java.util.Scanner;


class PrintReverseNumber
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the Value: ");
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
        for(iCount = iDigits; iCount >= 1; iCount--)
        {
           System.out.println(iCount);
        }
        
    }

}

