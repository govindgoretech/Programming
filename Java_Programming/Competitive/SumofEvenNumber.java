import java.util.Scanner;


class PrintDigits
{
    public static void main ( String A[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue1=0, iRet=0;

        System.out.println("Enter the No: ");
        iValue1 = sobj.nextInt();
        
        Logic lobj = new Logic();

        iRet=lobj.RangeSum(iValue1);

        System.out.println("Answer:"+iRet);
      

       

    }
    

}
class Logic
{
    int RangeSum(int iNo)
    {
        int iCount = 0;
        int iAddition = 0;

        for(iCount = 0; iCount <= iNo; iCount++)
        {
            if(iCount % 2 == 0)
            {
                iAddition = iAddition + iCount;
            }
        }

        return iAddition;
    }
}