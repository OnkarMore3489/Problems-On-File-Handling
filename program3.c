#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    char Fname[30]; 
    
    printf("Enter file Name : ");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File Succesfully opened with FD: %d\n",fd);
    }
    return 0;
}