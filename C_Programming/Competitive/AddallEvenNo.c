#include<stdio.h>
int RangeSum(int iStart, int iEnd)
{
    int iCount=0;
    int iAddition=0;
    

    if (iStart<=iEnd && iStart>=0)
    {
        

       for ( iCount = iStart; iCount <= iEnd; iCount++)
       {
        if (iCount%2==0)
        {
            iAddition=iCount+iAddition; 

        }
          
       }
         return iAddition;
       
    }

    else
    {
        printf("Invalid Input\n");
        return 0;
    }

    
}
int main()
{ 
    int iValue1 =0;
    int iValue2 = 0 ;
    int iRet =0;

    printf("Enter First Value: ");
    scanf("%d",&iValue1);

    printf("Enter Second Value: ");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    printf("Adition All Even No iS : %d ",iRet);
    
    return 0;
}