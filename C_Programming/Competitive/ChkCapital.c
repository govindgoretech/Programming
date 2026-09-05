#include <stdio.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL ChkCapital(char Alpha)
{
    if( Alpha >= 'A' && Alpha<= 'Z') 
    {
        return True;
    }

    return False;
}

int main()
{
    char ch = '\0';
    BOOL Bret = False; 

    printf("Enter The Character: ");
    scanf("%c",&ch);

    Bret = ChkCapital(ch);

    if (Bret==True)
    {
       printf("It is A Capital Character");
    }
    else
    {
        printf("It is Not A Capital Charater");
    }
    


}
