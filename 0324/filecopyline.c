#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>

extern int filecopy(char *sourcefile, char *copyfile);
extern int read_line(int fd, char *buffer, int max_len);

#define buffer_length 1024

int main(int argc, char *argv[])
{

    if(argc != 3)
    {
        printf("Please input argc!\n");
	exit(1);
    }

    int copyfd = filecopy(argv[1],argv[2]);

    char buffer[buffer_length];

    while(read_line(copyfd, buffer, buffer_length - 1) != 0)
    {
        printf("%s\n",buffer);
	memset(buffer, 0, buffer_length);
    }

    close(copyfd);

    return 0;
}
