#include "test.h"


int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(isdigit(c) == ft_isdigit(c));
	puts("isdigit ok");
	return (0);
}
