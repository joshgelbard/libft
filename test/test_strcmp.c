#include "ft_strcmp.h"

int	main(void)
{
	char *s1 = "banana";
	char *s2 = "apple";
	char *s3 = "apple\200";
	char *s4 = "";
	assert(strcmp(s1, s2) == ft_strcmp(s1, s2));
	assert(strcmp(s1, s3) == ft_strcmp(s1, s3));
	assert(strcmp(s3, s1) == ft_strcmp(s3, s1));
	assert(strcmp(s1, s4) == ft_strcmp(s1, s4));
	assert(strcmp(s4, s4) == ft_strcmp(s4, s4));
	puts("ok");
	return (0);
}
