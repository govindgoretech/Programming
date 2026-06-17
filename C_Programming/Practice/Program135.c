#include <stdio.h>
#include <stdlib.h>




int Maximum(int Arr[],int isize)
{
    
    int iCnt=0;
    int iMax=0;

    iMax=Arr[0];

    for ( iCnt = 0; iCnt < isize; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        { 
           iMax=Arr[iCnt];
         
        }
    }    
 return iMax;      
    
}

int main()
{
    int iLength= 0;
    int iRet =0;
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

     
     
     iRet = Maximum(Brr,iLength);

     printf("Maximum Element is : %d \n",iRet);

     free(Brr);




    return 0;
}