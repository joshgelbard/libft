#include "ft_strstr.h"

int	main(void)
{
	char *banana = "banana";
	char *apple = "apple";
	char *ppl = "ppl";
	char *empty = "";
	assert(strstr(banana, apple) == ft_strstr(banana, apple));
	assert(strstr(apple, banana) == ft_strstr(apple, banana));

	assert(strstr(ppl, apple) == ft_strstr(ppl, apple));
	assert(strstr(apple, ppl) == ft_strstr(apple, ppl));

	assert(strstr(apple, empty) == ft_strstr(apple, empty));
	assert(strstr(empty, apple) == ft_strstr(empty, apple));

	assert(strstr(apple, apple) == ft_strstr(apple, apple));
	assert(strstr(empty, empty) == ft_strstr(empty, empty));
	puts("ok");
	return (0);
}

