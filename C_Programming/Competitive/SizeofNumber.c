#include <stdio.h>

void Number(int iNo)
{
    if (iNo<=50)
    {
        printf("The Number is small");

    }
    else if(iNo>50 && iNo<=100)
    {
        printf("The number Is medium");

    }
    else
    {
        printf("The Number Is Large");
    }
    
}   
int main()
 {
    int iValue = 0;
     
    printf ("Enter the Number : ");
    scanf("%d",&iValue);

   Number(iValue);
    


    return 0;
 }