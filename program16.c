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
        return -1;
    }
    else
    {
        printf("Successfully open file\n");
    }

    lseek(fd,5,0);                     //0--starting point
                                       //1--current point
                                       //2---ending point
    read(fd,Arr,5);
    write(1,Arr,5);

    printf("\n");

    lseek(fd,5,1);

    read(fd,Arr,5);
    write(1,Arr,5);

    printf("\n");
    close(fd);
    return 0;
}