

void DisplayFactor(int ino)
{
    int i=0;
    if (ino<=0)
    {
        ino= -ino;
    }
    

    for(i=1;i<ino;i++)
    {
        if ((ino%i==0) && (i%2 ==0 ))
        {
             printf("%d\n",i);
            
        }
        
       
    }

}

int main()
{
    int iValue=0;
    
    printf("Enter the no:");
    scanf("%d",&iValue);

    DisplayFactor(iValue);


    return 0;

}