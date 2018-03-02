#include "test.h"
#include <limits.h>

int	main(void)
{
	int ints[] = { 0, 1, 11, 1234, 9090, 99999 };
	//char *int_max_str = "2147483647";
//	char *int_min_str = "-2147483648";
	char *strs[] = { "0", "1", "11", "1234", "9090", "99999", NULL };
	char *neg = calloc(20, 1);
	char *ans;
	char *neg_ans;
	int i = 0;
	while (strs[i])
	{
		bzero(neg, 20);
		if (ints[i] != 0)
			strcat(neg, "-");
		strcat(neg, strs[i]);
		ans = ft_itoa(ints[i]);
		neg_ans = ft_itoa(ints[i] * -1);
		printf("ft_itoa(%s) == %s and negative == %s\n", strs[i], ans, neg_ans);
		assert(!strcmp(strs[i], ans));
		assert(!strcmp(neg, neg_ans));
		i++;
	}
	puts("itoa ok");
	return(0);
}
