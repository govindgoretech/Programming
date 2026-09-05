#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[],int isize)
{
    
    int iCnt=0;
    int iMin=0;

    iMin=Arr[0];

    for ( iCnt = 0; iCnt < isize; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        { 
           iMin=Arr[iCnt];
         
        }
    }    
 return iMin;      
    
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

     
     
     iRet = Minimum(Brr,iLength);

     printf("Minimum Element is : %d \n",iRet);

     free(Brr);




    return 0;
}