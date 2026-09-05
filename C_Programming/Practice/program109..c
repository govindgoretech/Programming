#include <stdio.h>

void Display(int Arr[])
{
    printf(" %d\n",Arr[0]);
    printf(" : %d\n",Arr[1]);
    printf(" : %d\n",Arr[2]);
    printf(" : %d\n",Arr[3]);
    printf(" : %d\n",Arr[4]);
}
int main()
{
    int Brr[5]= { 10,20,30,40,50};

    printf("Display the Base Address: %d \n",Brr);
    Display(Brr);
   

    return 0;
}