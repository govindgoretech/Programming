#include<stdio.h>
double FhtoCS(float fValue)
{
    
    double dCelsius = 0;

    dCelsius= (fValue-32)*(5.0/9.0);

    return dCelsius;

}
int main()
{
     float fValue =0.0;
    double  dRet = 0.0;
    printf ("Enter The Farenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCS(fValue);
    
    printf("%lf Celsius",dRet);

    return 0;
}