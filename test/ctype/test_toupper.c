#include "test.h"


int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(toupper(c) == ft_toupper(c));
	puts("toupper ok");
	return (0);
}
