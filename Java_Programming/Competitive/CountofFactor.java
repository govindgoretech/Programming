
import java.util.Scanner;


class CountofFactor
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the Value: ");
        iValue = sobj.nextInt();
        
        Logic lobj = new Logic();

        lobj.CountFactors(iValue);


      

       

    }
    

}

class Logic
{
    void CountFactors(int iNo)
    {
        int iCount=0;
        int iCountFact=0;

        
        for(iCount = 1; iCount <= iNo; iCount++)
        {
            if(iNo%iCount==0)
            {
                iCountFact++;
            
            }
            
        }
        System.out.println("Total Number of Factors Are: "+iCountFact);
        
        
    }

}

