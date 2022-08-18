#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    int fd=0,iCnt=0,iRet=0,i=0;
    char Fname[20];
    char Buffer[10];

    printf("Enter the File Name : ");
    scanf("%s",Fname);
    
    fd=open(Fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        for(i=0;i<iRet;i++)
        {
            if((Buffer[i]=='a') || (Buffer[i]=='e') || (Buffer[i]=='i') || (Buffer[i]=='o') || (Buffer[i]=='u'))
            {
                iCnt++;
            }
        }
    }
    printf("Number of vowels is : %d",iCnt);
    return 0;
}