#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char*argv[])
{
    int fd=0,out=0;

    fd=open(argv[1],O_RDWR | O_CREAT);
    if(fd==-1)
    {
        printf("Error : The file does not exists");
        return -1;
    }

    if(argc<3)
    {
        printf("Error : Fewer Arguments\n");
        return -1;
    }

    if(argc>3)
    {
        printf("Error : Large Arguments\n");
        return -1;
    }

    else
    {
        out=write(fd,argv[2],strlen(argv[2]));

        if(out==-1)
        {
            printf("Error : The data was not writtern");
        }
        else
        {
            printf("The no of bytes written into the file %d",out);
        }
        
    }

    return 0;
}
