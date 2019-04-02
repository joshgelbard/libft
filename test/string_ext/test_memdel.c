#include "test.h"

int	main(void)
{
	ft_memdel(NULL);
	ft_memdel((void **)NULL);
	void *s = malloc(1);
	assert(s != NULL);
	ft_memdel(&s);
	assert(s == NULL);
	puts("memdel ok");
	return(0);
}
