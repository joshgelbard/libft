#include "test.h"


int	main(void)
{
	for (int c = -300; c < 900; c++)
		assert(tolower(c) == ft_tolower(c));
	puts("tolower ok");
	return (0);
}
