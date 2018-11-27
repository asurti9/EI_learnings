#include<stdio.h>

void main()
{
	int a[5], *ptr, i;
	ptr = a;
	printf("Enter the array elements \n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are \n");
	for (i = 0; i < 5; i++)
	{
		printf("Array element %d is %d \n",i, *ptr);
		ptr++;
	}
}