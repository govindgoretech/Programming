#include<stdio.h>

int DiffFactor(int iNo)
{
    int i = 0;
    int iFactsum = 0;
    int iNonFactsum =0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)   // For Non-Factor
        {
            iNonFactsum = iNonFactsum + i;
        }
        else
        {
            iFactsum = iFactsum+i;
        }
    }

    return (iFactsum - iNonFactsum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = DiffFactor(iValue);

    printf("Difference Is : %d", iRet);

    return 0;
}