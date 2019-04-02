#include "test.h"

void	x_memcpy(void *dst, void *(f)(void *dst, const void *src, size_t n))
{
	f(dst + 2, "a", 1);
	f(dst, "abcd", 2);
	f(dst + 12, "abcd", 3);
	f(dst, "x", 0);
}

DO_MEMFN_TEST(memcpy)
