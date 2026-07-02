#include <stdio.h>
void ToggleCase(char*str)
{
    while (*str!='\0')
    {
        if (*str>='0'&&*str<='9')
        {
            printf("%c",*str);
        
        }
        str++;
        
    }
    
    
}

int main()
{
    char Arr[20];
    printf("Enter The String: ");
    scanf("%[^\n]",Arr);
    ToggleCase(Arr);
    
    return 0;
}