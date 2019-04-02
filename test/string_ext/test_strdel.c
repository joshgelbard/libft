#include "test.h"

int main() {
	ft_strdel(NULL);
	ft_strdel((char **)NULL);
	char *s = malloc(1);
	assert(s != NULL);
	ft_strdel(&s);
	assert(s == NULL);
	puts("strdel ok");
	return(0);
}
