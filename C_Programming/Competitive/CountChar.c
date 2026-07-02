#include<stdio.h>

int CountChar(char *str, char Alpha)
{
    int iCount=0;
    while (*str!='\0')
    {
        if (*str==Alpha)
        {
            iCount ++;
        }
        
        str++;
        
    }

    return iCount;
    
}

int main()
{
    char Arr[30];
    char ch= '\0';
    int iRet= 0;

    printf("Enter the String: ");
    scanf("%[^\n]",Arr);

    printf("Enter THe Chracter that You Want Count: ");
    scanf(" %c",&ch);

    iRet=CountChar(Arr,ch);

    printf("Total Count Of That Character Is: %d",iRet);

    return 0;

}