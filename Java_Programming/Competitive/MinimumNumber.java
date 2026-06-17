class MinimumNumber
{
    public static void main ( String A[])
    {
      int iRet =0;
        Logic sobj= new Logic();

       iRet= sobj.CheckMax(11,20,5);

       System.out.println("Min Number is: "+iRet);

    }
    

}

class Logic
{
    int CheckMax(int iNum1, int iNum2, int iNum3)
    {
      int iMin=iNum1;
      if (iNum2<iMin)
      {
         iMin=iNum2;
      }
      if(iNum3 < iMin) 
      {
         iMin=iNum3;
      } 
      return iMin;

     }

}

