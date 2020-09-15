#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc,char*argv[])
{
    int fd=0,out=0;

    char*arr=(char*)malloc(sizeof(char)*100);

    fd=open(argv[1],O_RDONLY | O_CREAT);
    if(fd==-1)
    {
        printf("Error : The file does not exists");
        return -1;
    }

    if(argc<2)
    {
        printf("Error : Fewer Arguments\n");
        return -1;
    }

    if(argc>2)
    {
        printf("Error : Large Arguments\n");
        return -1;
    }

    else
    {
        out=read(fd,arr,100);

        while(*arr!='\0')
        {
            printf("%c",*arr);
            arr++;
        }
    }

    return 0;
}
