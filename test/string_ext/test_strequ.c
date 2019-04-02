#include "test.h"

int	main(void)
{
	assert(ft_strequ("banana", "banana") == 1);
	assert(ft_strequ("", "") == 1);
	assert(ft_strequ("banana", "bananax") == 0);
	assert(ft_strequ("", "banana") == 0);
	assert(ft_strequ("bananax", "banana") == 0);
	assert(ft_strequ("banana", "") == 0);
	puts("strequ ok");
	return(0);
}
