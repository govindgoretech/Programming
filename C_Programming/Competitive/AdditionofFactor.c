#include<stdio.h>

int AddFactor(int iNo)
{
    int i = 0;
    int iAdd = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= (iNo / 2); i++)
    {
        if(iNo % i != 0)   // For Non-Factor
        {
            iAdd = iAdd + i;
        }
    }

    return iAdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = AddFactor(iValue);

    printf("Addition Of All Non Factor Is : %d", iRet);

    return 0;
}