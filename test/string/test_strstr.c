#include "test.h"

int	test_strstr(char *s1, char *s2)
{
	int res1 = (strstr(s1, s2) == ft_strstr(s1, s2));
	int res2 = (strstr(s2, s1) == ft_strstr(s2, s1));
	if (!res1)
	{
		printf("failed on %s, %s\n", s1, s2);
		printf("theirs: %p, yours: %p\n", strstr(s1, s2), ft_strstr(s1, s2));
	}
	if (!res2)
	{
		printf("failed on %s, %s\n", s2, s1);
		printf("theirs: %p, yours: %p\n", strstr(s2, s1), ft_strstr(s2, s1));
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
		assert(test_strstr(s, t));
	}
	puts("strstr ok");
	return (0);
}
