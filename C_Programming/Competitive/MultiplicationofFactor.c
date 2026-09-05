#include<stdio.h>

int MultFactor(int ino)
{
    int i=0;
    int iMult =1;
    if (ino<=0)
    {
        ino= -ino;
    }
    

    for(i=1;i<=(ino/2);i++)
    {
        if ((ino%i==0))
        {
             iMult = iMult*i;
            
        }
      
    }
    return iMult;

}

int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("Enter the no:");
    scanf("%d",&iValue);

    iRet = MultFactor(iValue);

    printf("%d",iRet);


    return 0;

}