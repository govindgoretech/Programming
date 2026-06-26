#include <stdio.h>

void DisplayASCI(char ch)
{
    
    
       printf( "Decimal:%d\t HexaDecimal:%X\t Octal:%o\n ",ch,ch,ch);
    
    
}
int main()
{
    char ch ='\0';

    printf("Enter The Character: ");
    scanf("%c",&ch);

    DisplayASCI(ch);


    return 0;
}