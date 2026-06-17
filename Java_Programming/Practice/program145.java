class program145
{

 public static void Update(int Arr[] , int iSize)
{
   int iCnt =0;
   for(iCnt=0; iCnt<iSize; iCnt++)
   {
        Arr[iCnt]++;
   }
 }   
    public static void main(String[] args)
    {
        int Brr[]={10,20,30,40,50 };
        int iCnt =0;
    System.out.println("Array Element Before Function Call");
   for(iCnt=0; iCnt<5; iCnt++)
   {
      System.out.println(Brr[iCnt]);

   }
    Update(Brr, 5);

    System.out.println("Array Element Before Function Call");

    for(iCnt=0; iCnt<5; iCnt++)
   {
      System.out.println(Brr[iCnt]);

   }

   Brr=null;
   System.gc();




        
    }
}