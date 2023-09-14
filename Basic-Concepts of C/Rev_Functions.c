                #include<stdio.h>

                int Multiplication(int A, int B)
                {
                    int Ans = 0;

                    Ans = A * B;

                    return Ans;
                }

                int main()
                {
                    int No1 = 10;
                    int No2 = 11;

                    int Ret = 0;

                    Ret = Multiplication(No1,No2);

                    printf("Multiplication is : %d\n",Ret);

                    return 0;
                }