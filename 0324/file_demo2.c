#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>

int read_line(int fd, char *buffer, int max_len)
{
    int i;
    int ret;
    char temp;

    for(i = 0; i < max_len; i++)
    {
        ret = read(fd,&temp,1);

	if(ret < 0)
	{
	    perror("read error:");
	    exit(1);
	}

	if(ret == 0)
	{
	    break;
	}

	if(temp == '\n')
	{
	    break;
	}

	buffer[i] = temp;
    }

    buffer[i] = '\0';

    return i;
}

/*int main(int argc,char *argv[])
{
    int fd;
    if((fd = open(argv[1],O_RDWR | O_CREAT, 0655)) == -1)
    {
        perror("open file error:");
	exit(1);
    }

    char buffer[1024];

    for(int i = 0; i < 3; i++)
    {
	memset(buffer,0,sizeof(buffer));

        printf("Please input buffer:\n");
	scanf("%s",buffer);

	if(write(fd,buffer,strlen(buffer)) < 0)
	{
	    perror("write data error:");
	    exit(1);
	}

	write(fd,"\n",1);
    }

    memset(buffer,0,sizeof(buffer));

    lseek(fd,0,SEEK_SET);

    while(read_line(fd,buffer,sizeof(buffer) - 1) != 0)
    {
        printf("buffer = %s\n",buffer);
	memset(buffer,0,sizeof(buffer));
    }

    close(fd);

    return 0;
}*/
