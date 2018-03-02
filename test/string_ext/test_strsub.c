#include "test.h"

int	main(void)
{
	char *s = "12345";
	assert(!strcmp(ft_strsub(s, 0, 5), "12345"));
	assert(!strcmp(ft_strsub(s, 0, 1), "1"));
	assert(!strcmp(ft_strsub(s, 4, 1), "5"));
	assert(!strcmp(ft_strsub(s, 1, 3), "234"));
	assert(!strcmp(ft_strsub(s, 3, 2), "45"));
	assert(!strcmp(s, "12345"));
	puts("strsub ok");
	return(0);
}
