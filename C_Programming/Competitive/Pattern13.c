#include <stdio.h>

void DisplayPattern(int iRow, int iCol )
{
    int i=0;
    int j =0;
    char ch1 ='\0';
   

    for ( i = 1, ch1='A'; i <= iRow; i++)
    {
        for(j=1; j<=iCol;j++)
        {
            printf("%c\t",ch1); 
           
        }
        ch1++;
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