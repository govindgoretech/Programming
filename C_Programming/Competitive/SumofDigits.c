#include <stdio.h>
#include <stdlib.h>

void Digits( int Arr[], int iSize)
{
    int iNo= 0,iCnt, iSum=0,iDigit=0; 

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum=0;

        while (iNo!=0)
        {
           iDigit = iNo%10;
            iSum = iSum+iDigit;
            iNo = iNo/10;
           
        }
        printf("%d-> %d\n",Arr[iCnt],iSum);
        
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