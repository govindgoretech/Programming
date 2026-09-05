#include <stdio.h>
void ToggleCase(char*str)
{
    while (*str!='\0')
    {
        if (*str>='A'&&*str<='Z')
        {
        *str=*str+32;
        }
        else if (*str>='a'&&*str<='z')
        {
        *str=*str-32;
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
    printf("Updated String is: %s",Arr);

    return 0;
}