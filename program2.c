#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
int main()
{
    int fd=0;
    char Fname[30]; 
    
    printf("Enter file Name : ");
    scanf("%s",Fname);

    fd=creat(Fname,0777);

    if(fd==-1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("file Succesfully created\n");
    }
    return 0;
}