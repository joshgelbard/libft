#include "test.h"
#include "ft_string.h"

void	x_bzero(void *s, void (*f)(void *s, size_t n))
{
	f(s, 1);
	f(s + 2, 4);
	f(s + 18, 10);
	f(s + 22, 40);
}

DO_MEMFN_TEST(bzero)
