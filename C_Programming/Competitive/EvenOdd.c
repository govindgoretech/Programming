#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkEven(int iNO)
{
    if((iNO%2)==0)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    int iValue  = 0;
    BOOL bRet = FALSE;

    printf ("Enter The Number: ");
    scanf("%d",&iValue);
    bRet=(iValue);

    if (bRet==TRUE)
    {
        printf("Number is Even");

    }
    else 
    {
        printf("number is Odd");
    }

    return 0;
}