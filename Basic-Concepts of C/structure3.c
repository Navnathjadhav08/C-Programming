#include<stdio.h>

struct demo
{
	int i;
	int f;
	int *ip;
	float *fp;
	
};

int main()
{
	struct demo obj;
	int no = 90;
	float f =90.90;
	
	obj.i =11;
	obj.f = 21;
	obj.ip = &no;
	obj.fp= &f;
	
	printf("%d\n ",obj.i);
	printf("%d\n ",obj.f);
    printf("%d\n ",(obj.ip));
	printf("%d\n ",(obj.fp));
	return 0;
	
}
