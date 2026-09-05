#include <stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt=0;
   

    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    

}
int main()
{
    int iValue=0;
    printf("Enter the No of Elements: ");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}