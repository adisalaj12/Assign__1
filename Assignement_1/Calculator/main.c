#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float sumation(float a, float b);
float substraction (float a, float b);
float multiplication (float a, float b);
float  division (float a, float b);
float power (float a, float b);
float square_root (float a);

float sumation(float a,float b)
{
    return a+b;
}


float substraction(float a, float b)
{
    return a-b;
}


float multiplication( float a, float  b)
{
    return a*b;
}


float division( float a, float b)
{
    return a/b;
}


float power(float a, float  b)
{
    int result;
    result=pow(a,b);
    return result;
}


float square_root(float a)
{
    float result;
    result= sqrt(a);
    return result;
}



int main() {
    float number1, number2;
    int num;

    printf("Type 1 for sumation. \n");
    printf("Type 2 for substraction. \n");
    printf("Type 3 for multiplication.  \n");
    printf("Type 4 for division. \n");
    printf("Type 5 for power. \n");
    printf("Type 6 for square root. \n");


    scanf("%d ", &num);
    switch (num)
    {
        case 1:
            scanf("%f %f",&number1, &number2);
            printf("%f",sumation(number1,number2));
            break;

        case 2:
            scanf("%f %f",&number1, &number2);
            printf("%f",substraction(number1,number2));
            break;

        case 3:
            scanf("%f %f",&number1, &number2);
            printf("%f",multiplication(number1,number2));
            break;


        case 4:
            scanf("%f %f",&number1, &number2);
            printf("%.2f",division(number1,number2));
            break;

        case 5:
            scanf("%f %f",&number1, &number2);
            printf("%.1f",power(number1,number2));
            break;

        case 6:
            scanf("%f",&number1);
            printf("%.3f",square_root(number1));
            break;

    }

    return 0;
}
