#include <stdio.h>

void DisplayPattern(int iRow, int iCol )
{
    int i=0;
    int j =0,iNo1=1,iNo2=2;
     
   

    for ( i = 1; i <= iRow; i++)
    {
        
        for(j=i; j<=iCol+i-1;j++)
        {
            printf("%d\t",j) ;
        
        }
        
         
       
        printf("\n");
        
    }
    

}
int main()
{
    int iValue1=0, iValue2=0;
    printf("Enter the Row: ");
    scanf("%d",&iValue1);

    printf("Enter the Column: ");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1,iValue2);

    return 0;
}