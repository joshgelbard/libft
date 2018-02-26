#include "test.h"
#include "ft_string.h"

int	main(void)
{
	char *banana = "banana";
	char *apple = "apple";
	char *ppl = "ppl";
	char *empty = "";
	assert(strnstr(banana, apple, 12) == ft_strnstr(banana, apple, 12));
	assert(strnstr(apple, banana, 5) == ft_strnstr(apple, banana, 5));
	assert(strnstr(apple, banana, 2) == ft_strnstr(apple, banana, 2));
	assert(strnstr(apple, banana, 0) == ft_strnstr(apple, banana, 0));

	assert(strnstr(apple, empty, 1) == ft_strnstr(apple, empty, 1));
	assert(strnstr(empty, apple, 10) == ft_strnstr(empty, apple, 10));

	assert(strnstr(apple, apple, 20) == ft_strnstr(apple, apple, 20));
	assert(strnstr(apple, ppl, 3) == ft_strnstr(apple, ppl, 3));
	assert(strnstr(apple, ppl, 4) == ft_strnstr(apple, ppl, 4));
	assert(strnstr(apple, ppl, 6) == ft_strnstr(apple, ppl, 6));
	assert(strnstr(empty, empty, 2) == ft_strnstr(empty, empty, 2));
	puts("strnstr ok");
	return (0);
}

