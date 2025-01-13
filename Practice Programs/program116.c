/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   a   a   a   a
    b   b   b   b   b
    c   c   c   c   c
*/  

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    //    1       2        3
    for(i = 1, ch = 'a'; i<= iRow; i++, ch++)   // Outer
    {   //    1         2       3 
        for(j = 1; j <= iCol; j++)  // Inner
        {
            printf("%c\t",ch);  // 4
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}