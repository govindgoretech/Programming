#include <stdio.h>
#include <stdlib.h>

void  DisplayRange( int Arr[], int iSize,int iValue1 ,int iValue2)
{
    int iCount= 0,iCnt;

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]>=iValue1 && Arr[iCnt]<=iValue2)
        {
            printf("%d \n",Arr[iCnt]);
        }
       
    }
    
    
}

int main()
{
    int  iLength=0, iCnt, iStart=0 , iEnd=0;
    int *Brr= NULL; 

    printf("Enter the Number of Element You Print: ");
    scanf("%d",&iLength);

    Brr = (int*) malloc(sizeof(int)*iLength);
    
    printf("Enter The %d Elements\n",iLength);

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter the Starting Point: ");
    scanf("%d",&iStart);

    printf("Enter the End Point: ");
    scanf("%d",&iEnd);



    DisplayRange(Brr,iLength,iStart,iEnd);

    

    free (Brr);

    return 0;
}