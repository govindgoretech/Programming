#include <stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt=0;
    char ch='\0';

    for ( iCnt = 0, ch='A'; iCnt < iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
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