#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    int fd=0;

    fd=open("LB17.txt",O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("Successfully open file\n");
    }

    lseek(fd,10,2);              

    write(fd,"*",1);

    printf("\n");

    close(fd);
    return 0;
}