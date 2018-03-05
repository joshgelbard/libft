#include "test.h"

int	main(void)
{
	char *input = "banana";
	char *res = calloc(7, 1);

	int fd = open("testfile", O_RDWR | O_CREAT, S_IRWXU);
	ft_putstr_fd(input, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, res, 7);
	unlink("testfile");
	assert(!strcmp(res, input));
	puts("putstr_fd ok");
	return(0);
}
