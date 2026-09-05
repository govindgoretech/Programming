#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCount= 0,iCnt, iFlag=0 ,iProuct=1;

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt] % 2 !=0)
        {
            iProuct = Arr[iCnt] * iProuct;
            iFlag = 1;
            
        }
        
    }
    if (iFlag==0)
    {
        return iFlag;
    }
    return iProuct;
    
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

    printf("Product of odd no  is: %d ",iRet);

    free (Brr);

    return 0;
}