#include <stdio.h>
#include <stdlib.h>

int Minimum( int Arr[], int iSize)
{
    int iCount= 0,iCnt, iMin=Arr[0];

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt]<= iMin)
        {
            iMin=Arr[iCnt];
            
        }
    }
    return iMin;
    
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

    iRet=Minimum(Brr,iLength);

    printf("Minimum No Is: %d",iRet);

    free (Brr);

    return 0;
}