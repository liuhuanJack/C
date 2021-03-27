#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int test(int a, int b, int (*p_func)(int,int))
{
    return p_func(a,b);
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int temp;
    int (*p_func)(int,int);

    p_func = add;
    temp = p_func(5,6);

    printf("temp = %d\n",temp);

    temp = test(2,2,sub);
    printf("temp = %d\n",temp);

    int arr[4];
    int (*p_array[4])(int,int);

    p_array[0] = add;
    p_array[1] = sub;
    p_array[2] = mul;
    p_array[3] = div;

    for(int i = 0; i < 4; i++)
    {
        arr[i] = test(3,2,p_array[i]);
	printf("arr[%d] = %d\n",i,arr[i]);
    }

    return 0;
}
