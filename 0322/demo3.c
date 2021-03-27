#include<stdio.h>

int equal0(int a[],int n)
{
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != 0)
	{
	     result++;
	}
    }
    return result;
}
int main()
{
    int n = 3;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    int sub = 0;

    while(equal0(a,n) != 1)
    {
        int temp = 0;
	while(temp < 3)
	{
	    if(a[sub] != 0)
	    {
	        temp++;
	    }
	    sub++;
	    if(sub >= n)
	    {
	        sub = sub % n;
	    }
	}
	a[sub] = 0;
    }

    int truesub;

    for(int k = 0; k < n; k++)
    {
        if(a[k] != 0)
	{
	    truesub = k;
	}
    }
    printf("turesub = %d\n",truesub);
    /*for(int j = 0; j < n; j++)
    {
        printf("%d ",a[j]);
    }
    printf("\n");
    printf("%d\n",equal0(a,n));*/
}
