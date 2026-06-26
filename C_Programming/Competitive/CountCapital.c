#include <stdio.h>

int CountCapital(char *str)
{
   
    int iCount =0;
    while (*str!='\0')
    {
        if (*str>='A' && *str<='Z')
        {
           iCount++;
           
        }
        str++;
        
    }
    return iCount;
    

}

int main ()
{
    char Arr[20];
    int iRet =0;

    printf("Enter The String: ");     
    scanf("%[^\n]",Arr);

    iRet=CountCapital(Arr);

    printf("Capital lettrs Are: %d ",iRet);


    return 0;
}