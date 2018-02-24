#include "ft_strdup.h"

int	main(void)
{
	char str[] = "banana";
	char str2[] = "";
	assert(!strcmp(ft_strdup(str), strdup(str)));
	assert(!strcmp(ft_strdup(str2), strdup(str2)));
	puts("ok");
	return (0);
}
