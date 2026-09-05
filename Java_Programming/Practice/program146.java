 import java.util.*;


class ArrayX
{
   public static int Summation(int Arr[])
   {
      int iSum=0;
      for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            iSum=iSum+(Arr[iCnt]);
        }

      return iSum;

   }
}
 class program146
 {

   public static int Summation(int Arr[])
   {
      int iSum=0;
      for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            iSum=iSum+(Arr[iCnt]);
        }

      return iSum;

   }
    public static void main(String[] args)
     {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;
    
        System.out.println("Enter The Number of Elements");
        int iLength =sobj.nextInt();

        
        int Brr[]=new int[iLength];

        System.out.println("Enter The Elements: ");

        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
           Brr[iCnt]=sobj.nextInt();
        }

        System.out.println("Elements Of The Array Are: ");

        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
        
        int iRet= Summation(Brr);

        System.out.println("Summation is: "+iRet);

        Brr=null;
        System.gc();     
    }

    
 }
