#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool LinearSearch( int Arr[], int iSize)
{
    int iCount= 0,iCnt;

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt]==11)
        {

           iCount++;
        }
    }
    
        return iCount;
    
}

int main()
{
    int  iLength=0,iRet=0, iCnt;
    int *Brr= NULL; 

    printf("Enter the Number of Element You Print: ");
    scanf("%d",&iLength);

    Brr = (int*) malloc(sizeof(int)*iLength);
    
    printf("Enter The %d Elements\n",iLength);

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet=LinearSearch(Brr,iLength);

    printf("Frequncy of 11 is: %d",iRet);

    free (Brr);

    return 0;
}