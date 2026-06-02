#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}
