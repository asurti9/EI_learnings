#include<stdio.h>

int add(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	return (a-b);
}

int mul(int a, int b)
{
	return (a*b);
}

int div(int a, int b)
{
	return (a/b);
}

int mod(int a, int b)
{
	return (a%b);
}

void execute( int (*funPtr)(int , int),int l, int m )
{
	printf("result is %d\n",(*funPtr)(l,m));
}

void main()
{
	int (*func_ptr) (int , int);
	int i,j,k,result = 0;
	printf("Type accordingly for each operation \n");
	printf(" 1. add \n 2. sub \n 3. mul \n 4. div \n 5. mod \n");
	scanf("%d",&i);
	switch(i){
		case 1:
			func_ptr = add;
			break;
		case 2:
			func_ptr = sub;
			break;
		case 3:
			func_ptr = mul;
			break;
		case 4:
			func_ptr = div;
			break;
		case 5:
			func_ptr = mod;
			break;
		default:
			printf("Enter a valid number \n");
			return;
	}
	
	printf("Enter the number on which the operation hs to be performed \n");
	scanf("%d %d",&j,&k);
	execute(func_ptr,j,k);
	/***
	result = func_ptr(j,k);
	printf("The result is %d \n", result);
	***/
}