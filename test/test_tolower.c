#include "ft_tolower.h"

int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(tolower(c) == ft_tolower(c));
	puts("ok");
	return (0);
}
