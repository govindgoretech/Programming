#include <stdio.h>

int DifFrequency(char *str)
{
   
    int iCount1 = 0;
    int iCount2 = 0;
    while (*str!='\0')
    {
        if (*str>='A' && *str<='Z')
        {
           iCount1++;
           
        }
        else if (*str>='a' && *str<='z')
        {
           iCount2++;
           
        }
        str++;
        
    }
    return iCount2-iCount1;
    

}

int main ()
{
    char Arr[20];
    int iRet =0;

    printf("Enter The String: ");     
    scanf("%[^\n]",Arr);

    iRet=DifFrequency(Arr);

    printf("Differnce of Captial And Small Frequency: %d ",iRet);


    return 0;
}