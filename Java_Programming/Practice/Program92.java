import java.util.*;
class Program92
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        DigitX cobj = new DigitX();

        int iValue =  0;
        int iRet = 0;

        System.out.println("Enter No :");
        iValue=sobj.nextInt();

        iRet =cobj.CountDigits(iValue);

        System.out.println("Reverse Number is : "+iRet);


    }
}

class DigitX
{
    public int  CountDigits(int iNo)
    {
        
       int iDigit =0;
        int iRev = 0;
        while(iNo!=0 )
        {

             iDigit = iNo%10;
           
           iRev=iRev*10+iDigit;
           
           iNo=iNo/10;


        }
        return iRev;


    }


}
