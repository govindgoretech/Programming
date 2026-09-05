class PrimeNumber
{
    public static void main (String A[])
    {
    boolean bRet = false;
    Logic lobj = new Logic();


    bRet = lobj.CheckPositiveNegative(-11);
    
    if(bRet==true)
    {
        System.out.println("Number is Negative");
    }
    else
    {
        System.out.println("Number is Positive");
    }

    }

}

class Logic
{
    boolean CheckPositiveNegative(int iNo)
    {
        
        if(iNo<0)
        {
            return true;
        }
        else
        {
            return false;

        }

    }
}