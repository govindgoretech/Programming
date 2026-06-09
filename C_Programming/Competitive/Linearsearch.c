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
            return true;
            break;
        }
    }
    return false;
    
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

    if (iRet==true)
    {
        printf("Element Is present");
    }
    else
    {
        printf("Element Is not present");
    }

    free (Brr);

    return 0;
}