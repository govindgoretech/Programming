#include <stdio.h>

int main()
{
    //Variable Creation WIth Default Values
    float fValue1 = 0.0f;                    //To Store First Number
    float fValue2 = 0.0f;                    //to Store Second Number
    float fResult = 0.0f;                    //to Store Result


    printf("Enter First Number: \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number: \n");
    scanf("%f",&fValue2);

    fResult = fValue1+fValue2;             //Perform Addition

    printf("Additi on is : %f\n",fResult);




    return 0;
}