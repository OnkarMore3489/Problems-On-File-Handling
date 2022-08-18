#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    int fd=0,iRet=0;
    char Fname[20];

    printf("Enter the File Name : ");
    scanf("%s",Fname);
    
    fd=open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    iRet=lseek(fd,0,2);
    
    printf("File size is : %d",iRet);
    return 0;
}