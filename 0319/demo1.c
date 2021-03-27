#include<stdio.h>
#include<string.h>


int main()
{
    int num;
    char ch;
    double b;
    char *src;
    printf("Please input src:");
    gets(src);
    printf("Please input num:");
    scanf("%d",&num);
    getchar();
    printf("Please input ch:");
    scanf("%c",&ch);
    printf("Please input b:");
    scanf("%lf",&b);
    printf("%d,%c,%.2lf,%s\n",num,ch,b,src);
}
