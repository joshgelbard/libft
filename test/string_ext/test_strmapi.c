#include "test.h"

char	zero_if_even_index(unsigned int i, char s)
{
	return (i % 2 ? s : '0');
}

int	main(void)
{
	char const *s = "12345";
	char *res = ft_strmapi(s, zero_if_even_index);
	assert(!strcmp(res, "02040"));
	assert(!strcmp(s, "12345"));
	puts("strmapi ok");
	return(0);
}
