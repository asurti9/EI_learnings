#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* nextNode;
};

void insertNode(struct node* head, int data)
{
	struct node* tmp = head;
	if(head->data == NULL)
	{
		head->data = data;
		return;
	}
	struct node* newNode = (struct node*) malloc(sizeof(struct node));
	newNode->nextNode = NULL;
	newNode->data = data;
	while(tmp->nextNode != NULL)
	{
		tmp = tmp->nextNode;
	}
	if(tmp->nextNode == NULL)
	{
		tmp->nextNode = newNode;
	}
}

void removeNode(struct node* head, int data)
{
	if(head->data == data)
	{
		head = head->nextNode;
	}
	struct node* tmp = head;
	struct node* tmp1 = tmp;
	while(tmp->nextNode != NULL)
	{
		if(tmp->data == data)
		{
			tmp1->nextNode = tmp->nextNode;
		}
		tmp1 = tmp;
		tmp = tmp->nextNode;
	}
}

void printLinkList(struct node* head)
{
	printf("In print\n");
	struct node* tmp = head;
	do
	{
		printf("The data is %d \n",tmp->data);
		tmp = tmp->nextNode;
	}while(tmp->nextNode != NULL);
	printf("The data is %d \n",tmp->data);
}

void main()
{
	int i,j,d;
	struct node* head = (struct node*) malloc(sizeof(struct node));
	head->data = NULL;
	head->nextNode = NULL;
	while(1)
	{
		printf("Enter the data to be inserted \n");
		scanf("%d",&i);
		if(i == 5599)
			break;
		insertNode(head,i);
		removeNode(head,10);
	}
	printLinkList(head);
}