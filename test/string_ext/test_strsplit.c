#include "test.h"

static int	test_many_combinations(void)
{
	char *first = "one";
	char *second = "2";
	char *third = "three";
	char *s = calloc(90, 1);
	char *stars = "****";
	int	allcorrect = 1;
	for (int i = 0; i < 3; i++)
	for (int j = 0; j < 3; j++)
	for (int k = 0; k < 3; k++)
	for (int l = 0; l < 3; l++) // oh no
	{
		bzero(s, 90);
		printf(".");
		strcat(s, ft_strsub(stars, 0, i));
		strcat(s, first);
		strcat(s, ft_strsub(stars, 0, j));
		strcat(s, second);
		strcat(s, ft_strsub(stars, 0, k));
		strcat(s, third);
		strcat(s, ft_strsub(stars, 0, l));
		char **res = ft_strsplit(s, '*');
		if (strcmp(res[0], first)
				|| strcmp(res[1], second)
				|| strcmp(res[2], third))
		{
			allcorrect=0;
			printf("split %s, got: %s, %s, %s\n", s, res[0], res[1], res[2]);
		}
	}
	return (allcorrect);
}





int	main(void)
{
	assert(test_many_combinations());
	puts("strsplit ok");
	return(0);
}
