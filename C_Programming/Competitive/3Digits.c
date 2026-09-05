#include <stdio.h>
#include <stdlib.h>

void Digits( int Arr[], int iSize)
{
    int iCount= 0,iCnt; 

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt]<1000 && Arr[iCnt]>99 )
        {
            printf(" %d ",Arr[iCnt]);
            
            
        }
    }
    
    
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

    Digits(Brr,iLength);

   

    free (Brr);

    return 0;
}