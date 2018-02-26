#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include "ft_string.h"
#include "ft_stdlib.h"
#include "ft_ctype.h"

#define DO_MEMFN_TEST(fn)             \
void	test_ ## fn (void)            \
{                                     \
    char *dst1 = calloc(90, 1);       \
    x_ ## fn (dst1, fn );             \
                                      \
    char *dst2 = calloc(90, 1);       \
    x_ ## fn (dst2, ft_ ## fn );      \
                                      \
    assert(!memcmp(dst1, dst2, 90));  \
    printf( #fn );                    \
    printf(": ok\n");                 \
}                                     \
                                      \
int	main(void)                        \
{                                     \
    test_ ## fn ();                   \
    return (0);                       \
}
