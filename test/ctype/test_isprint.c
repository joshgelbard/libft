#include "test.h"


int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(isprint(c) == ft_isprint(c));
	puts("isprint ok");
	return (0);
}
