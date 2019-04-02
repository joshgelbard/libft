#include "test.h"

int	main(void)
{
	char s[] = "banana";

	ft_strclr(s);
	for (size_t i = 0; i < strlen("banana" + 1); i++)
		assert(s[i] == '\0');
	puts("strclr ok");
	return(0);
}
