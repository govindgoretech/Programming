#include<stdio.h>
int CountRange(int iNo)
{
    int iCount=0;
    int iDigit=0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo !=0)
    {
       iDigit= iNo%10;

       if (iDigit>3&&iDigit<7)
       {
         iCount++;
       }

       iNo =iNo/10;
    
    }

    return iCount;
}
int main()
{ 
    int iValue =0;
    int iRet = 0 ;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);

    printf("%d",iRet);
    
    return 0;
}