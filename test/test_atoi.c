#include "ft_atoi.h"

int	main(void)
{
	char *strs[] = {
		"5",
		"-5",
		"+5",
		"50",
		"-50",
		"    -5",
		" -2147483648",
		" -2147483651",
		"214783648",
		" 2147483647",
		"",
		"a",
		"a 10",
		" - 10",
		"10  ",
		"10  x",
		" 10 ",
		NULL,
	};
	int i = -1;
	while (strs[++i] != NULL)
		assert(atoi(strs[i]) == ft_atoi(strs[i]));
	puts("ok");
	return (0);
}
