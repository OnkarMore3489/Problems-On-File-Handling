#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    char Arr[10];

    fd=open("LB17.txt",O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("Successfully open file\n");
    }

    read(fd,Arr,5);
    write(1,Arr,5);
    return 0;
}