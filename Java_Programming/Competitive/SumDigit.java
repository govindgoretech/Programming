class SumDigit
{
    public static void main ( String A[])
    {
        Logic sobj= new Logic();

        sobj.SumOfDigitis(1234);



    }
    

}

class Logic
{
    void SumOfDigitis(int iNum)
    {
        int iSum =0;
        int iDigit =0;


        while(iNum != 0)
        {
            iDigit=iNum%10;

            iSum=iDigit+iSum;

            iNum=iNum/10;

        }
    System.out.println("Sum of All Digit is:  "+iSum);
        
    }

}

