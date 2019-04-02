#include "test.h"

int	main(void)
{
	char *input = "banana";
	char *withnewline = "banana\n";
	char *res = calloc(8, 1);

	int fd = open("testfile", O_RDWR | O_CREAT, S_IRWXU);
	ft_putendl_fd(input, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, res, 8);
	unlink("testfile");
	assert(!strcmp(res, withnewline));
	puts("putendl_fd ok");
	return(0);
}
