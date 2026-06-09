#include <stdio.h>
#include <stdlib.h>

int Maximum( int Arr[], int iSize)
{
    int iCount= 0,iCnt, iMax=Arr[0];

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt]>= iMax)
        {
            iMax=Arr[iCnt];
            
        }
    }
    return iMax;
    
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

    iRet=Maximum(Brr,iLength);

    printf("Maximmum No Is: %d",iRet);

    free (Brr);

    return 0;
}