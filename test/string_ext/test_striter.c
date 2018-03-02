#include "test.h"

void	incr(char *s)
{
	*s = *s + 1;
}

int	main(void)
{
	char s[] = "12345";
	ft_striter(s, incr);
	assert(!strcmp(s, "23456"));
	puts("striter ok");
	return(0);
}
