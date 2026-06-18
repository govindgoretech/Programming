
import java.util.Scanner;


class PerfectNumber
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;
        boolean bRet=false;

        System.out.println("Enter the Value: ");
        iValue = sobj.nextInt();
        
        Logic lobj = new Logic();

        bRet=lobj.Digits(iValue);

        if(bRet==true)
        {
            System.out.println("This is the Prime Number ");
        }
        else 
        {
            System.out.println("This is Not A Prime Number");
        
        }


      

       

    }
    

}

class Logic
{
    boolean Digits(int iDigits)
    {
        int iCount=0;
        int iSum=0;
        for(iCount = 1; iCount <= iDigits/2; iCount++)
        {
           if(iDigits%iCount==0)
           {
             iSum=iSum+iCount;
           }
           
        }
        
        return iSum==iDigits;
        
    }

}

