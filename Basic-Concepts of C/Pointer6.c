#include<stdio.h>

int main()
{
    int No = 11;
    int *p = NULL;

    p = &No;

    printf("%d\n",*p); // 11

    return 0;
}
