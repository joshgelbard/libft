#include "test.h"

int	main(void)
{
	t_list *curr = ft_lstnew(NULL, 0);
	t_list *head;
	head = curr;
	int i = 0;
	char *contents[] = { "a", NULL, "c", "d", NULL };
	while (i < 4)
	{
		curr->next = ft_lstnew(contents[i], contents[i] ? strlen(contents[i]) + 1 : 20);
		curr = curr->next;
		i++;
	}
	print_list(head->next);
	return(0);
}
