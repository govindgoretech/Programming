
import java.util.Scanner;


class CountEvenOdd
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the Value: ");
        iValue = sobj.nextInt();
        
        Logic lobj = new Logic();

        lobj.RangeofEvenOdd(iValue);


      

       

    }
    

}

class Logic
{
    void RangeofEvenOdd(int iNo)
    {
        int iCount=0;

        int iCounteven=0;
        int iCountodd=0;
        for(iCount = 1; iCount <= iNo; iCount++)
        {
            if(iCount%2==0)
            {
                iCounteven++;
            }
            else
            {
                iCountodd++;
            }
           
        }
        System.out.println("Count Of Even Number is: "+iCounteven);
        System.out.println("Count Of Even Number is: "+iCountodd);
        
    }

}

