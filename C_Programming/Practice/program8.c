#include<stdio.h>

float AddTwoNumbers(float fNo1, float fNo2)
{
    float fAns = 0.0f;
    fAns = fNo1+fNo2;
    return fAns;
}

int main()
{
    float fValue1 = 0.0f;                    //To Store First Number
    float fValue2 = 0.0f;                    //to Store Second Number
    float fResult = 0.0f;                    //to Store Result

    printf("Enter First Number: \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number: \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1,fValue2);             //Perform Addition

    printf("Addition is : %f\n",fResult);




    return 0;
}