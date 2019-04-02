#include "test.h"

void	x_memset(void *dst, void *(f)(void *dst, int c, size_t len))
{
	f(dst, 'x', 20);
	f(dst + 10, '.', 10);
	f(dst, '?', 0);
	f(dst + 80, '_', 19);
}

DO_MEMFN_TEST(memset)
