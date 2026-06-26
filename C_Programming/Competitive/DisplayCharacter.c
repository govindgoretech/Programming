#include <stdio.h>

void DisplayCharacter(char Character)
{
    if (Character>='A' && Character<='Z' )
    {
       printf("%c",Character+32);
    }
    else if (Character>='a' && Character<='b' )
    {
       printf("%c",Character-32);
    }
    
    
}
int main()
{
    char ch= '\0';

    printf("Enter The Character: ");
    scanf("%c",&ch);

    DisplayCharacter(ch);


    return 0;
}