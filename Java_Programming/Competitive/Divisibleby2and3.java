import java.util.Scanner;


class Divisibleby2and3
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the Value: ");
        iValue = sobj.nextInt();
        
        Logic lobj = new Logic();

        lobj.Divisibleby2and3(iValue);


      

       

    }
    

}

class Logic
{
    void Divisibleby2and3(int iNo)
    {
        int iCount=0;
        

        
        for(iCount = 1; iCount <= iNo; iCount++)
        {
            if(iCount%2==0 && iCount%3==0)
            {
                System.out.println(+iCount);
                
            
            }
            
        }
        
        
        
    }

}

