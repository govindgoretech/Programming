#include<stdio.h>
double FeettoSQMeter(int iSqfeet)
{
    double dSqFactor = 0.0929;
    double dResult = 0.0;

    dResult=iSqfeet*dSqFactor;

    return dResult;

}
int main()
{
     int iValue =0.0;
    double  dRet = 0.0;
    printf ("Enter The SQFeet: ");
    scanf("%d",&iValue);

    dRet = FeettoSQMeter(iValue);
    
    printf("%lf Square Meter",dRet);

    return 0;
}