class MaxNumber
{
    public static void main ( String A[])
    {
      int iRet = 0;
        Logic sobj= new Logic();

       iRet= sobj.CheckMax(11,20);

       System.out.println("Max Number is: "+iRet);



    }
    

}

class Logic
{
    int CheckMax(int iNum1, int iNum2)
    {
      if (iNum1>iNum2)
      {
        return iNum1;
      }
      else 
      {
        return iNum2;
      } 

     }

}

