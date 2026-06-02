#include <stdio.h>

void Number(int iNo)
{
   if (iNo<0)
   {
      iNo=-iNo;
   }

   char *Arr[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

   if (iNo<=9 && iNo>=0)
   {
       printf("%s",Arr[iNo]);
   
   }
   else 
   {
      printf("Invalid Number");
   }
   
   
    
}   
int main()
 {
    int iValue = 0;
     
    printf ("Enter the Number : ");
    scanf("%d",&iValue);

   Number(iValue);
    


    return 0;
 }