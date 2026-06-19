#include <stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i=0, j=0;

    

    for( i = 1; i <= iRow; i++)
    {
        if (iRow!=iCol)
    {
        printf("Invalid Input \n");
        printf("Number Of Row And No Of Column Should be Same\n");
        break;
    }
        for ( j = 1; j <= iCol; j++)
        {
            if (i==1||i==iRow||j==1||j==iCol)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("@\t");
            }
            
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