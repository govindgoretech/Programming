#include <stdio.h>
#define True 1
#define False 0

typedef int Bool;

Bool ChekAlpha(char *str, char Alpha)
{
    while (*str!='\0')
    {
        if(*str==Alpha)
        {
            return True;
            break;
        }
        str++;
    }
    return False;
    
}
int main()
{
    char Arr[20];
    char ch='\0';
    Bool bRet = False;

    printf("Enter the String: ");
    scanf("%[^\n]",Arr);

    printf("Enter The Character That You Want To Search: ");
    scanf(" %c",&ch);

    bRet=ChekAlpha(Arr,ch);

    if (bRet == True)
    {
        printf("Character is Present");
    }
    else
    {
        printf("Element is Not Present");
    }


    return 0;
}