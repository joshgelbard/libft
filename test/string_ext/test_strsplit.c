#include "test.h"

void	print_was_wrong(char **wrong_ary, char **right_ary, int wrong_idx, char *og_str)
{
	printf("wrong answer for %s: res[%d] was %s but should have been %s (%p vs %p)\n",
			og_str, wrong_idx, wrong_ary[wrong_idx], right_ary[wrong_idx], wrong_ary[wrong_idx], right_ary[wrong_idx]);
}

static int test_one(char *str, char **expect)
{
	char **res = ft_strsplit(str, '*');
	int correct = 1;
	for (int i = 0; expect[i][0] != '\0'; i++)
		if (!(res[i]) || strcmp(res[i], expect[i]))
		{
			print_was_wrong(res, expect, i, str);
			correct = 0;
		}
	return (correct);
}

void make_str(char *s, int i, int j, int k, int l)
{
	char *correct_answer[] = {
		"one",
		"2",
		"three",
		""
	};
	char *stars = "***";
	strcat(s, ft_strsub(stars, 0, i));
	strcat(s, correct_answer[0]);
	strcat(s, ft_strsub(stars, 0, j));
	strcat(s, correct_answer[1]);
	strcat(s, ft_strsub(stars, 0, k));
	strcat(s, correct_answer[2]);
	strcat(s, ft_strsub(stars, 0, l));
}

int	main(void)
{
	char *if_one[] = {"one2three", ""};
	char *if_twoA[] = {"one", "2three", ""};
	char *if_twoB[] = {"one2", "three", ""};
	char *if_three[] = {"one", "2", "three", ""};
	char *s = calloc(90, 1);
	for (int i = 0; i < 3; i++)
	for (int j = 0; j < 3; j++)
	for (int k = 0; k < 3; k++)
	for (int l = 0; l < 3; l++) // oh no
	{
		bzero(s, 90);
		make_str(s, i, j, k, l);
		if (!j && !k)
			assert(test_one(s, if_one));
		if (j && !k)
			assert(test_one(s, if_twoA));
		if (!j && k)
			assert(test_one(s, if_twoB));
		if (j && k)
			assert(test_one(s, if_three));
	}
	puts("strsplit ok");
	return (0);
}
