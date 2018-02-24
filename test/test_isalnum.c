#include "ft_isalnum.h"

int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(isalnum(c) == ft_isalnum(c));
	puts("ok");
	return (0);
}
