#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse_str(char *src, int len)
{

    char temp;

    for(int i = 0; i < len / 2; i++)
    {
        temp = *(src + len -i - 1);
	*(src + len - i - 1) = *(src + i);
	*(src + i) = temp;
    }
}

int main()
{
    char src[100] = "I am from shanghai";
    int length = strlen(src);

    reverse_str(src,strlen(src));
    
    int i, j;
    for(i = 0; i < length - 1; i++)
    {
        for(j = i + 1; j < length; j++)
	{
	    if(src[j] == ' ' || src[j] == '\0')
	    {
	        reverse_str(src + i, j - 1);
		i = j + 1;
	    }
	}
    }
//    printf("%s\n",src);
//    reverse_str(src,0,8);
    printf("%s\n",src);

    return 0;
}
