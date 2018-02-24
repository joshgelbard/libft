#include "../ft_strcat.h"

int	test_strcat(char *s1, char *s2)
{
	char *copy1 = strdup(s1);
	char *copy2 = strdup(s1);
	char *copy3 = strdup(s2);
	char *res1 = ft_strcat(copy1, s2);
	char *res2 = strcat(copy2, s2);
	return((strcmp(res1, res2) == 0 && strcmp(copy1, copy2) == 0 && strcmp(s2, copy3) == 0) ? 1 : 0);
}

int	main(void)
{
	assert(test_strcat("abc\0\0\0", "def"));
	assert(test_strcat("", ""));
	assert(test_strcat("abc\0\0\0", ""));
	assert(test_strcat("", "abc\0\0\0"));
	puts("ok");
	return (0);
}
