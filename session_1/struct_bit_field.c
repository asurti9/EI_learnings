#include<stdio.h>

struct date{
	int d;
	int m;
	int y;
} date_normal;

struct date_opt
{
	int d: 8;
	int m: 5;
	int y;
} date_optimized;

void main()
{
	date_optimized.d = 31;
	date_optimized.m = 12;
	date_optimized.y = 9999;
	printf("size of normal date, %d \n", sizeof(date_normal));
	printf("size of opt date, %d \n", sizeof(date_optimized));
	printf("Date is %d/%d/%d \n",date_optimized.d,date_optimized.m,date_optimized.y);
}