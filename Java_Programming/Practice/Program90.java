import java.util.*;
class Program90
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
        
       
        int isum = 0;
        while(iNo!=0 )
        {
             
           
           isum= isum+(iNo%10) ;
           
           iNo=iNo/10;


        }
        return isum;


    }


}
