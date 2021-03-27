#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void out_num(char* src,int length,char* result)
{
    int head = 0;
    int tail = 0;
    int maxhead = 0;
    int maxtail = 0;
    int numlength = 0;
    int maxlength = 0;
    for(int i = 0; i < length; i++)
    {
        if(*(src + i) >= '0' && *(src + i) <= '9')
	{		
            head = i;
	    tail = i;
	    while(*(src + tail) >= '0' && *(src + tail) <= '9')
	    {
	        tail++;
	    }
	    numlength = tail - head;

	    if(numlength > maxlength)
	    {
	        maxlength = numlength;
		maxhead = head;
		maxtail = tail;
	    }
	    i = tail - 1;
	}
    }
    strncpy(result,(src + maxhead),maxtail - maxhead);   
}

int main()
{
    char* src;
    char* result;
    src = (char *)malloc(sizeof(char));

    printf("Please input src:");
    scanf("%s",src);

    out_num(src,strlen(src),result);

    printf("%s\n",result);
    return 0;    
}
