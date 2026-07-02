#include<stdio.h>

int LastOcuranceChar(char *str, char Alpha)
{
    int iIndex=-1;
    int i=0;
    for ( i=0;*str!='\0';str++,i++)
    {
        if (*str==Alpha)
        {
            iIndex=i;   
        }
        

    }

    return iIndex;
    
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

    iRet=LastOcuranceChar(Arr,ch);

    if (iRet==-1)
    {
        printf("Character is not Present in This String ");
    }
    
    else
    {
        printf("last Occurance of that Of That Character Is: %d",iRet);
    }
    return 0;

}