#include<stdio.h>

void print1(char *src)
{
    printf("%s\n",src);
}

void print2(char (*ptr)[100])
{
    for(int i = 0; i< 2; i++)
    {
        printf("%s\n",*(ptr + i));
    }
}

void print3(char (*ktr)[2][100])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
	{
	    printf("ktr[%d][%d] = %s\n",i,j,ktr[i][j]);
	}
    }    
}

int main()
{
    char src[100];

    char ptr[2][100];

    char ktr[2][2][100];

    printf("Please input src:");
    scanf("%s",src);
    printf("src = %s\n",src);

    printf("Please input ptr[0]:");
    scanf("%s",ptr[0]);
    printf("Please input ptr[1]:");
    scanf("%s",ptr[1]);
    printf("ptr[0] = %s\n",ptr[0]);
    printf("ptr[1] = %s\n",ptr[1]);

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
	{
	printf("Please input ktr[%d][%d]:",i,j);
        scanf("%s",ktr[i][j]);
	}
	
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
	{
	    printf("ktr[%d][%d] = %s\n",i,j,ktr[i][j]);
	}
    }

    print1(src);
    print2(ptr);
    print3(ktr);

    return 0;
}
