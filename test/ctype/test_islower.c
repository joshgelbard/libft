#include "test.h"


int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(islower(c) == ft_islower(c));
	puts("islower ok");
	return (0);
}
