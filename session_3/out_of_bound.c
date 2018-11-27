#include<stdio.h>

void main()
{
	int *ptr;
	ptr = 2;
	printf("Dereferencing NULL pointer, %d \n",*(int*)ptr);
}
