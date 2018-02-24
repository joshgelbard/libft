#include "ft_memcpy.h"


int	main(void)
{
	char *src = calloc(90, 1);
	char *dst1 = calloc(90, 1);
	char *dst2 = calloc(90, 1);
	strcat(src, "ababababababababa");
	strcat(dst1, ".........");
	strcat(dst2, ".........");
	memcpy(dst1, src, 5);
	ft_memcpy(dst2, src, 5);
	assert(memcmp(dst1, dst2, 90) == 0);
	memcpy(dst1 + 9, src, 40);
	ft_memcpy(dst2 + 9, src, 40);
	assert(memcmp(dst1, dst2, 90) == 0);
	puts("ok");
	return (0);
}
