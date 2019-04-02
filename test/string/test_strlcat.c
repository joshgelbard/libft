#include "test.h"

int	test_strlcat(char *s1, char *s2, int n)
{
	char *copy1 = strdup(s1);
	char *copy2 = strdup(s1);
	size_t res1 = ft_strlcat(copy1, s2, n);
	size_t res2 = strlcat(copy2, s2, n);
	return (res1 == res2 && !strcmp(copy1, copy2));
}

int	main(void)
{
	assert(test_strlcat("abc", "def", 6));
	assert(test_strlcat("size13\0\0\0\0\0\0", "too many", 13));
	assert(test_strlcat("abc", "defg", 0));
	assert(test_strlcat("abc", "defxxxxxaoeu", 9));
	assert(test_strlcat("", "", 2));
	assert(test_strlcat("abc\0\0\0", "", 6));
	assert(test_strlcat("", "abc\0\0\0", 1));
	puts("strlcat ok");
	return (0);
}
