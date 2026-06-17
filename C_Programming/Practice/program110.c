#include <stdio.h>

void Display(int Arr[])
{
   int iCnt =0;
    for ( iCnt = 0; iCnt < 5; iCnt++)
    {
       printf(" %d\n",Arr[iCnt]);
    }
}    
    
    
int main()
{
    int Brr[5]= { 10,20,30,40,50};

    printf("Display the Base Address: %d \n",Brr);
    Display(Brr);
   

    return 0;
}