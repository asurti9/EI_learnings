#include<stdio.h>

union tmp{
	int a;
	char c;
} un;
void main()
{
	printf("size of union is %d \n", sizeof(un));
	un.a = 10;
	printf("value of int is %d \n", un.a);
	un.c = 'A';
	printf("value of char is %c \n", un.c);
}