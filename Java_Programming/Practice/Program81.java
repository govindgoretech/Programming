import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;
        for(;iNo !=0; )
        { 
            iDigit =iNo%10;
            System.out.println(iDigit);
            iNo =iNo/10;

           
           
        

        }

    }


}
class Program79
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