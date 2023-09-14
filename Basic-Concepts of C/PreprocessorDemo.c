#include<stdio.h>

#define PI 3.14

int main()  // Entry point function
{
    float Ans = 0.0f;
    float Rad = 9.0f;

    Ans = PI * Rad * Rad;

    printf("Area is : %f\n",Ans);

    return 0;
}