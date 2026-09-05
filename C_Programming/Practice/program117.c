#include <stdio.h>

void Display(int Arr[], int iSize)
{
   int iCnt =0;
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
       printf(" %d\n",Arr[iCnt]);
    }
}    
    
    
int main()
{
    int iLength = 4;
    int Brr[iLength];
   
    printf("Enter The Emlements: ");
    int iCnt =0;
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
      scanf("%d \n",&Brr[iCnt]);
    }
    
    
     

    printf("Display the Base Address: %d \n",Brr);
    Display(Brr,iLength);
   

    return 0;
}