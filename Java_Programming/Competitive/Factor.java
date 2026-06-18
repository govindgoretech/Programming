
import java.util.Scanner;


class Factor
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the Value: ");
        iValue = sobj.nextInt();
        
        Logic lobj = new Logic();

        lobj.DisplayFactors(iValue);


      

       

    }
    

}

class Logic
{
    void DisplayFactors(int iNo)
    {
        int iCount=0;

        System.out.println("Factors of "+iNo);
        for(iCount = 1; iCount <= iNo; iCount++)
        {
            if(iNo%iCount==0)
            {
                System.out.println(iCount);
                
            }
           
           
        }
        
        
    }

}

