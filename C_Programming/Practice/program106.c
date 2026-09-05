#include <stdio.h>

void Display(int *iPtr)
{
    printf("Value of iPtr : %d\n",*iPtr);

    iPtr++;

    printf("Value of iPtr : %d\n",*iPtr);

     iPtr++;

    printf("Value of iPtr : %d\n",*iPtr);
}
int main()
{
    int Arr[5]= { 10,20,30,40,50};

    printf("Display the Base Address: %d \n",Arr);
    Display(Arr);
   

    return 0;
}