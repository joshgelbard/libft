#include "ft_toupper.h"

int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(toupper(c) == ft_toupper(c));
	puts("ok");
	return (0);
}
