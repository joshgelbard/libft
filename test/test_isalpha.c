#include "ft_isalpha.h"

int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(isalpha(c) == ft_isalpha(c));
	puts("ok");
	return (0);
}
