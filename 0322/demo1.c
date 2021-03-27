#include<stdio.h>
int main()
{
    int i = 3;
    char *ptr = "abcdefg";

    printf("%d,%d,%d,%d\n",i++,++i,i++,++i);
    //i++是数值
    //++i是变量
    printf("%C,%c,%c,%c\n",*(ptr++),*(++ptr),*(++ptr),*(ptr++));
}
