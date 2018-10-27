// Carson Tyler
#include "types.h"
#include "user.h"
#include "stat.h"
#include "fcntl.h"
int main(int argc, char *argv[])
{
	printf(1,"Carson Tyler\n");
	int fd = open("tom.txt", O_RDWR | O_CREATE);
	write(fd, "1 2 3 4\n", 7);
	exit();
} 
