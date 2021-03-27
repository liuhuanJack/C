#include<stdio.h>
#include<string.h>

//extern char* num_str(int num);

int count(int n)
{
    int count = 0;
    int temp;

    for(int i = 1; i <= n; i++)
    {
        temp = i;
        while(temp != 0)
        {
	    if(temp % 10 == 9)
	    {
	        count++;
	    }
	    temp = temp / 10;
        }
    }

    return count;
}

int main()
{
	int n;	//n <= 9999
	char *src;

	printf("Please input num:");
	scanf("%d",&n);

	printf("num = %d\n",count(n));
//	printf("%s\n",num_str(1234));
	return 0;
}
