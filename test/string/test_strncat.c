#include "test.h"

int	test_strncat(char *s1, char *s2)
{
	char *copy1 = strdup(s1);
	char *copy2 = strdup(s1);
	char *copy3 = strdup(s2);
	char *res1 = ft_strncat(copy1, s2, 2);
	char *res2 = strncat(copy2, s2, 2);
	return ((strcmp(res1, res2) == 0 && strcmp(copy1, copy2) == 0 && strcmp(s2, copy3) == 0) ? 1 : 0);
}

int	main(void)
{
	assert(test_strncat("abc\0\0\0", "def"));
	assert(test_strncat("", ""));
	assert(test_strncat("abc\0\0\0", ""));
	assert(test_strncat("", "abc\0\0\0"));
	puts("strncat ok");
	return (0);
}
