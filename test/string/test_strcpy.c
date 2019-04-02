#include "test.h"

int	main(void)
{
	char str[] = "banana";
	char str2[] = "";
	char *dst = calloc(90, 1);
	char *dst2 = calloc(90, 1);
	ft_strcpy(dst2, str);
	strcpy(dst, str);
	assert(!strcmp(dst, dst2));
	ft_strcpy(dst2, str2);
	strcpy(dst, str2);
	assert(!strcmp(dst, dst2));
	puts("strcpy ok");
	return (0);
}
