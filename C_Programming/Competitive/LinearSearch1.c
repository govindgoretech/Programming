#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool LinearSearch( int Arr[], int iSize, int iValue)
{
    int iCount= 0,iCnt;

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt]==iValue)
        {
            return iCnt;
            break;

        }
    }
    
        return -1;
    
}
int main()
{
    int  iLength=0, iNo=0, iRet=0, iCnt;
    int *Brr= NULL; 

    printf("Enter the Number of Element You Print: ");
    scanf("%d",&iLength);

    Brr = (int*) malloc(sizeof(int)*iLength);
    if (Brr==NULL)
    {
        printf("Unable to Aloocate");
        return -1;
    }
    
    printf("Enter The %d Elements\n",iLength);

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter the No You Want To Search: ");
    scanf("%d",&iNo);

    iRet=LinearSearch(Brr,iLength,iNo);

    if (iRet>=0)
    {
        printf("Elemnt is Present on index: %d",iRet);
    }
    else
    {
         printf("Element is Not Present");

    }

    free (Brr);

    return 0;
}