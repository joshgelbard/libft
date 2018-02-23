#include "ft_memset.h"

int	main(void)
{
	char *somedata = malloc(90);
	bzero(somedata, 90);
	strcat(somedata, "98723498123673491");
	strcat(somedata + 34, "anoeudrpgdroceu");
	char *p1 = malloc(90);
	char *p2 = malloc(90);
	memcpy(p1, somedata, 90);
	memcpy(p2, somedata, 90);
	memset(p1 + 12, '_', 28);
	ft_memset(p2 + 12, '_', 28);
	if (memcmp(p1, p2, 90) == 0)
		puts("ok");
	return (0);
}
