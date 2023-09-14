#include<stdio.h>

int main()
{
    int No = 11;
    int *p = &No;
    int **q = &p;
    int ***r = &q;
    int ****a = &r;
    int *****b = &a;
    int ******c = &b;

    return 0;
}












/*

sizeof(No);     // 4
&No;             // 100
&a;             // 500
sizeof(r);      // 8
sizeof(c);      // 8
sizeof(*p);      // 4
&q              // 300
&c;             // 700
*p              // 11
**q             // 11
****b;          // 100
******c;        // 11
**c;            // 400


*/