#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Data[]="Marvellous Infosystems"; 
    
    printf("Enter file Name : ");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;  //Return to os
    }
    else
    {
        printf("File Succesfully opened with FD: %d\n",fd);
    }

    iRet=write(fd,Data,22);

    printf("%d bytes gets succesfuly written in the file\n",iRet);
    return 0;
}