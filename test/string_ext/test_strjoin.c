#include "test.h"

int	main(void)
{
	char *abcde = "abcde";

	char *res = ft_strjoin(abcde + 2, abcde);
	assert(!strcmp(res, "cdeabcde"));
	assert(!strcmp(abcde, "abcde"));
	puts("strjoin ok");
	return(0);
}
