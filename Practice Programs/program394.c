/*
    Write the data into the file

    int write(int FD, char *Data, int Size);

    FD : File descriptor returned by open
    Data : Name of array / string which conrtains the data that you want to write
    Size : Number of bytes that you want to write

    Return Value : Number of bytes succesfully written in the file

*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];
    int iRet = 0;
    char Arr[] = "abcdefghijklmnopqrstuvwxyz";

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    
    iRet = write(fd,Arr,10);

    printf("%d bytes gets succesfully written in the file \n",iRet);
    close(fd);
    return 0;
}