#include "ft_memcmp.h"

int	main(void)
{
	char apple[] = "apple";
	char banana[] = "banana";
	char unsgncheck[] = "aoeu\200aoeu";
	char unsgncheck2[] = "aoeu\0aoeu";

	assert(ft_memcmp(apple, banana, 6) == memcmp(apple, banana, 6));
	assert(ft_memcmp(banana, apple, 6) == memcmp(banana, apple, 6));
	assert(ft_memcmp(banana, banana, 7) == memcmp(banana, banana, 7));
	assert(ft_memcmp(unsgncheck, unsgncheck2, 9) == memcmp(unsgncheck, unsgncheck2, 9));
	puts("ok");
	return (0);
}
