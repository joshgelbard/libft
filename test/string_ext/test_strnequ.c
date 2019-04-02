#include "test.h"

int	main(void)
{
	assert(ft_strnequ("banana", "bananax", 6) == 1);
	assert(ft_strnequ("banana", "bananax", 7) == 0);
	assert(ft_strnequ("banana", "bananax", 8) == 0);
	assert(ft_strnequ("banana", "xanana", 0) == 1);
	assert(ft_strnequ("bananax", "banana", 6) == 1);
	assert(ft_strnequ("bananax", "banana", 7) == 0);
	assert(ft_strnequ("bananax", "banana", 8) == 0);
	assert(ft_strnequ("xanana", "banana", 0) == 1);
	assert(ft_strnequ("", "", 1) == 1);
	puts("strnequ ok");
	return(0);
}
