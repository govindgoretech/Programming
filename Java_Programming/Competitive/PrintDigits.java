
import java.util.Scanner;


class PrintDigits
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter the Value: ");
        iValue = sobj.nextInt();
        
        Logic lobj = new Logic();

        lobj.Digits(iValue);


      

       

    }
    

}

class Logic
{
    void Digits(int iDigits)
    {
        int iCnt=0, iDivisior=1;
        int iTemp=0;
        iTemp=iDigits;


        while(iTemp>=10)
        {
            iDivisior=iDivisior*10;
            iTemp=iTemp/10;
        }

        while(iDigits!=0)
        {
            
            System.out.println(iDigits/iDivisior);
            iDigits=iDigits%iDivisior;
            iDivisior=iDivisior/10;
        }
      
          


      }
      
     

}

