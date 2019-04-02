#include "test.h"
#include "ft_string.h"

int	test_strnstr(char *s1, char *s2, int n)
{
	int res1 = (strnstr(s1, s2, n) == ft_strnstr(s1, s2, n));
	int res2 = (strnstr(s2, s1, n) == ft_strnstr(s2, s1, n));
	if (!res1)
	{
		printf("failed on %s, %s, %d\n", s1, s2, n);
		printf("theirs: %p, yours: %p\n", strnstr(s1, s2, n), ft_strnstr(s1, s2, n));
	}
	if (!res2)
	{
		printf("failed on %s, %s, %d\n", s2, s1, n);
		printf("theirs: %p, yours: %p\n", strnstr(s2, s1, n), ft_strnstr(s2, s1, n));
	}
	return (res1 && res2);
}

int	main(void)
{
	char *pairs[][2] = {
		{ "xa", "a" },
		{ "ababababc", "abc" },
		{ "1212", "21" },
		{ "nooooooooope", "oo!" }
	};
	char *s;
	char *t;

	for (int i = 0; i < 4; i++)
	{
		s = pairs[i][0];
		t = pairs[i][1];
		for (int j = 0; j < 15; j++)
			assert(test_strnstr(s, t, j));
	}
	puts("strnstr ok");
	return (0);
}
