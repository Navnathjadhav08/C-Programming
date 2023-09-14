#include<stdio.h>

int main()
{

    int No1 = 10;
    int *ptr = &No1;

    float Data = 90.9;
    float *fptr = &Data;

    char ch = 'A';
    char *cptr = &ch;

    printf("No1 : %d\n",No1); // 10
    printf("&No1 : %d\n",&No1); // 100
    printf("ptr : %d\n",ptr);   // 100
    printf("&ptr : %d\n",&ptr); // 400
    printf("*ptr : %d\n",*ptr); // 10
    printf("sizeof(No1) : %d\n",sizeof(No1)); // 4
    printf("sizeof(ptr) : %d\n",sizeof(ptr)); // 8

    return 0;
}
