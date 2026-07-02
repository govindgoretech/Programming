#include <stdio.h>
int WhiteSpace(char*str)
{
    int iCount=0;
    while (*str!='\0')
    {
        if (*str==' ')
        {
            iCount++;
        
        }
        str++;
        
    }
    return iCount;
    
}

int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter The String: ");
    scanf("%[^\n]",Arr);

    iRet=WhiteSpace(Arr);
    printf("Total White Spaces Are: %d",iRet);
    
    return 0;
}