import java.util.*;
class Program89
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        CountsumDigit cobj = new CountsumDigit();

        int iValue =  0;
        int iRet = 0;

        System.out.println("Enter No :");
        iValue=sobj.nextInt();

        iRet =cobj.CountDigits(iValue);

        System.out.println("Number of Sumation Digits Are : "+iRet);


    }
}

class CountsumDigit
{
    public int  CountDigits(int iNo)
    {
        
        int iDigit =0;
        int isum = 0;
        while(iNo!=0 )
        {
           iDigit = iNo%10;
           
           isum= isum+iDigit ;
           
           iNo=iNo/10;


        }
        return isum;


    }


}
