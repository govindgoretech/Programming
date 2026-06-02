#include<stdio.h>
void RangeDisplay(int iStart, int iEnd)
{
    
    int iCount=0;
    
    if (iStart<=iEnd)
    {

       for ( iCount = iStart; iCount <= iEnd; iCount++)
       {
          printf(" %d ",iCount);
       }
       
       
    }
    else
    {
        printf("Invalid Input");
    }

    
}
int main()
{ 
    int iValue1 =0;
    int iValue2 = 0 ;

    printf("Enter First Value");
    scanf("%d",&iValue1);

    printf("Enter Second Value");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    
    return 0;
}