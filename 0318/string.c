#include<stdio.h>
#include<string.h>
int fun(char *a,char *b)
{
	int i,j,n1,n2,n3,n4 = 0;
	n1 = strlen(a);
	n2 = strlen(b);
	for(i = 0;i <n1 ;i++)
	{
		n3 = 0;
		for(j = 0;j < n2;j ++)
			if(*(a + i + j) == *(b + j))
				n3 ++;
		if(n3 == n2)
		{
			n4 ++;
			i += j - 1;
		}
	}
	return n4;
}
int main()
{
	char a[100],b[10];
	gets(a);
	gets(b);
	printf("%d\n\n",fun(a,b));
}
