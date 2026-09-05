#include <stdio.h>

int Summation(int Arr[], int iSize)
{
    int iCnt =0;
    int iSum =0;
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    { 
      iSum=iSum+Arr[iCnt];
      
    }
    return iSum;
}    
    
    
int main()
{
    int iLength = 4;
    int Brr[iLength];
    int iRet = 0;
   
    printf("Enter The Emlements: ");
    int iCnt =0;
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
      scanf("%d \n",&Brr[iCnt]);
    }
    
    
     

    printf("Display the Base Address: %d \n",Brr);
    iRet = Summation(Brr,iLength);
   

    return 0;
}