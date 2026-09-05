#include<stdio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iCount=0;
    int iDigit=0;

    while (iNo !=0)
    {
       iDigit= iNo%10;

       if (iDigit==0)
       {
         return True;
       }
       
       iNo =iNo/10;
    
    }

    
}
int main()
{ 
    int iValue =0;
    BOOL bRet = False;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet=CheckZero(iValue);

    if (bRet==True)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is No Zero");
    }
    

    
    
    return 0;
}