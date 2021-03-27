#include<stdio.h>
#include<string.h>
int main()
{
    char src[100] = "ada123wer1234werf147258wer12345678wer";
    int length = strlen(src);
    int max = 0;
    int temp = 0;
    int begin = 0;
    int end = 0;
    for(int i = 0; i < length; i++)
    {
        begin = 0;
	end = 0;
        temp = 0;
        while(src[i] < '0' || src[i] > '9')
	{
	    i++;
	}
	if(i >= length)
	{
	   
	}
	else
	{
	    begin = i;
	}
	while(src[i] >= '0' && src[i] <= '9')
	{
	    temp++;
	    if(temp > max)
	    {
	        max = temp;
	    }
	    i++;
	}
	if(i >= length)
	{
	
	}
	else
	{
	    end = i;
	}
    }
    printf("num = %d\n",max);
    printf("i = %d\n",length);
    printf("begin = %d,end = %d\n",begin,end);
}
