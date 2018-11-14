#include<stdio.h>

void main()
{
	int first, last, mid = 0;
	int a[] = {2,3,5,6,9,20,23,35,52,56};
	first = 0;
	last = 9;
	int search = 5;

	while (first <= last)
	{
		mid = (last+first)/2;
		if(a[mid] == search)
		{
			printf("Position is %d \n",(mid+1));
			return;
		}
		else if(a[mid] < search)
		{
			printf("In >  and mid is %d \n", a[mid]);
			first = mid + 1;
		}
		else
		{
			printf("In <  and mid is %d \n", a[mid]);
			last = mid - 1;
		}
	}
}