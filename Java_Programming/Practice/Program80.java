import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNo)
    {

        while(iNo!=0)
        {
           System.out.println("iNo%10");
           iNo= iNo/10;
           
        

        }

    }


}
class Program80
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        DigitX dobj = new DigitX();

        int iValue=0;

        System.out.println("Enter No :");
        iValue=sobj.nextInt();

        dobj.DisplayDigits(iValue);


    }
}