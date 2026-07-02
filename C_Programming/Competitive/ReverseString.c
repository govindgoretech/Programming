#include<stdio.h>
void RevStr(char*Brr)
{
    char *Start=NULL;
    char *End= NULL;
    char Temp='\0';

    Start=Brr;
    
    while (*Brr !='\0')
    {
        Brr++;
    }
    End=Brr-1;

    while (Start<=End)
    {
        Temp =*Start;
        *Start=*End;
        *End=Temp;
        Start++;
        End--;
    }
    
    
}

int main()
{
    char Arr[20];

    printf("Enter THe String: ");
    scanf("%[^\n]",Arr);

    RevStr(Arr);
    printf("Updated String is: %s",Arr);



    return 0;
}