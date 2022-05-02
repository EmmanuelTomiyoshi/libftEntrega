#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		f = NULL;
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}
