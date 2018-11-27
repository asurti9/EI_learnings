#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

sem_t lock;

void thrdRunner(int a)
{
	sem_wait(&lock);
	printf("Printing from thread %d\n",a);
	printf("Printing from thread %d\n",a);
	printf("Printing from thread %d\n",a);
	printf("Printing from thread %d\n",a);
	printf("Printing from thread %d\n",a);
	printf("Printing from thread %d\n",a);
	sem_post(&lock);
	//while(1);
	//pthread_exit(pthread_self());
}

void main()
{
	pthread_t thrdId1,thrdId2;
	if (sem_init(&lock, 0,1) != 0)
		printf("Error in mutex init\n");
	pthread_create(&thrdId1, NULL, thrdRunner, 3);
	pthread_create(&thrdId2, NULL, thrdRunner, 4);
	pthread_join(&thrdId1,NULL);
	pthread_join(&thrdId2,NULL);
	sem_destroy(&lock);
	sleep(2);
}