#include <stdio.h>
#include <stdlib.h>

int SumEven(int Arr[],int isize)
{
    int iSum=0;
    int iCnt=0;

    for ( iCnt = 0; iCnt < isize; iCnt++)
    {
        if (Arr[iCnt]%2==0)
        {
            iSum=iSum+Arr[iCnt];
        }
        
    }
    return iSum;
    
}

int main()
{
    int iLength= 0;
    int iRet= 0;
    int *Brr=NULL;
    int iCnt =0;
    printf("Enter the Number of Elements");
    scanf("%d",&iLength);

     Brr= (int*) malloc(sizeof(int)*iLength);

     printf("Enter The Elements: \n");

     for ( iCnt = 0; iCnt < iLength; iCnt++)
     {
        scanf("%d",&Brr[iCnt]);
     }
     
     iRet = SumEven(Brr,iLength);

     printf("Addition is : %d",iRet);

     free(Brr);




    return 0;
}