#include <stdio.h>
#include <unistd.h>

void main()
{
	int piped[2];
	char readBuff[20];
	pipe(piped);
	pid_t pid;
	pid = fork();
	if(pid == 0)
	{
		//Child process
		read(piped[0],readBuff,6);
		printf("%s\n",readBuff );
	}
	else
	{
		//Parent process
		write(piped[1],"hello",6);
	}
	
}