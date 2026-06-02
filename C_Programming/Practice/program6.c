/*
Start
     Accept Frist Number As No1
     Accept Second Number AS no2
     Perform Addition of No1 & NO2
     Display The result    
Stop
*/

#include <stdio.h>

int main()
{
    //Variable Creation WIth Default Values
    float i = 0.0f,j = 0.0f,k = 0.0f;
    printf("Enter First Number: \n");
    scanf("%f",&i);

    printf("Enter Second Number: \n");
    scanf("%f",&j);

    k= i+j;

    printf("Addton is : %f\n",k);




    return 0;
}