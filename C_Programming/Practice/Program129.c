#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[],int isize)
{
    
    int iCnt=0;
    bool bFlag = false;
    

    for ( iCnt = 0; iCnt < isize; iCnt++)
    {
        if(Arr[iCnt]==11)
        {
           bFlag=true;
           break;
        }
        
    }
    return bFlag;
    
}

int main()
{
    int iLength= 0;
    bool bRet=false;
    int *Brr=NULL;
    int iCnt =0;

    printf("Enter the Number of Elements:\n ");
    scanf("%d",&iLength);

    Brr= (int*) malloc(sizeof(int)*iLength);

     printf("Enter The Elements:  \n");

     for ( iCnt = 0; iCnt < iLength; iCnt++)
     {
        scanf("%d",&Brr[iCnt]);
     }
     
     bRet = LinearSearch(Brr,iLength);

     if (bRet== true)
     {
        printf("Element is present \n");
     }
     else
     {
        printf("Element is not present \n");

     }

     free(Brr);




    return 0;
}