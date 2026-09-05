import java.util.*;
class Program93
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        DigitX cobj = new DigitX();

        int iValue =  0;
        boolean bRet = 0;

        System.out.println("Enter No :");
        iValue=sobj.nextInt();

        bRet =cobj.CheckPalindrome(iValue);
        System.out.println("Reverse Number is : "+bRet);

        if (bRet == true)
        {
            System.out.println("Numbrer is PalinDrom");
        }
        else 
        {
            System.out.println("Numbrer is not PalinDrom");
        }


    }
}

class DigitX
{
    public boolean   CheckPalindrome(int iNo)
    {
        
       int iDigit =0;
        int iRev = 0;
        int itemp = 0;
        
        while(iNo!=0 )
        {

           iDigit = iNo%10;
           
           iRev=iRev*10+iDigit;
           
           iNo=iNo/10;


        }
        if (iRev == itemp)

    }


}
