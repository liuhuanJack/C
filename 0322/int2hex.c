#include<stdio.h>

char * int2hex(unsigned int num)
{
    static char result[11];
    result[0] = '0';
    result[1] = 'x';
    result[10] = '\0';

    int temp;
    unsigned int mask = 0xf;
    for(int i = 0; i < 8; i++)
    {
        temp = num & mask;
	if(temp >= 10)
	{
	    result[9 - i] = temp - 10 + 'A';
	}
	else
	{
	    result[9 - i] = temp + '0';
	}
	num = num >> 4;
    }
    return result;
}

int main()
{
    unsigned int num;
    printf("Please input num:\n");
    scanf("%d",&num);
    
    char * hex = int2hex(num);
    printf("%s\n",hex);
    return 0;
}
