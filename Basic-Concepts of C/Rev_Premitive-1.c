#include<stdio.h>

int main()  // Program execution starts from here
{
    char ch = 'A';

    int no = 11;

    float data = 90.99f;

    double d = 90.8967;

    printf("Value of ch : %c\n",ch);
    printf("Value of no : %d\n",no);
    printf("Value of data : %f\n",data);
    printf("Value of d : %f\n",d);

    printf("Address of ch : %d\n",&ch);
    printf("Address of no : %d\n",&no);
    printf("Address of data : %d\n",&data);
    printf("Address of d : %d\n",&d);

    printf("Size of ch : %d\n",sizeof(ch));
    printf("Size of no : %d\n",sizeof(no));
    printf("Size of data : %d\n",sizeof(data));
    printf("Size of d : %d\n",sizeof(d));

    return 0;
}