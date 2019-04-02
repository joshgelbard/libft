#include "test.h"

int	main(void)
{
	char *str = "bananabanana";
	assert(ft_strrchr(str, 'b') == strrchr(str, 'b'));
	assert(ft_strrchr(str + 1, 'b') == strrchr(str + 1, 'b'));
	assert(ft_strrchr(str, 'c') == strrchr(str, 'c'));
	assert(ft_strrchr(str, '\0') == strrchr(str, '\0'));
	puts("strrchr ok");
	return (0);
}
