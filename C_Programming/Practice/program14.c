#include<stdio.h>

int CheckEvenOdd(int iNo)
{
    int iRemainder=0;

    iRemainder = iNo %2;

    return iRemainder;

}

int main()
{
    int iValue=0;
    int iRet =0;
    
    
    printf("Enter Number to check whether it is Even or Odd: ");
    scanf("%d",&iValue);
    
    iRet = CheckEvenOdd(iValue);
    if(iRet==0)
    {
        printf("%d is even",iValue);
    }
    else
    {
        printf("%d is Odd",iValue);

    }

    return 0;
}