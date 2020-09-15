#include<stdio.h>

int main(int argc,char *argv[])
{
    if(argc<1)
    {
        printf("Error : Fewer number of arguments!!");
        return -1;
    }
    else
    {
        printf("%s",argv[1]);
    }

    return 0;
}