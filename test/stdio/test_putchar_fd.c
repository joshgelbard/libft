#include "test.h"

int	main(void)
{
	char *input = "banana";
	char *res = calloc(7, 1);

	int fd = open("testfile", O_RDWR | O_CREAT, S_IRWXU);
	for (size_t i = 0; input[i]; i++)
		ft_putchar_fd(input[i], fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, res, 7);
	unlink("testfile");
	assert(!strcmp(res, input));
	puts("ft_putchar_fd ok");
	return(0);
}
