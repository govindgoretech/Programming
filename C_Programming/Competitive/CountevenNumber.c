#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCount= 0,iCnt;

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt] % 2 ==0)
        {
            iCount++;
        }
    }
    return iCount;
    
}

int main()
{
    int  iLength,iRet, iCnt;
    int *Brr= NULL; 

    printf("Enter the Number of Element You Print: ");
    scanf("%d",&iLength);

    Brr = (int*) malloc(sizeof(int)*iLength);
    
    printf("Enter The %d Elements\n",iLength);

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet=CountEven(Brr,iLength);

    printf("Even No Frequency is: %d ",iRet);

    free (Brr);

    return 0;
}