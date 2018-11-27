#include<stdio.h>
#include <stdlib.h>
#define MAX 100

int array[MAX];
static int top = -1;

void push(int num)
{
	if(top == MAX)
	{
		printf("Stack is full\n");
		exit(0);
	}
	top = top + 1;
	array[top] = num;
}

int pop()
{
	int retVal;
	if(top <= -1)
	{
		printf("Stack is underflow\n");
		exit(0);
	}
	retVal = array[top];
	top = top -1;
	return retVal;
}

void main()
{
	int i,val;
	while(1)
	{
		printf("Enter the operation to be performed.\n 1. Push \n 2. Pop \n 0. Exit\n");
		scanf("%d",&i);
		if(i == 0)
		{
			break;
		}
		switch (i)
		{
			case 1:
				printf("Enter the number to be pushed\n");
				scanf("%d",&val);
				push(val);
				break;
			case 2:
				printf("Poped element is %d\n", pop());
				break;
			default:
				printf("Enter valid option.\n");

		}
	}
}