import java.util.*;
class Program86
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        CountEvenDigit cobj = new CountEvenDigit();

        int iValue =  0;
        int iRet = 0;

        System.out.println("Enter No :");
        iValue=sobj.nextInt();

        iRet =cobj.CountDigits(iValue);

        System.out.println("Number of Even Digits Are : "+iRet);


    }
}

class CountEvenDigit
{
    public int  CountDigits(int iNo)
    {
        
        int iDigit =0;
        int iCount = 0;
        while(iNo!=0 )
        {
           iDigit = iNo%10;
           if(iDigit % 2 ==0 )
           {
              iCount++;
            
           }
           
           
           iNo=iNo/10;


        }
        return iCount;


    }


}
