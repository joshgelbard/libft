#include "test.h"

int	main(void)
{
	char s[] = "aroechuracoheu\200x\0aoeuaoeu";
	assert(ft_strlen(s) == strlen(s));
	assert(ft_strlen("") == strlen(""));
	puts("strlen ok");
	return (0);
}
