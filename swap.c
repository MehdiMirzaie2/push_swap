#include "ps.h"

void swap(t_node **head)
{
	int temp_int;
	
	t_node *new_head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	new_head = *head;
	temp_int = (new_head)->data;
	new_head = new_head->next;
	(*head)->data = new_head->data;
	new_head->data = temp_int;
	ft_putstr_fd("sa\n", 1);
}
