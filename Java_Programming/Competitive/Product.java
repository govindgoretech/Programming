
import java.util.Scanner;


class Product
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the Digits: ");
        iValue = sobj.nextInt();
        
        Logic lobj = new Logic();

        lobj.ProductofDigit(iValue);


      

       

    }
    

}

class Logic
{
    void ProductofDigit(int iDigits)
    {
        int iCount=0;
        int iMul=1;
        while(iDigits!=0)
        {
           iCount=iDigits%10;
           
             iMul=iCount*iMul;
           
           iDigits=iDigits/10;
        }

        System.out.println("Product of Digit is: "+iMul);
        
    }

}

