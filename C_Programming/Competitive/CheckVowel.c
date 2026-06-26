#include <stdio.h>
#define True 1 
#define False 0

typedef int BOOL;

BOOL CheqVowel(char *str)
{
   
    
    while (*str!='\0')
    {
        if (*str=='a' || *str=='e'||*str=='i'||*str=='o'||*str=='u'||
             *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
        {
           return True;
           
        }
        str++;
        
    }
    return False;
    

}

int main ()
{
    char Arr[20];
    int bRet = False;

    printf("Enter The String: ");     
    scanf("%[^\n]",Arr);

    bRet=CheqVowel(Arr);

   if (bRet==True)
   {
      printf("This String Contains the Vowels");
   }
    else
    {
         printf("This String Can Not Contains the Vowels");
    }
   


    return 0;
}