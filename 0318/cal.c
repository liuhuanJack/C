#include<stdio.h>
int main()
{
	int a,b;	//操作数
	char sym;	//操作符号
	printf("请输入操作符号:");
	scanf("%c",&sym);
	printf("请输入操作数:");
	scanf("%d%d",&a,&b);
	switch(sym)
	{
		case '+':printf("%d + %d = %d\n",a,b,a + b);break;
		case '-':printf("%d - %d = %d\n",a,b,a - b);break;
		case '*':printf("%d * %d = %d\n",a,b,a * b);break;
		case '/':printf("%d / %d = %d\n",a,b,a / b);break;
		default :printf("请输入正确的操作符号\n");
	}
	return 0;
}
