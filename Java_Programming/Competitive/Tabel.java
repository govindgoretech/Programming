class Tabel
{
    public static void main ( String A[])
    {
      int iRet =0;
        Logic sobj= new Logic();

       sobj.Tabel(5);

       

    }
    

}

class Logic
{
    void Tabel(int iNum1)
    {
      for(int iCnt=1;iCnt<11;iCnt++)
      {
          System.out.println(iNum1*iCnt);

      }
    }  
     

}

