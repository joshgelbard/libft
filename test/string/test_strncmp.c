#include "test.h"

int	main(void)
{
	char *s1 = "banana";
	char *s2 = "banana";
	char *s3 = "apple";
	char *s4 = "";
	assert(strncmp(s1, s2, 3) == ft_strncmp(s1, s2, 3));
	assert(strncmp(s1, s3, 2) == ft_strncmp(s1, s3, 2));
	assert(strncmp(s3, s1, 0) == ft_strncmp(s3, s1, 0));
	assert(strncmp(s1, s4, 5) == ft_strncmp(s1, s4, 5));
	assert(strncmp(s4, s4, 12) == ft_strncmp(s4, s4, 12));
	assert(strncmp("0x", "0x1234", 2) == ft_strncmp("0x", "0x1234", 2));
	puts("strncmp ok");
	return (0);
}
