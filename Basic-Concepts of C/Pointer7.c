#include<stdio.h>

int Addition(int No1, int No2)          // 1000 from text section
{
    int Ans = 0;

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    int Value1 = 10, Value2 = 11;
    int Ret = 0;

    int (*ptr)(int , int);

    ptr = Addition;

    // Ret = Addition(Value1,Value2);

    Ret = ptr(Value1,Value2);
    
    printf("%d\n",Ret); // 21

    return 0;
}

/*

                            int Addition( int , int )


                            int (*ptr) ( int , int )


                            // ptr is a pointer which holds address of functoin
                            // that function will accespt 2 parameters both re integer
                            // and the function will return integer

*/