//高位在前，低位在后
#include<stdio.h>

void int2bin(unsigned int num)
{
    unsigned int mask = 0x80000000;

}

int main()
{
    unsigned int num;

    printf("Please input num:\n");
    scanf("%d",&num);

    int2bin(num);
}
