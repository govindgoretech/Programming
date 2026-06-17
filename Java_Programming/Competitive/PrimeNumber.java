class PrimeNumber
{
    public static void main (String A[])
    {
    boolean bRet = false;
    Logic lobj = new Logic();

    bRet = lobj.CheckPrime(11);
    
    if(bRet==true)
    {
        System.out.println("Number is Prime");
    }
    else
    {
        System.out.println("Number is not Prime");
    }

    }

}

class Logic
{
    boolean CheckPrime(int iNo)
    {
        int iCnt=0;
        int iFactor=0;
        for(iCnt=1; iCnt<=iNo; iCnt++)
        {
            iFactor++;  

        }
        if(iFactor==2)
        {
            return true;
        }
        else
        {
            return false;

        }

    }
}