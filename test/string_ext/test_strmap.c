#include "test.h"

char	incr(char s)
{
	return (s + 1);
}

int	main(void)
{
	char const *s = "12345";
	char *res = ft_strmap(s, incr);
	assert(!strcmp(res, "23456"));
	assert(!strcmp(s, "12345"));
	puts("strmap ok");
	return(0);
}
