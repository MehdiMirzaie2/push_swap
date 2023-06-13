#include "ps.h"

void three_sort(t_node **head, t_node **tail)
{
	if ((*head)->data > (*head)->next->data
		&& (*head)->next->data < (*head)->next->next->data
		&& (*head)->data < (*head)->next->next->data)
		swap(head);

	else if ((*head)->data > (*head)->next->data
		&& (*head)->next->data > (*head)->next->next->data)
	{
		swap(head);
		reverse_rotate(head, tail);
	}
	else if ((*head)->data > (*head)->next->data
		&& (*head)->next->data < (*head)->next->next->data
		&& (*head)->data > (*head)->next->next->data)
		rotate(head, tail);

	else if ((*head)->data < (*head)->next->data
		&& (*head)->next->data > (*head)->next->next->data
		&& (*head)->data < (*head)->next->next->data)
	{
		swap(head);
		rotate(head, tail);
	}

	else if ((*head)->data < (*head)->next->data
		&& (*head)->next->data > (*head)->next->next->data
		&& (*head)->data > (*head)->next->next->data)
		reverse_rotate(head, tail);
}
