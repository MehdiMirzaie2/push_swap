#include "ps.h"

void quit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

int ft_isnum(char *data)
{
    while (*data)
    {
        if (!(*data >= '0' && *data <= '9') && (*data != '-' && *data != '+'))
            return (-1);
        ++data;
    }
    return (0);
}

void check_if_correct_input(char **values)
{
	while (*values)
	{
		if (ft_isnum(*values) == -1)
		{
			quit();
		}
		++values;
	}
}

t_node	*lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void free_linked_list(t_node *head)
{
    t_node *current = head;
    t_node *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}

void is_correct_order(t_node *head)
{
    while (head->next != NULL)
    {
        head = head->next;
        if (head->data < head->prev->data)
            return ;
    }
    free_linked_list(head);
    exit(EXIT_SUCCESS);
}