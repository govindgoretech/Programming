#include <stdio.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL ChkSpecialchar(char Alpha)
{
    if(Alpha>=32 && Alpha<=47||
       Alpha>=58 && Alpha<=64||
       Alpha>=91 && Alpha<=96||
       Alpha>=123 && Alpha<=126 ) 
    {
        return True;
    }

    return False;
}

int main()
{
    char ch = '\0';
    BOOL Bret = False; 

    printf("Enter The Special Character: ");
    scanf("%c",&ch);

    Bret = ChkSpecialchar(ch);

    if (Bret==True)
    {
       printf("It is A Special Character");
    }
    else
    {
        printf("It is Not A SpecialCharater");
    }
    


}
