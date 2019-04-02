#include "test.h"

int	main(void)
{
	char *str = "bananabanana";
	assert(ft_strchr(str, 'b') == strchr(str, 'b'));
	assert(ft_strchr(str + 1, 'b') == strchr(str + 1, 'b'));
	assert(ft_strchr(str, 'c') == strchr(str, 'c'));
	assert(ft_strchr(str, '\0') == strchr(str, '\0'));
	puts("strchr ok");
	return (0);
}
