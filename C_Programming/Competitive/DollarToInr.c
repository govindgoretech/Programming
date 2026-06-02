#include <stdio.h>

void DollarToInr(int iNo)
{
   if (iNo<0)
   {
      iNo=-iNo;
   }
   
   int iDollar=70;
   printf("%d Ruppes",iNo*iDollar);
   
   
    
}   
int main()
 {
    int iValue = 0;
     int iRet = 0;
    printf ("Enter the Number : ");
    scanf("%d",&iValue);

   DollarToInr(iValue);
    


    return 0;
 }