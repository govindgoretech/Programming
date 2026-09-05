class EvenNumber
{
    public static void main ( String A[])
    {
        Logic sobj= new Logic();

        sobj.EvenNumber(20);



    }   

}

class Logic
{
    void EvenNumber(int iNum)
    {
        int iSum =0;
        int iDigit =0;


       for(int iCnt=0;iCnt<=iNum;iCnt++)
      {
        if(iCnt%2==0)
          System.out.println(iCnt);

      }
   
        
    }

}

