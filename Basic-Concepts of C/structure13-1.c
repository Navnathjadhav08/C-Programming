#include<stdio.h>

struct Demo
{
    int no;
    char ch1;
    char ch2;
    float f;
    int i;
};

struct Demo
{
    int no;
    char ch1;
    float f;
    char ch2;
    int i;
};

int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));
    
    return 0;
}