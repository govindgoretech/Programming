#include <stdio.h>
#include <stdlib.h>

int Difference( int Arr[], int iSize)
{
    int iCount= 0,iCnt, iMax=Arr[0], iMin=Arr[0];

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt] >iMax)
        {
            iMax=Arr[iCnt];
            
        }
    }
    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt]< iMin)
        {
            iMin=Arr[iCnt];
            
        }
    }
    return (iMax-iMin);
    
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

    iRet=Difference(Brr,iLength);

    printf("Difference Is: %d",iRet);

    free (Brr);

    return 0;
}