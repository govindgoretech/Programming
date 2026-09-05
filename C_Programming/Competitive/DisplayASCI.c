#include <stdio.h>

void DisplayASCI()
{
    int i = 0;
    for ( i = 0; i <=255 ; i++)
    {
       printf("%c\t %d\t %X\t %o\n ",i,i,i,i);
    }
    
}
int main()
{
    DisplayASCI();


    return 0;
}