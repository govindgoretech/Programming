class Palindrom
{
    public static void main ( String A[])
    {
        Logic sobj= new Logic();

        sobj.CheckPalindrom(121);



    }
    

}

class Logic
{
    void CheckPalindrom(int iNum)
    {
        int iTemp = iNum;
        int iRev=0, iDigit=0;

      while (iNum!=0)
      {
        iDigit=iNum%10;
        iRev=(iRev*10)+iDigit;
        iNum= iNum/10;

      }
      if(iRev==iTemp)
      {
        System.out.println("Number is Palindrom");
      }
      else
      {
        System.out.println("Number is not PalinDrom");
      }
    }


}

