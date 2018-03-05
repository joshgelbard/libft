#include "test.h"

int	main(void)
{
	int ints[] = { -20, INT_MAX, INT_MIN, 0, 5 };
	char *strs[] = { "-20", "2147483647", "-2147483648", "0", "5" };
	char *res = calloc(20, 1);
	int fd = open("testfile", O_CREAT | O_RDWR, S_IRWXU);
	for (int i = 0; i < 5; i++)
	{
		bzero(res, 20);
		lseek(fd, 0, SEEK_SET);
		ft_putnbr_fd(ints[i], fd);
		lseek(fd, 0, SEEK_SET);
		read(fd, res, strlen(strs[i]));
		assert(!strcmp(res, strs[i]));
	}
	unlink("testfile");
	puts("putnbr_fd ok");
	return(0);
}
