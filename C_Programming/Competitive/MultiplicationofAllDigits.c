#include<stdio.h>
int MultDigits(int iNo)
{
    int iMult=1;
    int iDigit=0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo !=0)
    {
       iDigit= iNo%10;

       if (iDigit!=0)
       {
        iMult= iDigit*iMult;
       }
    

       iNo =iNo/10;
    
    }

    return iMult;
}
int main()
{ 
    int iValue =0;
    int iRet = 0 ;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);

    printf("%d",iRet);
    
    return 0;
}