#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>

#define buffer_length 1024

int filecopy(char *sourcefile, char *copyfile)
{
    int sourcefd;
    int copyfd;

    int readlen;
    int writelen;

    char  buffer[buffer_length];
    char *src;
    
    sourcefd = open(sourcefile, O_RDONLY);

    if(sourcefd == -1)
    {
        perror("sourcefile error:\n");
	exit(1);
    }

    copyfd = open(copyfile, O_RDWR | O_CREAT, 0655);

    if(copyfd == -1)
    {
        perror("copyfile error:\n");
	exit(1);
    }

    while(readlen = read(sourcefd, buffer, buffer_length))
    {

        if(readlen == -1)
	{
	    break;
	}

	if(readlen == 0)
	{
	    printf("sourcefile 为空!\n");
	    exit(1);
	}

	src = buffer;

	while(writelen = write(copyfd, src, readlen))
	{

	    if(writelen == -1)
	    {
	        break;
	    }

	    else if(writelen == readlen)
	    {
	        break;
	    }

	}

	if(writelen == -1)
	{
	    break;
	}

	memset(buffer, 0, buffer_length);

    }

    close(sourcefd);
//    close(copyfd);
    
    lseek(copyfd, 0, SEEK_SET);

    return copyfd;

}

/*int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("No argc!\n");
	exit(1);
    }

    int copyfd = filecopy(argv[1],argv[2]);
    close(copyfd);

    printf("File copy success!\n");

    return 0;
}*/
