#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
using namespace std;

class MarvellousFile
{
    public:
       char Fname[20];
       int fd=0;

    public:

       MarvellousFile(char *Name)
       {
           strcpy(Fname,Name);
           fd=open(Fname,O_RDWR);
       }

       ~MarvellousFile()
       {
           close(fd);
       }

       void Display()
       {
           int iRet=0;
           char Buffer[1024];
           
           cout<<"Data From File is : "<<"\n";
           while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
           {
               write(1,Buffer,iRet);
               cout<<"\n";
           }
       }

       int CountCapital()
       {
           int iRet=0,i=0,iCnt=0;
           char Buffer[1024];
           
            while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
           {
              for(i=0;i<iRet;i++)
              {
                  if(Buffer[i]>='A' && Buffer[i]<='Z')
                  {
                      iCnt++;
                  }
              }
           }
           return iCnt;
       }

         int CountSmall()
       {
           int iRet=0,i=0,iCnt=0;
           char Buffer[1024];
           
            while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
           {
              for(i=0;i<iRet;i++)
              {
                  if(Buffer[i]>='a' && Buffer[i]<='z')
                  {
                      iCnt++;
                  }
              }
           }
           return iCnt;
       }

         int CountDigit()
       {
           int iRet=0,i=0,iCnt=0;
           char Buffer[1024];
           
            while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
           {
              for(i=0;i<iRet;i++)
              {
                  if(Buffer[i]>='0' && Buffer[i]<='9')
                  {
                      iCnt++;
                  }
              }
           }
           return iCnt;
       }
};
int main()
{
    char Name[20];
    int iRet=0;

    cout<<"Enter the file name : "<<"\n";
    cin>>Name;
    
    MarvellousFile mobj(Name);
    mobj.Display();

    iRet=mobj.CountCapital();
    cout<<"No of Capital Letters are : "<<iRet<<"\n";

    iRet=mobj.CountSmall();
    cout<<"No of Small Letters are : "<<iRet<<"\n";

    iRet=mobj.CountDigit();
    cout<<"No of Digits are : "<<iRet<<"\n";

    return 0;
}