/*
    Start
         Acccept number As no
         If No is Complty Divisible by2 
            Then Print Even
        Otherwise 
            Print Odd
    Stop

    Start 
         Acccept number As no
         Divide No By 2
         If Reminder is is 0
           Then print even
        Otherwise 
           Print Odd
    Stop       
*/

#include<stdio.h>

int main()
{
    int iValue=0;
    int iRemainder=0;
    
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRemainder = iValue %2;

    if(iRemainder == 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number Is Odd \n");
    }





    return 0;
}