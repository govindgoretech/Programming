#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%s",Arr);    // ISSUE

    printf("Entered string is : %s\n",Arr);

    return 0;
}