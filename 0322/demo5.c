#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *src = "ashdheadjsuwtjdijfkitailkdkdk";
    char head[5] = "head";
    char tail[5] = "tail";
    char *temp1 = (char *)malloc(sizeof(char) * 100);
    char *temp2 = (char *)malloc(sizeof(char) * 100);

    int inttemp = 0;

    printf("src = %s\n",src);

    while(strncmp(src,head,4) != 0)
    {
        src++;
    }

    temp1 = src;
    /*if(strncmp(src,head,4) == 0)
    {
        temp1 = src;
    }*/

    while(strncmp(src,tail,4) != 0)
    {
        src++;
	inttemp++;
    }

    inttemp += 3;
    strncpy(temp2,temp1,inttemp + 1);

    /*if(strncmp(src,tail,4) == 0)
    {
        inttemp += 3;
	strncpy(temp2,temp1,inttemp + 1);
    }*/

    //printf("temp1 = %s\n",temp1);
    printf("temp2 = %s\n",temp2);

    return 0;
}
