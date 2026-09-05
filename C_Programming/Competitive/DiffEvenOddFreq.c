#include <stdio.h>
#include <stdlib.h>

int DifEvenOdd(int Arr[], int iSize)
{
    int iCnt,  iCountEven=0, iCountOdd=0;

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt] % 2 ==0)
        {
           iCountEven++;
        }
        else
        {
           iCountOdd++; 
        }
    }
    return (iCountEven-iCountOdd);
    
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

    iRet=DifEvenOdd(Brr,iLength);

    printf("Difference Between Frequency of Even Odd is: %d ",iRet);

    free (Brr);

    return 0;
}