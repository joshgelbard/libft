#include "test.h"

int	main(void)
{
	char *dst1 = calloc(90, 1);
	char *dst2 = calloc(90, 1);
	memset(dst1, 'x', 14);
	memset(dst2, 'x', 14);
	char hasb[90];
	char b_is_late[90];
	bzero(hasb, 90);
	bzero(b_is_late, 90);
	strcat(hasb, "aababa");
	strcat(b_is_late, "aaaaaaaaaaaaaaaaaaaaaba");

	char *res1 = (char *)memccpy(dst1, hasb, 'b', 10);
	char *res2 = (char *)ft_memccpy(dst2, hasb, 'b', 10);
	assert(memcmp(dst1, dst2, 90) == 0);
	assert((!res1 && !res2) || res1 - dst1 == res2 - dst2);


	res1 = (char *)memccpy(dst1, b_is_late, 'b', 10);
	res2 = (char *)ft_memccpy(dst2, b_is_late, 'b', 10);
	assert(memcmp(dst1, dst2, 90) == 0);
	assert((!res1 && !res2) || res1 - dst1 == res2 - dst2);

	puts("memccpy ok");

	return (0);
}
