#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define n 26
#define m 100

char *output(char *src,int len)
{
    int ptr[n];
    int min = m;
    int num = 0;
    char * ktr = (char *)malloc(sizeof(char) * m);

    for(int i = 0; i < n; i++)
    {
        ptr[i] = 0;
    }

    for(int i = 0; i < len; i++)
    {
        ptr[src[i] - 'a']++;
    }

    for(int i = 0; i < n; i++)
    {
        if((min >= ptr[i]) && (ptr[i] != 0))
	{
	    min = ptr[i];
	}
    }

    for(int i = 0; i < len; i++)
    {
        if(ptr[src[i] - 'a'] != min)
	{
	    ktr[num] = src[i];
	    num++;
	}
    }
    ktr[num] = '\0';
    return ktr;
}
int main()
{
    char src[m];
    printf("Please input src:\n");
    gets(src);

    int len = strlen(src);
    char *result = output(src,len);

    printf("result = %s\n",result);

    return 0;
}
