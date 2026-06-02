#include <stdio.h>

void pattern(int iNo)
{
    if (iNo<=0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for (iCnt=1; iCnt<iNo; iCnt++)
    {
        printf("$  *\n");
    }
}
int main()
 {
    int iValue = 0;
    printf ("Enter the Number You Print : ");
    scanf("%d",&iValue);

    pattern(iValue);


    return 0;
 }