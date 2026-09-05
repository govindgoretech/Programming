#include <stdio.h>

void Display(int iNo)
{
    if (iNo<=0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        if (iCnt%2 !=0)
        {
            printf("%d \n",iCnt);
        }
        
    }
}
int main()
 {
    int iValue = 0;
    printf ("Enter the Number : ");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
 }