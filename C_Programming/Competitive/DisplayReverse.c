#include <stdio.h>

void DisplayReverse(char *str)
{
   
    char *Start=NULL;
    char *End = NULL;
    char Temp ='\0';

    Start=str;
    
    while (*str!='\0')
    {
        str++;   
        
    }
    str--;

    End=str;
    


    while(End>Start)
    {
       Temp=*Start;
       *Start=*End;
       *End=Temp;

        Start++;
        End--;
        
    }
}

int main ()
{
    char Arr[20];
    int iRet =0;

    printf("Enter The String: ");     
    scanf("%49[^\n]",Arr);

    DisplayReverse(Arr);

    printf("Updated String is: %s",Arr);

    

    return 0;
}