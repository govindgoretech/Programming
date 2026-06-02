#include<stdio.h>
double RectArea(float fHeight,float fWidth)
{
    
    double Area = 0.0;

    Area = fWidth*fHeight;

    return Area;

}
int main()
{
    float fValue1 =0.0;
    float fValue2 =0.0;
    double dRet = 0.0;

    printf ("Enter The Height: \n");
    scanf("%f",&fValue1);

    printf ("Enter The Width: \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    
    printf("Area of the Rectangle  Is: %lf",dRet);

    return 0;
}