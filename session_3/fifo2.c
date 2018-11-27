#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void main()
{
	int fd;
	fd = open("FIFO_file",O_CREAT|O_WRONLY);
	while(1)
	{
		write(fd, "Hello FIFO world", strlen("Hello FIFO world"));
		close(fd);
		break;
	}
}