#include<stdio.h>

int func(int a)
{
    return 0;
}
int main()
{
    int a;
    int *a;
    int **a;
    int a[10];
    int *a[10];
    int (*a)[10];
    int (*a)(int);
    int (*a[10])(int);
}
