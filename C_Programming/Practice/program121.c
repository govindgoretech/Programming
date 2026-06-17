#include <stdlib.h>
#include <stdio.h>

void Display(int Arr[], int iSize)
{
   int iCnt=0;
   printf("Elements of The Array Are : \n");

   for ( iCnt = 0; iCnt< iSize; iCnt++)
   {
      printf("%d\n",Arr[iCnt]);
   }
   

}
int main()
{
   int *Brr = NULL;
   int iLength =0, iCnt =0;
  
   //Step1: Accept The Number Of Elements
   printf("Enter the Number Elements");
   scanf("%d",&iLength);
  
   //Step 2: Allocate the Memory
   Brr= (int*)malloc(iLength * sizeof(int));

   //Accept the Malloc From The User
   for ( iCnt = 0; iCnt < iLength; iCnt++)
   {
      scanf("%d",&Brr[iCnt]);
    
   }

   //Step4 : Use The Memory logic
   Display(Brr,iLength);

   //Step 5 : DeAllocate The memory
   free(Brr);
   

    return 0;
}