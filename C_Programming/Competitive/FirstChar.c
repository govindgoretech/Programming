#include<stdio.h>

int FirstChar(char *str, char Alpha)
{
    
    for (int i=0;*str!='\0';str++,i++)
    {
        if (*str==Alpha)
        {
            return i;
        }
        
        
        
    }

    return -1;
    
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

    iRet=FirstChar(Arr,ch);

    if (iRet==-1)
    {
        printf("Character is not Present in This String ");
    }
    
    else
    {
        printf("Index Of That Character Is: %d",iRet);
    }
    return 0;

}