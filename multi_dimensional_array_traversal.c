#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_X 10
#define MAX_Y 10

char array[MAX_X][MAX_Y] = {0};

void init()
{
	int i,j;
	for (i=0;i<MAX_X;i++)
	{
		for(j=0;j<MAX_Y;j++)
		{
			array[i][j]=0;
		}
	}
}

void main()
{
	static char a = 'A',tmp_char;
	init();
	
	int pos_x = 0, pos_y = 0, k;
	printf("The position of '%c' is [%d][%d].\n",a,pos_x,pos_y);
	array[pos_x][pos_y] = a;
	a++;
	srand(time(0));

	while( a != 'Z')
	{
		k = (rand() % 4);
		printf("k is %d \n",k );
		tmp_char = a;
		switch(k)
		{
			case 0:
				pos_x = pos_x - 1;
				if((pos_x < MAX_X) && (pos_y < MAX_Y) && (pos_x >= 0) && (pos_y >= 0))
				{
					if(array[pos_x][pos_y] == 0)
					{
						printf("The position of '%c' is [%d][%d].\n",a,pos_x,pos_y);
						array[pos_x][pos_y] = a;
						a++;
					}
					else
						pos_x = pos_x + 1;
				}
				else
					pos_x = pos_x + 1;
				break;

			case 1:
				pos_y = pos_y - 1;
				if((pos_x < MAX_X) && (pos_y < MAX_Y) && (pos_x >= 0) && (pos_y >= 0))
				{
					if(array[pos_x][pos_y] == 0)
					{
						printf("The position of '%c' is [%d][%d].\n",a,pos_x,pos_y);
						array[pos_x][pos_y] = a;
						a++;
					}
					else
						pos_y = pos_y + 1;
				}
				else
					pos_y = pos_y + 1;
				break;

			case 2:
				pos_x = pos_x + 1;
				if((pos_x < MAX_X) && (pos_y < MAX_Y) && (pos_x >= 0) && (pos_y >= 0))
				{
					if(array[pos_x][pos_y] == 0)
					{
						printf("The position of '%c' is [%d][%d].\n",a,pos_x,pos_y);
						array[pos_x][pos_y] = a;
						a++;
					}
					else
						pos_x = pos_x - 1;
				}
				else
					pos_x = pos_x - 1;
				break;

			case 3:
				pos_y = pos_y + 1;
				if((pos_x < MAX_X) && (pos_y < MAX_Y) && (pos_x >= 0) && (pos_y >= 0))
				{
					if(array[pos_x][pos_y] == 0)
					{
						printf("The position of '%c' is [%d][%d].\n",a,pos_x,pos_y);
						array[pos_x][pos_y] = a;
						a++;
					}
					else
						pos_y = pos_y - 1;
				}
				else
					pos_y = pos_y - 1;
				break;

			default:
				printf("Not valid random number.\n");

		}
		if(a == tmp_char)
		{
			printf("Dead end. No traversal possible.\n");
			return;
		}
	}
	printf("Traversal successful.\n");
}