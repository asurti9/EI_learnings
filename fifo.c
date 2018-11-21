#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

void main()
{
	int fd;
	mknod("FIFO_file",S_IFIFO|0660,0);
	char readBuff[20];
	while(1)
	{
		fd = open("FIFO_file",O_RDONLY);
		read(fd,readBuff,20);
		printf("%s\n",readBuff);
		close(fd);
		break;
	}
}