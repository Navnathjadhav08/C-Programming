        #include<stdio.h>

        int Addition(int A, int B)
        {
            int Result = 0;

            Result = A + B;

            return Result;
        }

        int main()
        {
            int No1 = 10;
            int No2 = 11;
            int Ans = 0;

            Ans = Addition(No1,No2);

            printf("%d",Ans);
            
            return 0;
        }