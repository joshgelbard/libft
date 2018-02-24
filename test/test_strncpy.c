#include "ft_strncpy.h"

int	main(void)
{
	char *dst = calloc(90, 1);
	char *dst2 = calloc(90, 1);

	char str[] = "banana";

	char *res;
	char *res2;

	res = strncpy(dst, str, 3);
	res2 = ft_strncpy(dst2, str, 3);
	assert(!memcmp(dst, dst2, 90));
	assert(res - dst == res2 - dst2);

	res = strncpy(dst + 89, str, 1);
	res2 = ft_strncpy(dst2 + 89, str, 1);
	assert(res - dst == res2 - dst2);
	assert(!memcmp(dst, dst2, 90));
	puts("ok");
	return (0);
}
