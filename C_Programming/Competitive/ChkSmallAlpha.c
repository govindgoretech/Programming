#include <stdio.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL ChkAplhabet(char Alpha)
{
    if(Alpha>= 'a' && Alpha<= 'z') 
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

    Bret = ChkAplhabet(ch);

    if (Bret==True)
    {
       printf("It is A Small Case of Character");
    }
    else
    {
        printf("It is Not A Small Case Charater");
    }
    

   return 0;
}
