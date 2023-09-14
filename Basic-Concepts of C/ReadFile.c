#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD = 0;
    char Data[30] = {'\0'};

    printf("Enter file name that you want to open : \n");
    scanf("%s",Name);

    FD = open(Name,O_RDWR);
    if(FD == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully opened\n");
    }
    read(FD,Data,5);

    printf("Data from file is : \n");
    write(1,Data,5);
    
    close(FD);

    return 0;
}
