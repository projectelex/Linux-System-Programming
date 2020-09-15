#include<stdio.h>
#include<fcntl.h>

int main(int argc,char*argv[])
{
    int fd=0;

    fd=open(argv[1],O_RDONLY | O_CREAT);

    if(fd==-1)
    {
        printf("Error : File does not exists");
    }
    else
    {
        printf("File is opened Successfully with %d",fd);
    }
    return 0;
}