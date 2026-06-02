#include<stdio.h>
double KMtoMeter(int iKM)
{
    int iMeter = 1000;
    int iResult = 0;

    iResult=iKM*iMeter;

    return iResult;

}
int main()
{
     int iValue =0.0;
    int  iRet = 0.0;
    printf ("Enter The Kilometer: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    
    printf("%dMeter",iRet);

    return 0;
}