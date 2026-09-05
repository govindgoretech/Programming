#include<stdio.h>
double CircleArea(float fRadius)
{
    float PI = 3.14;
    double Area = 0.0;

    Area = PI*fRadius*fRadius;

    return Area;

}
int main()
{
    float fValue =0.0;
    double dRet = 0.0;
    printf ("Enter The Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    
    printf("Area of the Circle Is: %lf",dRet);

    return 0;
}