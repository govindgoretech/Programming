#include <stdio.h>
#include <stdlib.h>
int Difference(int Arr[],int iLength)
{
    int i = 0;
    int iEvenSum=0;
    int iOddSum=0;
    for (i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        { 
            iEvenSum=Arr[i]+iEvenSum;
            
        }
        else
        {
            iOddSum=Arr[i]+iOddSum;


        }
        
    }
    printf("Evensum :%d\n",iEvenSum);
    printf("Oddsum:%d\n",iOddSum);

    return (iEvenSum-iOddSum) ;
    

}
int main()
{
    int isize =0; 
    int iRet=0,iCnt=0;
    int*p=NULL;

    printf("Enter the number of Element: ");
    scanf("%d",&isize);

    p=(int*)malloc(isize*sizeof(int));

    if (p==NULL)
    {
       printf("Unable to allocate the memory");
       return -1;
    }

    printf("Enter the Element %d \n",isize);

    for ( iCnt = 0; iCnt < isize; iCnt++)
    {
        printf("Enter the Element: ");
        scanf("%d",&p[iCnt]);
    }
    iRet=Difference(p,isize);

    printf("Difference is: %d",iRet);

    free(p);


   
    
   return 0; 

}