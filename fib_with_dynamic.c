#include<stdio.h>
int a[10];
void init()
{
	int i;
	for (i = 0; i<10;i++)
	{
		a[i] = -1;
	}
}

int fib(int num)
{
	if(a[num] == -1)
	{
		if(num <= 1)
		{
			a[num] = num;
		}
		else
		{
			a[num] = fib(num-1) + fib(num-2);
		}

	}
	return a[num];
}

void main()
{
	int n = 5;
	init();
	printf("fib series is %d \n",fib(9));
}