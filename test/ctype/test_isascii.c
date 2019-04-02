#include "test.h"

int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(isascii(c) == ft_isascii(c));
	puts("isascii ok");
	return (0);
}
