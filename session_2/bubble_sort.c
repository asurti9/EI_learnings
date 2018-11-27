#include<stdio.h>

void main()
{
	int a[10] = {56,2,42,0,44,94,20,34,52,71};
	int size = 10;
	int i,j,tmp=0,k;
	for (i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
		for(k=0;k<size;k++)
		{
			printf("%d \n",a[k]);
		}
		printf("***************\n");
	}
	
}