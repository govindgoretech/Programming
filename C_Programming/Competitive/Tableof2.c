#include<stdio.h>

void Display(int no)
{
    int i=1;

    for(i=1;i<no;i++)
    {
        printf("%d\n",i*2);
    }

}

int main()
{
    int iValue=0;
    
    printf("Enter the no:");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;

}