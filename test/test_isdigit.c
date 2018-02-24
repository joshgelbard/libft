#include "ft_isdigit.h"

int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(isdigit(c) == ft_isdigit(c));
	puts("ok");
	return (0);
}
