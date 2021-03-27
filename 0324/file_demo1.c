#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>

int main(int argc,char *argv[])
{
    int fd = open(argv[1],O_RDWR | O_CREAT, 0655);

    if(fd == -1)
    {
        perror("open file error:");
	exit(1);
    }

    printf("open file success! = %d\n",fd);

    char buffer[1024];
    strcpy(buffer,"hello world");

    int w_len = write(fd,buffer,strlen(buffer));

    if(w_len == -1)
    {
        perror("wirte data error:");
	exit(1);
    }
    printf("write data len = %d\n",w_len);
    
    lseek(fd,0,SEEK_SET);

    memset(buffer,0,sizeof(buffer));

    int r_len = read(fd,buffer,sizeof(buffer) - 1);

    if(r_len == -1)
    {
        perror("read data error:");
	exit(1);
    }
    printf("read data:%s\n",buffer);

    close(fd);

    return 0;

}
