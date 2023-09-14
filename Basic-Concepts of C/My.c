#include<stdio.h>
#include "heder.h"

int main()
{
    struct Demo obj;

    printf("Inside main\n");
    printf("Rate of intrest is %f\n",ROI);  // 10.7
    printf("Fees of Logic Building batch : %d\n",FEES); // 18200
    printf("Size of demo structure : %d\n",sizeof(obj));    // 8

    return 0;
}



//  1       #include<_____.h>       -> Inbuilt header files

//  2       #include "_____.h"      -> Userdefined header files



#define MACRO_NAME  MACRO_VALUE


//Examples

#define MAX 90
#define DOZEN 12
#define SHEKADA 100
#define PI 3.14