#include <stdio.h>

int Fact(int iNo)
{
   if (iNo<0)
   {
      iNo=-iNo;
   }
   
   int iCnt =0;
   int iFactEven=1;
   int iFactOdd=1;
   int iFact=0;

   for ( iCnt = iNo; iCnt >= 1; iCnt--)
   {
      if (iCnt%2==0)
      {
         iFactEven= iCnt*iFactEven;
      }
      
      
   }
    for ( iCnt = iNo; iCnt >= 1; iCnt--)
   {
      if (iCnt%2!=0)
      {
         iFactOdd= iCnt*iFactOdd;
      }
      
      
   }
   return iFact=iFactEven-iFactOdd;
   
   
    
}   
int main()
 {
    int iValue = 0;
     int iRet = 0;
    printf ("Enter the Number : ");
    scanf("%d",&iValue);

   iRet = Fact(iValue);

   printf("Factorial Difference is: %d",iRet);
    
    return 0;
 }