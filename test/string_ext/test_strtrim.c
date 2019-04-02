#include "test.h"

int	main(void)
{
	assert(!strcmp(ft_strtrim("    abc"), "abc"));
	assert(!strcmp(ft_strtrim("abc     "), "abc"));
	assert(!strcmp(ft_strtrim("abc"), "abc"));
	assert(!strcmp(ft_strtrim(" a b c "), "a b c"));
	assert(!strcmp(ft_strtrim("       "), ""));
	puts("strtrim ok");
	return(0);
}
