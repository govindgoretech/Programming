#include<stdio.h>

void Display(int iNo)
{
    //Filter
    if(iNo <0)
    {
        printf("Invalid aainput");
        return;
     
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)

    {
        printf("%d \n",iCnt);

    }
}
int main()
{
   
    
    int iValue = 0;

    printf("Enter The Frequency\n");
    scanf("%d",&iValue);

    Display(iValue);
    
   return 0;
   
}