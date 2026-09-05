#include <stdio.h>

int Mult(int iNo)
{
    if (iNo<=0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    
    for (iCnt=1; iCnt<=5; iCnt++)
    {
        
        
        printf("%d\n",iCnt*iNo);

    }
}   
int main()
 {
    int iValue = 0;
     
    printf ("Enter the Number : ");
    scanf("%d",&iValue);

   Mult(iValue);
    


    return 0;
 }