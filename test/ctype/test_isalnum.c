#include "test.h"


int	main(void) {
	for (int c = -300; c < 900; c++) 
		assert(isalnum(c) == ft_isalnum(c));
	puts("isalnum ok");
	return (0);
}
