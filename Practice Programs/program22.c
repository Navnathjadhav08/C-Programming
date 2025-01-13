#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}


        /*
        iNo = 8;


        iNo % 1 == 0
        iNo % 2 == 0
        iNo % 3 == 0
        iNo % 4 == 0
        iNo % 5 == 0
        iNo % 6 == 0
        iNo % 7 == 0
        iNo % 8 == 0



        */