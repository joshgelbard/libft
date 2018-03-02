#include "test.h"

void	replace_with_idx(unsigned int i, char *s)
{
	*s = '0' + i;
}

int	main(void)
{
	char s[] = "abcde";
	ft_striteri(s, replace_with_idx);
	assert(!strcmp(s, "01234"));
	puts("striteri ok");
	return(0);
}
