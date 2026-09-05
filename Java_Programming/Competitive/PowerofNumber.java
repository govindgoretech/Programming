
import java.util.Scanner;


class PowerofNumber
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue1=0,iValue2=0, iRet=0;

        System.out.println("Enter the Base: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Power: ");
        iValue2 = sobj.nextInt();
        
        Logic lobj = new Logic();

        iRet=lobj.Digits(iValue1,iValue2);

        System.out.println("Answer:"+iRet);

    }
    

}

class Logic
{
    int Digits(int iBase, int iPower)
    {
        int iCnt=0;
        int iAns=1;

        for(iCnt=1; iCnt<=iPower; iCnt++)
        {
            iAns=iAns*iBase;

        }
        

     return iAns;

      }
      
     

}

