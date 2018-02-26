#include "test.h"


int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(isspace(c) == ft_isspace(c));
	puts("isspace ok");
	return (0);
}
