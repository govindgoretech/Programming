#include <stdio.h>

void Display(int Arr[])
{
    printf("Value of iPtr : %d\n",*Arr);

    Arr++;

    printf("Value of iPtr : %d\n",*Arr);

    Arr++;

    printf("Value of iPtr : %d\n",*Arr);
}
int main()
{
    int Brr[5]= { 10,20,30,40,50};

    printf("Display the Base Address: %d \n",Brr);
    Display(Brr);
   

    return 0;
}