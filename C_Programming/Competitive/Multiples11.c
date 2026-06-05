#include <stdio.h>
#include <stdlib.h>
int Divisible(int Arr[],int iLength)
{
    int i = 0;
    
    printf(" Multiples By 11 Value is: \n");
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] % 11 == 0)
        {
           printf("%d\n",Arr[i]);
        }
        
    }

}
int main()
{
    int isize =0; 
    int iCnt=0;
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
    Divisible(p,isize);

    free(p);

    return 0; 

}