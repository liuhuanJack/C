#include<stdio.h>
int fac(int n)
{
	if(n == 1)
		return 1;
	return fac(n - 1)*n;
}
int main()
{
	int n;
	printf("请输入n的值:");
	scanf("%d",&n);
	printf("%d! = %d\n",n,fac(n));
	return 0;
}
