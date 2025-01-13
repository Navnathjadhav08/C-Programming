/*
    Read the data from the file

    int read(int FD, char *Data, int Size);

    FD : File descriptor returned by open
    Data : Name of array / string which is empty
    Size : Number of bytes that you want to read

    Return Value : Number of bytes succesfully read from the file

*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Fname[30];
    int iRet = 0, iSize = 0;
    char Arr[50] = {'\0'};

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    printf("Enter the number of bytes that you want to read : \n");
    scanf("%d",&iSize);

    fd = open(Fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    
    iRet = read(fd,Arr,iSize);

    printf("%d bytes gets succesfully fetched from the file \n",iRet);

    printf("Data from file is : \n");
    write(1,Arr,iRet);

    close(fd);
    return 0;
}