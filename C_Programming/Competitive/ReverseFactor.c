#include<stdio.h>

void FactRev(int ino)
{
    int i=0;
    if (ino<=0)
    {
        ino= -ino;
    }
    

   for(i=ino/2;i>=1;i--)
    {
        if ((ino%i==0))
        {
             printf("%d\n",i);
            
        }
        
       
    }
   
}

int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("Enter the no:");
    scanf("%d",&iValue);

     FactRev(iValue);

    


    return 0;

}