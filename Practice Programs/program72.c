#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5]; // Static memory

    printf("Enter the elements : \n");

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);  
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);  
    
    printf("Elements of array are : \n");
    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);
    printf("%d\n",Arr[4]);

    return 0;
}