import java.util.*;

class program147
{
   public static void main(String[] args) 
   {

      Scanner sobj = new Scanner(System.in);
      int iCnt=0;

      System.out.println("Enter The Number you print: ");
      int iLength = sobj.nextInt();
      
      //Brr[]= (int*) malloc (sizeof(int)*iLength);
      int Brr[] = new int [iLength]; 

      System.out.println("Enter The Elements: ");

      for(iCnt=0; iCnt<Brr.length; iCnt++)
      { 
         Brr[iCnt] = sobj.nextInt();
      }

      System.out.println("Element Before The function Call");
      for(iCnt=0;iCnt<Brr.length;iCnt++)
      { 
         System.out.println(Brr[iCnt]);
      }

      ArrayX.Update(Brr);

      System.out.println("Elements After The Function call");

      for(iCnt=0;iCnt<Brr.length;iCnt++)
      { 
         System.out.println(Brr[iCnt]);
      }

      Brr=null;
      System.gc();

   }
}

class ArrayX 
{
   public static void Update(int Arr[])
   {
   int iCnt=0;
   for(iCnt=0; iCnt<Arr.length; iCnt++)
   {
      Arr[iCnt]++;
   }
   }
}