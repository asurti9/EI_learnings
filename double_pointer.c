#include<stdio.h>

void main()
{
	int **ptr,***tp;
	int *a, b;
	b = 10;
	a = &b;
	ptr = &a;
	tp = &ptr;
	printf("The data is - %d \n",***tp);
}