#include "ft_strlen.h"

int	main(void)
{
	char s[] = "aroechuracoheu\200x\0aoeuaoeu";
	assert(ft_strlen(s) == strlen(s));
	assert(ft_strlen("") == strlen(""));
	puts("ok");
	return (0);
}
