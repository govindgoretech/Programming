#include <stdio.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL ChkDigit(char Digit)
{
    if( Digit >= 0 && Digit<= 9) 
    {
        return True;
    }

    return False;
}

int main()
{
    char ch = '\0';
    BOOL Bret = False; 

    printf("Enter The Digit: ");
    scanf("%c",&ch);

    Bret =ChkDigit(ch);

    if (Bret==True)
    {
       printf("It is A Digit");
    }
    else
    {
        printf("It is Not A Digit");
    }
    


}
