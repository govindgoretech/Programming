#include<stdio.h>
int CountDiff(int iNo)
{
    int iSumEven=0;
    int iSumOdd=0;
    int iDigit=0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo !=0)
    {
       iDigit= iNo%10;

       if (iDigit%2==0)
       {
         iSumEven=iDigit+iSumEven;
       }

       else
       {
         iSumOdd=iDigit+iSumOdd;
       }

       iNo = iNo/10;
    
    }

    return iSumEven-iSumOdd;
}
int main()
{ 
    int iValue =0;
    int iRet = 0 ;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

    printf("Differnce is: %d ",iRet);
    
    return 0;
}