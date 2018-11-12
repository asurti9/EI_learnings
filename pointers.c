#include<stdio.h>

void main()
{
	int m = 10,n,o;
	int *z;
	z = &m;
	printf("Address of m is %d \n", z);
	printf("Value of m is %d \n", *z);
	printf("Address of n is %d \n", &n);
	printf("Address of m is %d \n", &m);
	printf("Address of z is %d \n", &z);
}