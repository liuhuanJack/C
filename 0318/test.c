//实现1234->"1234"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse_str(char *result,int len)
{
    char temp;
    for(int i = 0; i < len / 2; i++)
    {
        temp = *(result +len -i - 1);
	*(result + len - i - 1) = *(result + i);
	*(result + i) = temp;
    }
}

int main()
{
    char result[100];
    int num = 1234;
    int i = 0;
    while(num != 0)
    {
        result[i] = (num % 10) + '0';
	num = num / 10;
	i++;
    }
    
    reverse_str(result,strlen(result));    
    printf("%s\n",result);
}
