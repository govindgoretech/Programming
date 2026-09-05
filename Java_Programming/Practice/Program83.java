import java.util.*;

class CountDigit
{
    public int  CountDigits(int iNo)
    {
        int iCount = 0;
        int iDigit =0;
        while(iNo!=0 )
        {
           iDigit = iNo%10;
           iCount++;
           
           iNo=iNo/10;

        }
        return iCount;


    }


}
class Program83
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        CountDigit cobj = new CountDigit();

        int iValue =  0;
        int iRet = 0;

        System.out.println("Enter No :");
        iValue=sobj.nextInt();

        iRet =cobj.CountDigits(iValue);

        System.out.println("Number of Digits"+iRet);


    }
}