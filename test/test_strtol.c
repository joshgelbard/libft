#include "ft_strtol.h"

int	main(void)
{
	char *strs[] = {
		"1",
		"22",
		"z",
		"f",
		"0",
		"2x2x2",
		"8",
		"2147483647",
		"2147483648",
		"9223372036854775808",
		"9223372036854775807",
		"9223372036854775808      a",
		"9223372036854775807 ueo",
		"9223372036854775999",
		"9223372036854775999",
		"aaaED7aafffff123d",
		"aoeoe10293xaoeu",
		"3FaFaF",
		NULL
	};
	char *prefixes[] = {

		"+",
		"-",
		"0xr",
		"1x",
		"    ",
		"   -",
		"    +",

		"    + 0x",
		"    -   0x",
		"a",
		"0",
		"0x",
		"",
		"+0",
		"-0",
		"      +0",
		"     -0",
		NULL
	};
	int bases[] = { 10, 0, 2, 36, 35, 16, 8, 1, -1, 37, 90000, -999 };
	int i, j, k, base;
	char *endptr1 = malloc(sizeof (char *));
	char *endptr2 = malloc(sizeof (char *));
	long res1, res2;
	char *str = calloc(90, 1);
	
	i = -1;
	while (strs[++i] != NULL)
	{
		j = -1;
		while (bases[++j] != -999)
		{
			k = -1;
			base = bases[j];
			while (prefixes[++k] != NULL)
			{
				bzero(str, 90);
				strcat(str, prefixes[k]);
				strcat(str, strs[i]);
				res1 = strtol(str, &endptr1, base);
				res2 = ft_strtol(str, &endptr2, base);
				assert(endptr1 == endptr2);
				assert(res1 == res2);
			}
		}
	}
	puts("ok");
	return (0);
}
