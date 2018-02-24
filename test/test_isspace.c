#include "ft_isspace.h"

int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(isspace(c) == ft_isspace(c));
	puts("ok");
	return (0);
}
