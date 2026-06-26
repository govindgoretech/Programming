#include <stdio.h>

void ChkCapital(char Div)
{
    if( Div == 'A' ) 
    {
    printf("Your Exam at 7am\n");
       
    }

    else if( Div == 'B' ) 
    {
    printf("Your Exam at 8.30am\n");
       
    }
    else if( Div == 'C' ) 
    {
    printf("Your Exam at 9.20am\n");
       
    }
    else if( Div == 'D' ) 
    {
    printf("Your Exam at 10.30am\n");
       
    }


    
}

int main()
{
    char ch = '\0';
    

    printf("Enter The Division: ");
    scanf("%c",&ch);

   ChkCapital(ch);

    
    

    return 0;
}
