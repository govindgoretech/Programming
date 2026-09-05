#include <stdio.h>

void Display(char Character)
{
    char ch='\0';
    if (Character>='A' && Character<='Z' )
    {
        for ( ch=Character; ch <='Z'; ch++)
        {
            printf("%c\t",ch);
        
        }
    
   }
    else if (Character>='a' && Character<='z' )
    {
         for ( ch=Character; ch <='z'; ch++)
        {
            printf("%c\t",ch);
        
        }
       
    }
    
    
}
int main()
{
    char ch= '\0';

    printf("Enter The Character: ");
    scanf("%c",&ch);

    Display(ch);


    return 0;
}