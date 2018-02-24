#include "ft_isupper.h"

int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(isupper(c) == ft_isupper(c));
	puts("ok");
	return (0);
}
