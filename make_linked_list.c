#include "ps.h"

static void add(t_node *head, int value)
{
    t_node *current = head;

    if (value > 2147483647 || value < -2147483648)
    {
        free(head);
        quit();
    }   
    while (current->next != NULL)
        current = current->next;
    current->next = malloc(sizeof(t_node));
    if (!current)
    {
        free(head);
        quit();
    }
    current->next->data = value;
    current->next->next = NULL;
}

int make_linked_list(t_node **head, char **value)
{
    t_node *latest_node;
    t_node  *prev_node;

    int     length;

    length = 1;
    *head = malloc(sizeof(t_node));
    if (!head)
    {
        quit();
        // ft_putstr_fd("Error\n", 2);
        // exit(EXIT_FAILURE);
    }
    (*head)->next = NULL;
    (*head)->data = ft_atoi(*value);
    if ((*head)->data > 2147483647 || (*head)->data < -2147483648)
    {
	    free_linked_list(*head);
        quit();
    }
    latest_node = *head;
    while (++value != NULL && *value != NULL)
    {
        add(latest_node, ft_atoi(*value));
        prev_node = latest_node;
        latest_node = latest_node->next;
        latest_node->prev = prev_node;
        length++;
    }
    return (length);
}
