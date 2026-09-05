#include <stdio.h>

int Fact(int iNo)
{
   if (iNo<0)
   {
      iNo=-iNo;
   }
   
   int iCnt =0;
   int iFact=1;

   for ( iCnt = iNo; iCnt >= 1; iCnt--)
   {
      if (iCnt%2==0)
      {
         iFact= iCnt*iFact;
      }
      
      
   }
   return iFact;
   
   
    
}   
int main()
 {
    int iValue = 0;
     int iRet = 0;
    printf ("Enter the Number : ");
    scanf("%d",&iValue);

   iRet = Fact(iValue);

   printf("Even Factorial Number is: %d",iRet);
    
    return 0;
 }