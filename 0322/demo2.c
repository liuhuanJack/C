#include<stdio.h>

void int2bin(unsigned int num)
{
    unsigned int mask = 0x80000000;
    for(int i = 0; i < 32; i++)
    {
        if((unsigned int)(num & mask) == mask)
	{
	    printf("1");
	}
	else
	{
	    printf("0");
	}
	if((i + 1) % 4 == 0)
	{
	    printf(" ");
	}
	num = num << 1;
    }
    printf("\n");
}
void output(unsigned a,int p1,int p2)
{
    
}

int main()
{
   unsigned int a;
   //int p1,p2;
   printf("Please input a:\n");
   scanf("%d",&a);
   //printf("Please input p1,p2:\n");
   //scanf("%d,%d",&p1,&p2);
   int2bin(a); 
}
