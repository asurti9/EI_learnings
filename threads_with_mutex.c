#include<stdio.h>
#include<pthread.h>

pthread_mutex_t lock;

void thrdRunner(int a)
{
	pthread_mutex_lock(&lock);
	printf("Printing from thread %d\n",a);
	printf("Printing from thread %d\n",a);
	printf("Printing from thread %d\n",a);
	printf("Printing from thread %d\n",a);
	printf("Printing from thread %d\n",a);
	printf("Printing from thread %d\n",a);
	pthread_mutex_unlock(&lock);
	//while(1);
	//pthread_exit(pthread_self());
}

void main()
{
	pthread_t thrdId1,thrdId2;
	if (pthread_mutex_init(&lock, NULL) != 0)
		printf("Error in mutex init\n");
	pthread_create(&thrdId1, NULL, thrdRunner, 3);
	pthread_create(&thrdId2, NULL, thrdRunner, 4);
	pthread_join(&thrdId1,NULL);
	pthread_join(&thrdId2,NULL);
	pthread_mutex_destroy(&lock);
	sleep(2);
}