#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    char Arr[]="Hello";

    fd=open("LB17.txt",O_RDWR | O_APPEND);
    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("Successfully open file\n");
    }

    write(fd,Arr,5);
    return 0;
}