#include<stdio.h>

struct Demo
{
  int i;
  float f;
  double d;
};

union Hello
{
  int i;
  float f;
  double d;
};

union ID_Details
{
  int PAN_NO;
  int AADHAR_NO;
  int PASSPORT_NO;
};

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Size of structure is : %d\n",sizeof(dobj));
    printf("Size of union is : %d\n",sizeof(hobj));

    dobj.i = 11;
    dobj.f = 90.90;
    dobj.d = 90.9999;

    hobj.i = 21;
    return 0;
}
