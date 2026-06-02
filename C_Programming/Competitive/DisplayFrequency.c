#include <stdio.h>

void Display(int iNo, int ifrequency)
{
    int i =0;
    for ( int i = 0; i < ifrequency; i++)
    {
        printf("VIRAT%d \n",iNo );
      
    }
    
}

int main()
{
    int iValue = 0;
    int iCount=0;

    printf("enter the NUmber: ");
    scanf("%d",&iValue);

    printf("Enter the Frequency: ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    
    
    
    return 0;


}