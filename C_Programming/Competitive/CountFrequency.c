#include<stdio.h>

int CountLessthanSix(int iNo)
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
       

      if (iDigit<6)
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
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet=CountLessthanSix(iValue);

    printf("Frequency of less than 6 no is: %d ",iRet);
     
    return 0;
}