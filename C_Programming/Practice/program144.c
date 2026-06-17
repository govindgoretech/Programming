 #include<stdio.h>

 void Update(int Arr[], int iSize)
 {
   int iCnt =0;
   for(iCnt=0; iCnt<iSize; iCnt++)
   {
      Arr[iCnt]++;
   }

 }
 int main()
 {
   int Brr[]= {10,20,30,40,50};
   int iCnt =0;

   for(iCnt=0; iCnt<5; iCnt++)
   {
      printf("%d\n",Brr[iCnt]);
   }
   
   Update(Brr,5);
   printf("Element After The Function Call\n");

   for(iCnt=0; iCnt<5; iCnt++)
   {
      printf("%d\n",Brr[iCnt]);
   }

   return 0;
 }