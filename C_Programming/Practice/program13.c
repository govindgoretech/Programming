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
    
    
    printf("Enter Number: \n");
    scanf("%d",&iValue);
    
    iRet = CheckEvenOdd(iValue);
    if(iRet==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is Odd");

    }

    return 0;
}