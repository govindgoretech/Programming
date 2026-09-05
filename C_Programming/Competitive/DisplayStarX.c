#include <stdio.h>

void Display(int iNo)
{
    

    while (iNo>0)
    {
        printf("*\n");
        iNo--;

    }
    


}
int main ()
{
    int iValue=0;
    printf("enter The Number");
    scanf("%d",&iValue);
    Display(iValue);



    return 0;
}