#include<stdio.h>

int CalculateTcketPrice(int iAge)
{
    //Input Filter
    if(iAge<0)
    {
        return -1;
    }
    if(iAge>=0 && iAge <=5 )
    {
        return 0;
    }
    else if(iAge >=6 && iAge<= 18 )
    {
        return 500;
    }
     else if(iAge >=19 && iAge<= 50 )
    {
        return 900;
    }
    else
    {
        return 400;
    }

}

int main()
{
   int iValue = 0;
   int iRet = 0;
   printf("Please Enter Your Age To Calculate Ticket Price");
   scanf("%d",&iValue);
   iRet = CalculateTcketPrice(iValue);
   printf("Your Ticket Price will be %d ruppes \n",iRet);
   return 0;
}