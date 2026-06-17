class SumofEvenOdd
{
    public static void main ( String A[])
    {
        Logic sobj= new Logic();

        sobj.EvenOddNumber(123456);



    }   

}

class Logic
{
    void EvenOddNumber(int iNum)
    {
        int iSumEven = 0;
        int iSumodd=0;
        int iDigit =0;

       
       while(iNum!=0)
      {
        iDigit=iNum%10;
        if(iDigit%2==0)
        {
            iSumEven= iSumEven+iDigit;
        }
        else
        {
            iSumodd=iSumodd+iDigit;
        }
        iNum=iNum/10;
          
      }
      System.out.println("Sum of All Even Number is: "+iSumEven);
      System.out.println("Sum of All Odd Number is: "+iSumodd);
   
   
        
    }

}

