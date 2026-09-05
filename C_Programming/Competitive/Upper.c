#include <stdio.h>
void UpperCase(char*str)
{
    
    while (*str!='\0')
    {
        if (*str>='a'&& *str<='z')
        {
           *str = *str-32;
            
        }
        str++;
        
    }
    
    

}

int main()
{
   char Arr[50];

   printf("Enter The String:");
   scanf("%[^\n]",Arr);
   UpperCase(Arr);
   printf("Updated String is:%s",Arr);

    return 0;
}