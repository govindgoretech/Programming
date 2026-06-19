#include <stdio.h>

void DisplayPattern(int iRow, int iCol )
{
    int i=0;
    int j =0,iNo=0; 
   

    for ( i = 1; i <= iRow; i++)
    {
        if(i%2==0)
        {
            iNo=1;
        }
        else
        {
            iNo=2;
        }

        for(j=1; j<=iCol;j++)
        {
            printf("%d\t",iNo);
            iNo=iNo+2;
           
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