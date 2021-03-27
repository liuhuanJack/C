#include<stdio.h>
#include<string.h>

int my_atoi(char *src)
{
    int result = 0;
    int flag = 1;
    while(*src != '\0')
    {
        if(*src >= '0' && *src <= '9')
	{
            result = (*src - '0') + result * 10;
	}
	else
	{
	    break;
	}
	src++;
    }

    return result * flag;
}

int main()
{
    char *src;
    scanf("%s",src);
    printf("%d\n",my_atoi(src));	
}

