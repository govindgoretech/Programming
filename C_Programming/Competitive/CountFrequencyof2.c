#include<stdio.h>

int CountTwo(int iNo)
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
       

      if (iDigit==2)
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

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);

    printf("Frequency fo 2 is: %d ",iRet);
     
    return 0;
}