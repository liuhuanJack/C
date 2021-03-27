#include<stdio.h>
int main()
{
	int n;
	printf("请输入杨辉三角的行数:");
	scanf("%d",&n);
	printf("\n");
	int a[n][n];
	int i , j;
	for(i = 0;i < n;i ++)
	{
		for(j = 0;j < n;j ++)
		{
			if(j == 0)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}
	for(i = 1;i < n;i ++)
	{
		for(j = 1;j <= i;j ++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];	
		}
	}
	for(i = 0;i < n;i ++)
	{
		for(j = 0;j <= i;j ++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
