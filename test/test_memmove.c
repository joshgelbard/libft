#include "ft_memmove.c"

int	main(void)
{
	char *src = calloc(90, 1);
	char *src2 = calloc(90, 1);
	strcat(src, "123456789abcdefgh");
	strcat(src2, "123456789abcdefgh");
	memmove(src + 1, src, 30);
	ft_memmove(src2 + 1, src2, 30);
	assert(memcmp(src, src2, 90) == 0);
	puts("ok");
	return (0);
}
