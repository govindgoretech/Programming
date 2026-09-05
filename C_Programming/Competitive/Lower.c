#include <stdio.h>
void LowerCase(char*str)
{
    
    while (*str!='\0')
    {
        if (*str>='A'&& *str<='Z')
        {
           *str = *str+32;
            
        }
        str++;
        
    }
    
    

}

int main()
{
   char Arr[50];

   printf("Enter The String:");
   scanf("%[^\n]",Arr);
   LowerCase(Arr);
   printf("Updated String is:%s",Arr);

    return 0;
}