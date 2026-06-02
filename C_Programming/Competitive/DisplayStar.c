#include <stdio.h>

void Display(int iNo)
{
    int iCnt= 0;

    while (iCnt<iNo)
    {
        printf("*\n");
        iCnt++;

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