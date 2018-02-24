#include "ft_memchr.h"

int	main(void)
{
	char hasab[] = "0123456b8";
	char nob[] = "012345678";

	assert(memchr(hasab, 'b', 8) == ft_memchr(hasab, 'b', 8));
	assert(ft_memchr(nob, 'b', 8) == memchr(nob, 'b', 8));
	puts("ok");
	return (0);
}

