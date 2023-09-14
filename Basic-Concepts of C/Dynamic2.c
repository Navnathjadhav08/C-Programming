#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];        // Static memory allocation

    int size = 0;
    int *ptr = NULL;

    printf("Enter the size of array\n");
    scanf("%d",&size);

    // Step1 : Allocate the memory
    ptr = (int *)calloc(sizeof(int),  size);

    // Step 2 : Use the memory (In logic building batch)

    // Step 3 : Deallocate the memory
    free(ptr);
    
    return 0;
}