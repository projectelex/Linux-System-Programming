#include<stdio.h>
#include<fcntl.h>

int main(int argc,char*argv[])
{
    int fd=0;

    fd=open(argv[1],O_RDONLY | O_CREAT);

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
    if(fd==-1)
    {
        printf("Error : File does not exists\n");
    }
    else
    {
        printf("File is opened Successfully with %d\n",fd);
    }
    return 0;
}