#include "test.h"

int	main(void)
{
	char *s = (char *)(ft_memalloc(10));
	char *t = calloc(10, 1);
	assert(!memcmp(s, t, 10));
	strcpy(s, "123456789");
	strcpy(t, "123456789");
	assert(!strcmp(s, t));
	puts("memalloc ok");
}
