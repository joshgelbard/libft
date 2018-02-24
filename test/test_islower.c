#include "ft_islower.h"

int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(islower(c) == ft_islower(c));
	puts("ok");
	return (0);
}
